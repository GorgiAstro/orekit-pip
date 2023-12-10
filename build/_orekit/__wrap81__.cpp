#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonFieldAbstractIntegratedPropagator::live$ = false;

        jclass PythonFieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fd706f9f174d8023] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_16c8184497a1d794] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_75bae68924620d17] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractIntegratedPropagator::PythonFieldAbstractIntegratedPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fd706f9f174d8023, a0.this$, a1.this$, a2.this$)) {}

        void PythonFieldAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldAbstractIntegratedPropagator::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractIntegratedPropagator, t_PythonFieldAbstractIntegratedPropagator, PythonFieldAbstractIntegratedPropagator);
        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_Object(const PythonFieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonFieldAbstractIntegratedPropagator), module, "PythonFieldAbstractIntegratedPropagator", 1);
        }

        void t_PythonFieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "class_", make_descriptor(PythonFieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;", (void *) t_PythonFieldAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractIntegratedPropagator::wrap_Object(PythonFieldAbstractIntegratedPropagator(((t_PythonFieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::PropagationType a2((jobject) NULL);
          PyTypeObject **p2;
          PythonFieldAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractIntegratedPropagator(a0, a1, a2));
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

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldStateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OOOOOO", o0, o1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(::org::hipparchus::ode::FieldODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
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

        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/AbstractDragForceModel.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *AbstractDragForceModel::class$ = NULL;
        jmethodID *AbstractDragForceModel::mids$ = NULL;
        bool AbstractDragForceModel::live$ = false;

        jclass AbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/AbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_isGradientStateDerivative_1b0abd4f90ebd0eb] = env->getMethodID(cls, "isGradientStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_getGradientDensityWrtStateUsingFiniteDifferences_6e7f00aaa60e8b64] = env->getMethodID(cls, "getGradientDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_isDSStateDerivative_1b0abd4f90ebd0eb] = env->getMethodID(cls, "isDSStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_getDSDensityWrtStateUsingFiniteDifferences_7bcfffd6fc22faec] = env->getMethodID(cls, "getDSDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_isVariable_69a4264a1435534c] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Z");
            mids$[mid_isVariable_67abdb36e56ec75b] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;I)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean AbstractDragForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
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
        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self);

        static PyMethodDef t_AbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, dependsOnPositionOnly, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDragForceModel)[] = {
          { Py_tp_methods, t_AbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDragForceModel, t_AbstractDragForceModel, AbstractDragForceModel);

        void t_AbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDragForceModel), &PY_TYPE_DEF(AbstractDragForceModel), module, "AbstractDragForceModel", 0);
        }

        void t_AbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "class_", make_descriptor(AbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "wrapfn_", make_descriptor(t_AbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractDragForceModel::wrap_Object(AbstractDragForceModel(((t_AbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbit::class$ = NULL;
      jmethodID *FieldOrbit::mids$ = NULL;
      bool FieldOrbit::live$ = false;

      jclass FieldOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_4e49f6ed48591ef2] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_eba8e72a22c984ac] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_eba8e72a22c984ac] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_eba8e72a22c984ac] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_eba8e72a22c984ac] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_eba8e72a22c984ac] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getJacobianWrtCartesian_d8c958ab52d41303] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getJacobianWrtParameters_d8c958ab52d41303] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getKeplerianMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_eba8e72a22c984ac] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_eba8e72a22c984ac] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_eba8e72a22c984ac] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_eba8e72a22c984ac] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDotWrtA_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_eba8e72a22c984ac] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_f7bcbf2fe13428b6] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_716f50c86ffc8da7] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_f336610fe073f215] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_b108b35ef48e27bd] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_b108b35ef48e27bd] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_00f12a4c5cc81008] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_toOrbit_cde5690bfa4f9649] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getZero_eba8e72a22c984ac] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOne_eba8e72a22c984ac] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_716f50c86ffc8da7] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hasNonKeplerianAcceleration_1f0f5bd13cc77104] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Z");
          mids$[mid_fillHalfRow_ef7c59e647fa628c] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_ded6f9df44cdf5dc] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_eeb06ff3ca7c9188] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_f81122e41aebb1f8] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_74695c6204a01fd1] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_e8bccbcec536708d] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_4e49f6ed48591ef2], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_eba8e72a22c984ac]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldOrbit::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac]));
      }

      ::org::orekit::frames::Frame FieldOrbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_eba8e72a22c984ac]));
      }

      void FieldOrbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_d8c958ab52d41303], a0.this$, a1.this$);
      }

      void FieldOrbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_d8c958ab52d41303], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMeanAnomalyDotWrtA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_eba8e72a22c984ac]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f89522ff77904397]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f7bcbf2fe13428b6], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f336610fe073f215], a0.this$));
      }

      ::org::orekit::orbits::OrbitType FieldOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean FieldOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_b108b35ef48e27bd]);
      }

      jboolean FieldOrbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_b108b35ef48e27bd]);
      }

      FieldOrbit FieldOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_00f12a4c5cc81008], a0.this$));
      }

      ::org::orekit::orbits::Orbit FieldOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_toOrbit_cde5690bfa4f9649]));
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
      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg);
      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data);
      static PyGetSetDef t_FieldOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbit, a),
        DECLARE_GET_FIELD(t_FieldOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldOrbit, date),
        DECLARE_GET_FIELD(t_FieldOrbit, e),
        DECLARE_GET_FIELD(t_FieldOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldOrbit, elliptical),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, frame),
        DECLARE_GET_FIELD(t_FieldOrbit, hx),
        DECLARE_GET_FIELD(t_FieldOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldOrbit, hy),
        DECLARE_GET_FIELD(t_FieldOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, i),
        DECLARE_GET_FIELD(t_FieldOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldOrbit, lE),
        DECLARE_GET_FIELD(t_FieldOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lM),
        DECLARE_GET_FIELD(t_FieldOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lv),
        DECLARE_GET_FIELD(t_FieldOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldOrbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_FieldOrbit, mu),
        DECLARE_GET_FIELD(t_FieldOrbit, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldOrbit, position),
        DECLARE_GET_FIELD(t_FieldOrbit, type),
        DECLARE_GET_FIELD(t_FieldOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, shiftedBy, METH_O),
        DECLARE_METHOD(t_FieldOrbit, toOrbit, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbit)[] = {
        { Py_tp_methods, t_FieldOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrbit, t_FieldOrbit, FieldOrbit);
      PyObject *t_FieldOrbit::wrap_Object(const FieldOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbit), &PY_TYPE_DEF(FieldOrbit), module, "FieldOrbit", 0);
      }

      void t_FieldOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "class_", make_descriptor(FieldOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "wrapfn_", make_descriptor(t_FieldOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldOrbit::wrap_Object(FieldOrbit(((t_FieldOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getADot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHxDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getIDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLvDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args)
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

      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldOrbit result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data)
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
#include "org/orekit/orbits/OrbitHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitHermiteInterpolator::class$ = NULL;
      jmethodID *OrbitHermiteInterpolator::mids$ = NULL;
      bool OrbitHermiteInterpolator::live$ = false;

      jclass OrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f67f9ac4338cd9bf] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_66865f52d36c8d04] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_1958d683b153c045] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_1274df0c3ddd4327] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f67f9ac4338cd9bf, a0, a1.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_66865f52d36c8d04, a0, a1.this$, a2.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1958d683b153c045, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter OrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_16e9a7b5414faf2d]));
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
      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args);
      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self);
      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data);
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_OrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_OrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_OrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_OrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_OrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitHermiteInterpolator, t_OrbitHermiteInterpolator, OrbitHermiteInterpolator);
      PyObject *t_OrbitHermiteInterpolator::wrap_Object(const OrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitHermiteInterpolator), &PY_TYPE_DEF(OrbitHermiteInterpolator), module, "OrbitHermiteInterpolator", 0);
      }

      void t_OrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "class_", make_descriptor(OrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_OrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_OrbitHermiteInterpolator::wrap_Object(OrbitHermiteInterpolator(((t_OrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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

      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/net/URL.h"
#include "java/io/IOException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace java {
  namespace net {

    ::java::lang::Class *URL::class$ = NULL;
    jmethodID *URL::mids$ = NULL;
    bool URL::live$ = false;

    jclass URL::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/net/URL");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_61200f39e8218ddc] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;Ljava/lang/String;)V");
        mids$[mid_init$_3c57e287341c9288] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_c32bde162ef40e6b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAuthority_11b109bd155ca898] = env->getMethodID(cls, "getAuthority", "()Ljava/lang/String;");
        mids$[mid_getContent_4d26fd885228c716] = env->getMethodID(cls, "getContent", "()Ljava/lang/Object;");
        mids$[mid_getContent_a718a18fc6fa87f0] = env->getMethodID(cls, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
        mids$[mid_getDefaultPort_570ce0828f81a2c1] = env->getMethodID(cls, "getDefaultPort", "()I");
        mids$[mid_getFile_11b109bd155ca898] = env->getMethodID(cls, "getFile", "()Ljava/lang/String;");
        mids$[mid_getHost_11b109bd155ca898] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
        mids$[mid_getPath_11b109bd155ca898] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getPort_570ce0828f81a2c1] = env->getMethodID(cls, "getPort", "()I");
        mids$[mid_getProtocol_11b109bd155ca898] = env->getMethodID(cls, "getProtocol", "()Ljava/lang/String;");
        mids$[mid_getQuery_11b109bd155ca898] = env->getMethodID(cls, "getQuery", "()Ljava/lang/String;");
        mids$[mid_getRef_11b109bd155ca898] = env->getMethodID(cls, "getRef", "()Ljava/lang/String;");
        mids$[mid_getUserInfo_11b109bd155ca898] = env->getMethodID(cls, "getUserInfo", "()Ljava/lang/String;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_openStream_51fdc45647b8e866] = env->getMethodID(cls, "openStream", "()Ljava/io/InputStream;");
        mids$[mid_sameFile_c31132c160c2df88] = env->getMethodID(cls, "sameFile", "(Ljava/net/URL;)Z");
        mids$[mid_toExternalForm_11b109bd155ca898] = env->getMethodID(cls, "toExternalForm", "()Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    URL::URL(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    URL::URL(const URL & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_61200f39e8218ddc, a0.this$, a1.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, jint a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c32bde162ef40e6b, a0.this$, a1.this$, a2, a3.this$)) {}

    jboolean URL::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::String URL::getAuthority() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAuthority_11b109bd155ca898]));
    }

    ::java::lang::Object URL::getContent() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_4d26fd885228c716]));
    }

    ::java::lang::Object URL::getContent(const JArray< ::java::lang::Class > & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_a718a18fc6fa87f0], a0.this$));
    }

    jint URL::getDefaultPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultPort_570ce0828f81a2c1]);
    }

    ::java::lang::String URL::getFile() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFile_11b109bd155ca898]));
    }

    ::java::lang::String URL::getHost() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_11b109bd155ca898]));
    }

    ::java::lang::String URL::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_11b109bd155ca898]));
    }

    jint URL::getPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getPort_570ce0828f81a2c1]);
    }

    ::java::lang::String URL::getProtocol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProtocol_11b109bd155ca898]));
    }

    ::java::lang::String URL::getQuery() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getQuery_11b109bd155ca898]));
    }

    ::java::lang::String URL::getRef() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRef_11b109bd155ca898]));
    }

    ::java::lang::String URL::getUserInfo() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUserInfo_11b109bd155ca898]));
    }

    jint URL::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    ::java::io::InputStream URL::openStream() const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStream_51fdc45647b8e866]));
    }

    jboolean URL::sameFile(const URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_sameFile_c31132c160c2df88], a0.this$);
    }

    ::java::lang::String URL::toExternalForm() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toExternalForm_11b109bd155ca898]));
    }

    ::java::lang::String URL::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace net {
    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg);
    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds);
    static PyObject *t_URL_equals(t_URL *self, PyObject *args);
    static PyObject *t_URL_getAuthority(t_URL *self);
    static PyObject *t_URL_getContent(t_URL *self, PyObject *args);
    static PyObject *t_URL_getDefaultPort(t_URL *self);
    static PyObject *t_URL_getFile(t_URL *self);
    static PyObject *t_URL_getHost(t_URL *self);
    static PyObject *t_URL_getPath(t_URL *self);
    static PyObject *t_URL_getPort(t_URL *self);
    static PyObject *t_URL_getProtocol(t_URL *self);
    static PyObject *t_URL_getQuery(t_URL *self);
    static PyObject *t_URL_getRef(t_URL *self);
    static PyObject *t_URL_getUserInfo(t_URL *self);
    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args);
    static PyObject *t_URL_openStream(t_URL *self);
    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg);
    static PyObject *t_URL_toExternalForm(t_URL *self);
    static PyObject *t_URL_toString(t_URL *self, PyObject *args);
    static PyObject *t_URL_get__authority(t_URL *self, void *data);
    static PyObject *t_URL_get__content(t_URL *self, void *data);
    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data);
    static PyObject *t_URL_get__file(t_URL *self, void *data);
    static PyObject *t_URL_get__host(t_URL *self, void *data);
    static PyObject *t_URL_get__path(t_URL *self, void *data);
    static PyObject *t_URL_get__port(t_URL *self, void *data);
    static PyObject *t_URL_get__protocol(t_URL *self, void *data);
    static PyObject *t_URL_get__query(t_URL *self, void *data);
    static PyObject *t_URL_get__ref(t_URL *self, void *data);
    static PyObject *t_URL_get__userInfo(t_URL *self, void *data);
    static PyGetSetDef t_URL__fields_[] = {
      DECLARE_GET_FIELD(t_URL, authority),
      DECLARE_GET_FIELD(t_URL, content),
      DECLARE_GET_FIELD(t_URL, defaultPort),
      DECLARE_GET_FIELD(t_URL, file),
      DECLARE_GET_FIELD(t_URL, host),
      DECLARE_GET_FIELD(t_URL, path),
      DECLARE_GET_FIELD(t_URL, port),
      DECLARE_GET_FIELD(t_URL, protocol),
      DECLARE_GET_FIELD(t_URL, query),
      DECLARE_GET_FIELD(t_URL, ref),
      DECLARE_GET_FIELD(t_URL, userInfo),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_URL__methods_[] = {
      DECLARE_METHOD(t_URL, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, equals, METH_VARARGS),
      DECLARE_METHOD(t_URL, getAuthority, METH_NOARGS),
      DECLARE_METHOD(t_URL, getContent, METH_VARARGS),
      DECLARE_METHOD(t_URL, getDefaultPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getFile, METH_NOARGS),
      DECLARE_METHOD(t_URL, getHost, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPath, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getProtocol, METH_NOARGS),
      DECLARE_METHOD(t_URL, getQuery, METH_NOARGS),
      DECLARE_METHOD(t_URL, getRef, METH_NOARGS),
      DECLARE_METHOD(t_URL, getUserInfo, METH_NOARGS),
      DECLARE_METHOD(t_URL, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_URL, openStream, METH_NOARGS),
      DECLARE_METHOD(t_URL, sameFile, METH_O),
      DECLARE_METHOD(t_URL, toExternalForm, METH_NOARGS),
      DECLARE_METHOD(t_URL, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(URL)[] = {
      { Py_tp_methods, t_URL__methods_ },
      { Py_tp_init, (void *) t_URL_init_ },
      { Py_tp_getset, t_URL__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(URL)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(URL, t_URL, URL);

    void t_URL::install(PyObject *module)
    {
      installType(&PY_TYPE(URL), &PY_TYPE_DEF(URL), module, "URL", 0);
    }

    void t_URL::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "class_", make_descriptor(URL::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "wrapfn_", make_descriptor(t_URL::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, URL::initializeClass, 1)))
        return NULL;
      return t_URL::wrap_Object(URL(((t_URL *) arg)->object.this$));
    }
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, URL::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = URL(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          URL a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ks", URL::initializeClass, &a0, &a1))
          {
            INT_CALL(object = URL(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = URL(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ssIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = URL(a0, a1, a2, a3));
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

    static PyObject *t_URL_equals(t_URL *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_URL_getAuthority(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAuthority());
      return j2p(result);
    }

    static PyObject *t_URL_getContent(t_URL *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getContent());
          return ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Class > a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "[K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = self->object.getContent(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getContent", args);
      return NULL;
    }

    static PyObject *t_URL_getDefaultPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getFile(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFile());
      return j2p(result);
    }

    static PyObject *t_URL_getHost(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getHost());
      return j2p(result);
    }

    static PyObject *t_URL_getPath(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_URL_getPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getProtocol(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getProtocol());
      return j2p(result);
    }

    static PyObject *t_URL_getQuery(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getQuery());
      return j2p(result);
    }

    static PyObject *t_URL_getRef(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getRef());
      return j2p(result);
    }

    static PyObject *t_URL_getUserInfo(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getUserInfo());
      return j2p(result);
    }

    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_URL_openStream(t_URL *self)
    {
      ::java::io::InputStream result((jobject) NULL);
      OBJ_CALL(result = self->object.openStream());
      return ::java::io::t_InputStream::wrap_Object(result);
    }

    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg)
    {
      URL a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", URL::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.sameFile(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "sameFile", arg);
      return NULL;
    }

    static PyObject *t_URL_toExternalForm(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toExternalForm());
      return j2p(result);
    }

    static PyObject *t_URL_toString(t_URL *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_URL_get__authority(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAuthority());
      return j2p(value);
    }

    static PyObject *t_URL_get__content(t_URL *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getContent());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__file(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFile());
      return j2p(value);
    }

    static PyObject *t_URL_get__host(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getHost());
      return j2p(value);
    }

    static PyObject *t_URL_get__path(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static PyObject *t_URL_get__port(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__protocol(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getProtocol());
      return j2p(value);
    }

    static PyObject *t_URL_get__query(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getQuery());
      return j2p(value);
    }

    static PyObject *t_URL_get__ref(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getRef());
      return j2p(value);
    }

    static PyObject *t_URL_get__userInfo(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getUserInfo());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RiccatiEquationSolverImpl.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolverImpl::class$ = NULL;
      jmethodID *RiccatiEquationSolverImpl::mids$ = NULL;
      bool RiccatiEquationSolverImpl::live$ = false;

      jclass RiccatiEquationSolverImpl::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolverImpl");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c0499df1156f9183] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getK_688b496048ff947b] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_688b496048ff947b] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RiccatiEquationSolverImpl::RiccatiEquationSolverImpl(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0499df1156f9183, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_688b496048ff947b]));
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
      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data);
      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolverImpl__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolverImpl__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolverImpl)[] = {
        { Py_tp_methods, t_RiccatiEquationSolverImpl__methods_ },
        { Py_tp_init, (void *) t_RiccatiEquationSolverImpl_init_ },
        { Py_tp_getset, t_RiccatiEquationSolverImpl__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolverImpl)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolverImpl, t_RiccatiEquationSolverImpl, RiccatiEquationSolverImpl);

      void t_RiccatiEquationSolverImpl::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolverImpl), &PY_TYPE_DEF(RiccatiEquationSolverImpl), module, "RiccatiEquationSolverImpl", 0);
      }

      void t_RiccatiEquationSolverImpl::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "class_", make_descriptor(RiccatiEquationSolverImpl::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "wrapfn_", make_descriptor(t_RiccatiEquationSolverImpl::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolverImpl::wrap_Object(RiccatiEquationSolverImpl(((t_RiccatiEquationSolverImpl *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
        RiccatiEquationSolverImpl object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = RiccatiEquationSolverImpl(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Map::class$ = NULL;
    jmethodID *Map::mids$ = NULL;
    bool Map::live$ = false;

    jclass Map::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Map");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_65c7d273e80d497a] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_65c7d273e80d497a] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_copyOf_6d7943ade285151c] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_entry_506a08338a957026] = env->getStaticMethodID(cls, "entry", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_entrySet_015730311a5bacdc] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_9facd1449e0950d3] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_af8aa32ee9c1f184] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_015730311a5bacdc] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_of_6f5a75ccd8c04465] = env->getStaticMethodID(cls, "of", "()Ljava/util/Map;");
        mids$[mid_of_0230da4ce7f50443] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_37e7d6b433ea7953] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_f014ccd973c33628] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_3e52097ac9713b78] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_f402d216c31c5c31] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_4adc26f6d0db7be0] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_e8186696f1d9c3fe] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_50f01dc7221d287f] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_fa9742f1aea28178] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_0f3bc04a26388bd2] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_ofEntries_a93b0a2f3f9d0160] = env->getStaticMethodID(cls, "ofEntries", "([Ljava/util/Map$Entry;)Ljava/util/Map;");
        mids$[mid_put_af8aa32ee9c1f184] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_db8de8bc54857165] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_af8aa32ee9c1f184] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_9facd1449e0950d3] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_83750138b7b51bf4] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_af8aa32ee9c1f184] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_25e3a1e437d39751] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_37528d110cff6b74] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Map::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    jboolean Map::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_65c7d273e80d497a], a0.this$);
    }

    jboolean Map::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_65c7d273e80d497a], a0.this$);
    }

    Map Map::copyOf(const Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_copyOf_6d7943ade285151c], a0.this$));
    }

    ::java::util::Map$Entry Map::entry(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map$Entry(env->callStaticObjectMethod(cls, mids$[mid_entry_506a08338a957026], a0.this$, a1.this$));
    }

    ::java::util::Set Map::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_015730311a5bacdc]));
    }

    jboolean Map::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Map::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_9facd1449e0950d3], a0.this$));
    }

    ::java::lang::Object Map::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    jint Map::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Map::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Set Map::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_015730311a5bacdc]));
    }

    Map Map::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_6f5a75ccd8c04465]));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_0230da4ce7f50443], a0.this$, a1.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_37e7d6b433ea7953], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_f014ccd973c33628], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_3e52097ac9713b78], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_f402d216c31c5c31], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_4adc26f6d0db7be0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_e8186696f1d9c3fe], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_50f01dc7221d287f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_fa9742f1aea28178], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17, const ::java::lang::Object & a18, const ::java::lang::Object & a19)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_0f3bc04a26388bd2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$));
    }

    Map Map::ofEntries(const JArray< ::java::util::Map$Entry > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_ofEntries_a93b0a2f3f9d0160], a0.this$));
    }

    ::java::lang::Object Map::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    void Map::putAll(const Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_db8de8bc54857165], a0.this$);
    }

    ::java::lang::Object Map::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    ::java::lang::Object Map::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_9facd1449e0950d3], a0.this$));
    }

    jboolean Map::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_83750138b7b51bf4], a0.this$, a1.this$);
    }

    ::java::lang::Object Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    jboolean Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_25e3a1e437d39751], a0.this$, a1.this$, a2.this$);
    }

    jint Map::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::util::Collection Map::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_37528d110cff6b74]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_of_(t_Map *self, PyObject *args);
    static PyObject *t_Map_clear(t_Map *self);
    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg);
    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg);
    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_entrySet(t_Map *self);
    static PyObject *t_Map_equals(t_Map *self, PyObject *args);
    static PyObject *t_Map_get(t_Map *self, PyObject *arg);
    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args);
    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args);
    static PyObject *t_Map_isEmpty(t_Map *self);
    static PyObject *t_Map_keySet(t_Map *self);
    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_put(t_Map *self, PyObject *args);
    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg);
    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args);
    static PyObject *t_Map_remove(t_Map *self, PyObject *args);
    static PyObject *t_Map_replace(t_Map *self, PyObject *args);
    static PyObject *t_Map_size(t_Map *self);
    static PyObject *t_Map_values(t_Map *self);
    static PyObject *t_Map_get__empty(t_Map *self, void *data);
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data);
    static PyGetSetDef t_Map__fields_[] = {
      DECLARE_GET_FIELD(t_Map, empty),
      DECLARE_GET_FIELD(t_Map, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Map__methods_[] = {
      DECLARE_METHOD(t_Map, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, of_, METH_VARARGS),
      DECLARE_METHOD(t_Map, clear, METH_NOARGS),
      DECLARE_METHOD(t_Map, containsKey, METH_O),
      DECLARE_METHOD(t_Map, containsValue, METH_O),
      DECLARE_METHOD(t_Map, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, entry, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, equals, METH_VARARGS),
      DECLARE_METHOD(t_Map, get, METH_O),
      DECLARE_METHOD(t_Map, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Map, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Map, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Map, keySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, ofEntries, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, put, METH_VARARGS),
      DECLARE_METHOD(t_Map, putAll, METH_O),
      DECLARE_METHOD(t_Map, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Map, remove, METH_VARARGS),
      DECLARE_METHOD(t_Map, replace, METH_VARARGS),
      DECLARE_METHOD(t_Map, size, METH_NOARGS),
      DECLARE_METHOD(t_Map, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Map)[] = {
      { Py_tp_methods, t_Map__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Map__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Map)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Map, t_Map, Map);
    PyObject *t_Map::wrap_Object(const Map& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Map::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Map::install(PyObject *module)
    {
      installType(&PY_TYPE(Map), &PY_TYPE_DEF(Map), module, "Map", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "Entry", make_descriptor(&PY_TYPE_DEF(Map$Entry)));
    }

    void t_Map::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "class_", make_descriptor(Map::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "wrapfn_", make_descriptor(t_Map::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Map::initializeClass, 1)))
        return NULL;
      return t_Map::wrap_Object(Map(((t_Map *) arg)->object.this$));
    }
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Map::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Map_of_(t_Map *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Map_clear(t_Map *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::copyOf(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Map::entry(a0, a1));
        return ::java::util::t_Map$Entry::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "entry", args);
      return NULL;
    }

    static PyObject *t_Map_entrySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Map_equals(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Map_get(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getOrDefault", args);
      return NULL;
    }

    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Map_isEmpty(t_Map *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Map_keySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Map result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map::of());
          return t_Map::wrap_Object(result);
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 12:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 14:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 16:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 18:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 20:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          ::java::lang::Object a18((jobject) NULL);
          ::java::lang::Object a19((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19));
            return t_Map::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::util::Map$Entry > a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "[K", ::java::util::Map$Entry::initializeClass, &a0, &p0, ::java::util::t_Map$Entry::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::ofEntries(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "ofEntries", arg);
      return NULL;
    }

    static PyObject *t_Map_put(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "putIfAbsent", args);
      return NULL;
    }

    static PyObject *t_Map_remove(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remove", args);
      return NULL;
    }

    static PyObject *t_Map_replace(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_Map_size(t_Map *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Map_values(t_Map *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Map_get__empty(t_Map *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustDirectionProvider::class$ = NULL;
          jmethodID *PythonThrustDirectionProvider::mids$ = NULL;
          bool PythonThrustDirectionProvider::live$ = false;

          jclass PythonThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeThrustDirection_35628cd92ea82231] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustDirectionProvider::PythonThrustDirectionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonThrustDirectionProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonThrustDirectionProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonThrustDirectionProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self);
          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args);
          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data);
          static PyGetSetDef t_PythonThrustDirectionProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustDirectionProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_PythonThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustDirectionProvider)[] = {
            { Py_tp_methods, t_PythonThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_PythonThrustDirectionProvider_init_ },
            { Py_tp_getset, t_PythonThrustDirectionProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustDirectionProvider, t_PythonThrustDirectionProvider, PythonThrustDirectionProvider);

          void t_PythonThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustDirectionProvider), &PY_TYPE_DEF(PythonThrustDirectionProvider), module, "PythonThrustDirectionProvider", 1);
          }

          void t_PythonThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "class_", make_descriptor(PythonThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "wrapfn_", make_descriptor(t_PythonThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustDirectionProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustDirectionProvider_computeThrustDirection0 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustDirectionProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_PythonThrustDirectionProvider::wrap_Object(PythonThrustDirectionProvider(((t_PythonThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustDirectionProvider object((jobject) NULL);

            INT_CALL(object = PythonThrustDirectionProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "computeThrustDirection", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("computeThrustDirection", result);
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

          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyStaticContext::class$ = NULL;
            jmethodID *DSSTThirdBodyStaticContext::mids$ = NULL;
            bool DSSTThirdBodyStaticContext::live$ = false;

            jclass DSSTThirdBodyStaticContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_12159449c454d20b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;DD[D)V");
                mids$[mid_getMaxAR3Pow_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxAR3Pow", "()I");
                mids$[mid_getMaxEccPow_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEccPow", "()I");
                mids$[mid_getMaxFreqF_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxFreqF", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyStaticContext::DSSTThirdBodyStaticContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_12159449c454d20b, a0.this$, a1, a2, a3.this$)) {}

            jint DSSTThirdBodyStaticContext::getMaxAR3Pow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxAR3Pow_570ce0828f81a2c1]);
            }

            jint DSSTThirdBodyStaticContext::getMaxEccPow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxEccPow_570ce0828f81a2c1]);
            }

            jint DSSTThirdBodyStaticContext::getMaxFreqF() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxFreqF_570ce0828f81a2c1]);
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
            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyStaticContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxAR3Pow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxEccPow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxFreqF),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyStaticContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxAR3Pow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxEccPow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxFreqF, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyStaticContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyStaticContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyStaticContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyStaticContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyStaticContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyStaticContext, t_DSSTThirdBodyStaticContext, DSSTThirdBodyStaticContext);

            void t_DSSTThirdBodyStaticContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyStaticContext), &PY_TYPE_DEF(DSSTThirdBodyStaticContext), module, "DSSTThirdBodyStaticContext", 0);
            }

            void t_DSSTThirdBodyStaticContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "class_", make_descriptor(DSSTThirdBodyStaticContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyStaticContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyStaticContext::wrap_Object(DSSTThirdBodyStaticContext(((t_DSSTThirdBodyStaticContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              DSSTThirdBodyStaticContext object((jobject) NULL);

              if (!parseArgs(args, "kDD[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DSSTThirdBodyStaticContext(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxEccPow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxFreqF());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxEccPow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxFreqF());
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
#include "org/hipparchus/util/Precision.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Precision::class$ = NULL;
      jmethodID *Precision::mids$ = NULL;
      bool Precision::live$ = false;
      jdouble Precision::EPSILON = (jdouble) 0;
      jdouble Precision::SAFE_MIN = (jdouble) 0;

      jclass Precision::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Precision");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compareTo_c269e3712d9a5c10] = env->getStaticMethodID(cls, "compareTo", "(DDD)I");
          mids$[mid_compareTo_4665f8d5604f6baa] = env->getStaticMethodID(cls, "compareTo", "(DDI)I");
          mids$[mid_equals_ff85a0d8ff097ee5] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_equals_eb68599ac5568215] = env->getStaticMethodID(cls, "equals", "(FF)Z");
          mids$[mid_equals_01c0c8b0c5f55ddf] = env->getStaticMethodID(cls, "equals", "(DDD)Z");
          mids$[mid_equals_93464f2e5006fab3] = env->getStaticMethodID(cls, "equals", "(DDI)Z");
          mids$[mid_equals_eaecaea95011b92a] = env->getStaticMethodID(cls, "equals", "(FFF)Z");
          mids$[mid_equals_1a6c810d2be465b0] = env->getStaticMethodID(cls, "equals", "(FFI)Z");
          mids$[mid_equalsIncludingNaN_ff85a0d8ff097ee5] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DD)Z");
          mids$[mid_equalsIncludingNaN_eb68599ac5568215] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FF)Z");
          mids$[mid_equalsIncludingNaN_01c0c8b0c5f55ddf] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDD)Z");
          mids$[mid_equalsIncludingNaN_eaecaea95011b92a] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFF)Z");
          mids$[mid_equalsIncludingNaN_93464f2e5006fab3] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDI)Z");
          mids$[mid_equalsIncludingNaN_1a6c810d2be465b0] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFI)Z");
          mids$[mid_equalsWithRelativeTolerance_01c0c8b0c5f55ddf] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(DDD)Z");
          mids$[mid_isMathematicalInteger_2e401133981893e4] = env->getStaticMethodID(cls, "isMathematicalInteger", "(D)Z");
          mids$[mid_isMathematicalInteger_fe32376435eb98dd] = env->getStaticMethodID(cls, "isMathematicalInteger", "(F)Z");
          mids$[mid_representableDelta_86ffecc08a63eff0] = env->getStaticMethodID(cls, "representableDelta", "(DD)D");
          mids$[mid_round_948617e69b66e15d] = env->getStaticMethodID(cls, "round", "(DI)D");
          mids$[mid_round_8842c007fabd6574] = env->getStaticMethodID(cls, "round", "(FI)F");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EPSILON = env->getStaticDoubleField(cls, "EPSILON");
          SAFE_MIN = env->getStaticDoubleField(cls, "SAFE_MIN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_c269e3712d9a5c10], a0, a1, a2);
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_4665f8d5604f6baa], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_ff85a0d8ff097ee5], a0, a1);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_eb68599ac5568215], a0, a1);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_01c0c8b0c5f55ddf], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_93464f2e5006fab3], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_eaecaea95011b92a], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_1a6c810d2be465b0], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_ff85a0d8ff097ee5], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_eb68599ac5568215], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_01c0c8b0c5f55ddf], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_eaecaea95011b92a], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_93464f2e5006fab3], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_1a6c810d2be465b0], a0, a1, a2);
      }

      jboolean Precision::equalsWithRelativeTolerance(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_01c0c8b0c5f55ddf], a0, a1, a2);
      }

      jboolean Precision::isMathematicalInteger(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_2e401133981893e4], a0);
      }

      jboolean Precision::isMathematicalInteger(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_fe32376435eb98dd], a0);
      }

      jdouble Precision::representableDelta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_representableDelta_86ffecc08a63eff0], a0, a1);
      }

      jdouble Precision::round(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_round_948617e69b66e15d], a0, a1);
      }

      jfloat Precision::round(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_round_8842c007fabd6574], a0, a1);
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
      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Precision__methods_[] = {
        DECLARE_METHOD(t_Precision, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, compareTo, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, isMathematicalInteger, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, representableDelta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, round, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Precision)[] = {
        { Py_tp_methods, t_Precision__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Precision)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Precision, t_Precision, Precision);

      void t_Precision::install(PyObject *module)
      {
        installType(&PY_TYPE(Precision), &PY_TYPE_DEF(Precision), module, "Precision", 0);
      }

      void t_Precision::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "class_", make_descriptor(Precision::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "wrapfn_", make_descriptor(t_Precision::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "boxfn_", make_descriptor(boxObject));
        env->getClass(Precision::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "EPSILON", make_descriptor(Precision::EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "SAFE_MIN", make_descriptor(Precision::SAFE_MIN));
      }

      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Precision::initializeClass, 1)))
          return NULL;
        return t_Precision::wrap_Object(Precision(((t_Precision *) arg)->object.this$));
      }
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Precision::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "compareTo", args);
        return NULL;
      }

      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jboolean result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jboolean result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMathematicalInteger", args);
        return NULL;
      }

      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::representableDelta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "representableDelta", args);
        return NULL;
      }

      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationListener.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationListener::class$ = NULL;
      jmethodID *IterationListener::mids$ = NULL;
      bool IterationListener::live$ = false;

      jclass IterationListener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationListener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_initializationPerformed_5d333913f82828b1] = env->getMethodID(cls, "initializationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationPerformed_5d333913f82828b1] = env->getMethodID(cls, "iterationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationStarted_5d333913f82828b1] = env->getMethodID(cls, "iterationStarted", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_terminationPerformed_5d333913f82828b1] = env->getMethodID(cls, "terminationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IterationListener::initializationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_initializationPerformed_5d333913f82828b1], a0.this$);
      }

      void IterationListener::iterationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationPerformed_5d333913f82828b1], a0.this$);
      }

      void IterationListener::iterationStarted(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationStarted_5d333913f82828b1], a0.this$);
      }

      void IterationListener::terminationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_terminationPerformed_5d333913f82828b1], a0.this$);
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
      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg);

      static PyMethodDef t_IterationListener__methods_[] = {
        DECLARE_METHOD(t_IterationListener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, initializationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationStarted, METH_O),
        DECLARE_METHOD(t_IterationListener, terminationPerformed, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationListener)[] = {
        { Py_tp_methods, t_IterationListener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationListener)[] = {
        &PY_TYPE_DEF(::java::util::EventListener),
        NULL
      };

      DEFINE_TYPE(IterationListener, t_IterationListener, IterationListener);

      void t_IterationListener::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationListener), &PY_TYPE_DEF(IterationListener), module, "IterationListener", 0);
      }

      void t_IterationListener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "class_", make_descriptor(IterationListener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "wrapfn_", make_descriptor(t_IterationListener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationListener::initializeClass, 1)))
          return NULL;
        return t_IterationListener::wrap_Object(IterationListener(((t_IterationListener *) arg)->object.this$));
      }
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationListener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.initializationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "initializationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationStarted(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationStarted", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.terminationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "terminationPerformed", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepNormalizer::class$ = NULL;
        jmethodID *OrekitStepNormalizer::mids$ = NULL;
        bool OrekitStepNormalizer::live$ = false;

        jclass OrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_768baea54d9d6ae5] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getFixedStepHandler_19a1bf169a3bb19e] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_dff5885c2c873297] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_aa75aa80a734fb3b] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitStepNormalizer::OrekitStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_768baea54d9d6ae5, a0, a1.this$)) {}

        void OrekitStepNormalizer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
        }

        ::org::orekit::propagation::sampling::OrekitFixedStepHandler OrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::OrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_19a1bf169a3bb19e]));
        }

        jdouble OrekitStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_dff5885c2c873297]);
        }

        void OrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_aa75aa80a734fb3b], a0.this$);
        }

        void OrekitStepNormalizer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data);
        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_OrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_OrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepNormalizer)[] = {
          { Py_tp_methods, t_OrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_OrekitStepNormalizer_init_ },
          { Py_tp_getset, t_OrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepNormalizer, t_OrekitStepNormalizer, OrekitStepNormalizer);

        void t_OrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepNormalizer), &PY_TYPE_DEF(OrekitStepNormalizer), module, "OrekitStepNormalizer", 0);
        }

        void t_OrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "class_", make_descriptor(OrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "wrapfn_", make_descriptor(t_OrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_OrekitStepNormalizer::wrap_Object(OrekitStepNormalizer(((t_OrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);
          OrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = OrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg)
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

        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args)
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

        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
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
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_22785eec4395e4ae] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Kurtosis;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Kurtosis::Kurtosis() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void Kurtosis::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Kurtosis Kurtosis::copy() const
          {
            return Kurtosis(env->callObjectMethod(this$, mids$[mid_copy_22785eec4395e4ae]));
          }

          jdouble Kurtosis::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jlong Kurtosis::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Kurtosis::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Kurtosis::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497a::Well44497a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Well44497a::Well44497a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      Well44497a::Well44497a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Well44497a::Well44497a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint Well44497a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
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
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularDerivativesFilter::class$ = NULL;
      jmethodID *AngularDerivativesFilter::mids$ = NULL;
      bool AngularDerivativesFilter::live$ = false;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_R = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RR = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RRA = NULL;

      jclass AngularDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_83a5754f370d3085] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_a81edba1c6afa987] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_values_8d6457b4af8f2941] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/AngularDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_R = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_R", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RR = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RR", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RRA = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RRA", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularDerivativesFilter AngularDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_83a5754f370d3085], a0));
      }

      jint AngularDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_570ce0828f81a2c1]);
      }

      AngularDerivativesFilter AngularDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a81edba1c6afa987], a0.this$));
      }

      JArray< AngularDerivativesFilter > AngularDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< AngularDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_8d6457b4af8f2941]));
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
      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self);
      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data);
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data);
      static PyGetSetDef t_AngularDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_AngularDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularDerivativesFilter)[] = {
        { Py_tp_methods, t_AngularDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AngularDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(AngularDerivativesFilter, t_AngularDerivativesFilter, AngularDerivativesFilter);
      PyObject *t_AngularDerivativesFilter::wrap_Object(const AngularDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AngularDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AngularDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularDerivativesFilter), &PY_TYPE_DEF(AngularDerivativesFilter), module, "AngularDerivativesFilter", 0);
      }

      void t_AngularDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "class_", make_descriptor(AngularDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "wrapfn_", make_descriptor(t_AngularDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_R", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_R)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RR", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RRA", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RRA)));
      }

      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_AngularDerivativesFilter::wrap_Object(AngularDerivativesFilter(((t_AngularDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::getFilter(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::valueOf(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< AngularDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_AngularDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GillIntegratorBuilder.h"
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

        ::java::lang::Class *GillIntegratorBuilder::class$ = NULL;
        jmethodID *GillIntegratorBuilder::mids$ = NULL;
        bool GillIntegratorBuilder::live$ = false;

        jclass GillIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegratorBuilder::GillIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator GillIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GillIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GillIntegratorBuilder, t_GillIntegratorBuilder, GillIntegratorBuilder);

        void t_GillIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegratorBuilder), &PY_TYPE_DEF(GillIntegratorBuilder), module, "GillIntegratorBuilder", 0);
        }

        void t_GillIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "class_", make_descriptor(GillIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "wrapfn_", make_descriptor(t_GillIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillIntegratorBuilder::wrap_Object(GillIntegratorBuilder(((t_GillIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *EpochDerivativesEquations::class$ = NULL;
        jmethodID *EpochDerivativesEquations::mids$ = NULL;
        bool EpochDerivativesEquations::live$ = false;
        jint EpochDerivativesEquations::STATE_DIMENSION = (jint) 0;

        jclass EpochDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/EpochDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0ed4a72bb044bc07] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/propagation/numerical/NumericalPropagator;)V");
            mids$[mid_combinedDerivatives_4fc0958a0539e1d3] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_setInitialJacobians_f43130c50e9fafeb] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_db5060b3fc07ab0a] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_9648e5fea30e68b0] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D[D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EpochDerivativesEquations::EpochDerivativesEquations(const ::java::lang::String & a0, const ::org::orekit::propagation::numerical::NumericalPropagator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ed4a72bb044bc07, a0.this$, a1.this$)) {}

        ::org::orekit::propagation::integration::CombinedDerivatives EpochDerivativesEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_4fc0958a0539e1d3], a0.this$));
        }

        jint EpochDerivativesEquations::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        ::java::lang::String EpochDerivativesEquations::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_f43130c50e9fafeb], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_db5060b3fc07ab0a], a0.this$, a1.this$, a2.this$));
        }

        void EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialJacobians_9648e5fea30e68b0], a0.this$, a1.this$, a2.this$, a3.this$);
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
        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args);
        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data);
        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data);
        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data);
        static PyGetSetDef t_EpochDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, dimension),
          DECLARE_SET_FIELD(t_EpochDerivativesEquations, initialJacobians),
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EpochDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_EpochDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_EpochDerivativesEquations, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, getName, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, setInitialJacobians, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EpochDerivativesEquations)[] = {
          { Py_tp_methods, t_EpochDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_EpochDerivativesEquations_init_ },
          { Py_tp_getset, t_EpochDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EpochDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EpochDerivativesEquations, t_EpochDerivativesEquations, EpochDerivativesEquations);

        void t_EpochDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(EpochDerivativesEquations), &PY_TYPE_DEF(EpochDerivativesEquations), module, "EpochDerivativesEquations", 0);
        }

        void t_EpochDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "class_", make_descriptor(EpochDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "wrapfn_", make_descriptor(t_EpochDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          env->getClass(EpochDerivativesEquations::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "STATE_DIMENSION", make_descriptor(EpochDerivativesEquations::STATE_DIMENSION));
        }

        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EpochDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_EpochDerivativesEquations::wrap_Object(EpochDerivativesEquations(((t_EpochDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EpochDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator a1((jobject) NULL);
          EpochDerivativesEquations object((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::propagation::numerical::NumericalPropagator::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EpochDerivativesEquations(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0, a1, a2));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setInitialJacobians(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialJacobians", args);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialJacobians(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialJacobians", arg);
          return -1;
        }

        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "java/lang/Double.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriver::class$ = NULL;
      jmethodID *ParameterDriver::mids$ = NULL;
      bool ParameterDriver::live$ = false;

      jclass ParameterDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_09f2813532e594da] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
          mids$[mid_init$_96cc451b9ef9ee86] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/TimeSpanMap;DDDD)V");
          mids$[mid_addObserver_beaf65de1f6a41ab] = env->getMethodID(cls, "addObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_addSpanAtDate_600a2a61652bc473] = env->getMethodID(cls, "addSpanAtDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_addSpans_da69b15169b809c3] = env->getMethodID(cls, "addSpans", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getMaxValue_dff5885c2c873297] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinValue_dff5885c2c873297] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getNameSpan_22dfbc0bf613c8d6] = env->getMethodID(cls, "getNameSpan", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
          mids$[mid_getNamesSpanMap_62c7757711639c83] = env->getMethodID(cls, "getNamesSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getNbOfValues_570ce0828f81a2c1] = env->getMethodID(cls, "getNbOfValues", "()I");
          mids$[mid_getNormalizedValue_dff5885c2c873297] = env->getMethodID(cls, "getNormalizedValue", "()D");
          mids$[mid_getNormalizedValue_bf1d7732f1acb697] = env->getMethodID(cls, "getNormalizedValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getObservers_2afa36052df4765d] = env->getMethodID(cls, "getObservers", "()Ljava/util/List;");
          mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getReferenceValue_dff5885c2c873297] = env->getMethodID(cls, "getReferenceValue", "()D");
          mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
          mids$[mid_getTransitionDates_4dd12f6fac20c51e] = env->getMethodID(cls, "getTransitionDates", "()[Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_getValue_bf1d7732f1acb697] = env->getMethodID(cls, "getValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValue_6810b9d6ff563a3b] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValue_e9b8f1c3e8e1bfec] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValueContinuousEstimation_bf1d7732f1acb697] = env->getMethodID(cls, "getValueContinuousEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValueSpanMap_62c7757711639c83] = env->getMethodID(cls, "getValueSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getValueStepEstimation_bf1d7732f1acb697] = env->getMethodID(cls, "getValueStepEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValues_60c7040667a7dc5c] = env->getMethodID(cls, "getValues", "()[D");
          mids$[mid_isContinuousEstimation_b108b35ef48e27bd] = env->getMethodID(cls, "isContinuousEstimation", "()Z");
          mids$[mid_isSelected_b108b35ef48e27bd] = env->getMethodID(cls, "isSelected", "()Z");
          mids$[mid_removeObserver_beaf65de1f6a41ab] = env->getMethodID(cls, "removeObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_replaceObserver_a1adb55e7004d222] = env->getMethodID(cls, "replaceObserver", "(Lorg/orekit/utils/ParameterObserver;Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_setContinuousEstimation_bd04c9335fb9e4cf] = env->getMethodID(cls, "setContinuousEstimation", "(Z)V");
          mids$[mid_setMaxValue_17db3a65980d3441] = env->getMethodID(cls, "setMaxValue", "(D)V");
          mids$[mid_setMinValue_17db3a65980d3441] = env->getMethodID(cls, "setMinValue", "(D)V");
          mids$[mid_setName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
          mids$[mid_setNormalizedValue_17db3a65980d3441] = env->getMethodID(cls, "setNormalizedValue", "(D)V");
          mids$[mid_setNormalizedValue_a7786d9d355d3792] = env->getMethodID(cls, "setNormalizedValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceDate_600a2a61652bc473] = env->getMethodID(cls, "setReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceValue_17db3a65980d3441] = env->getMethodID(cls, "setReferenceValue", "(D)V");
          mids$[mid_setScale_17db3a65980d3441] = env->getMethodID(cls, "setScale", "(D)V");
          mids$[mid_setSelected_bd04c9335fb9e4cf] = env->getMethodID(cls, "setSelected", "(Z)V");
          mids$[mid_setValue_17db3a65980d3441] = env->getMethodID(cls, "setValue", "(D)V");
          mids$[mid_setValue_a7786d9d355d3792] = env->getMethodID(cls, "setValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setValueSpanMap_01a5c4b8230d6f04] = env->getMethodID(cls, "setValueSpanMap", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_09f2813532e594da, a0.this$, a1, a2, a3, a4)) {}

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, const ::org::orekit::utils::TimeSpanMap & a1, const ::org::orekit::utils::TimeSpanMap & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96cc451b9ef9ee86, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

      void ParameterDriver::addObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addObserver_beaf65de1f6a41ab], a0.this$);
      }

      void ParameterDriver::addSpanAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpanAtDate_600a2a61652bc473], a0.this$);
      }

      void ParameterDriver::addSpans(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpans_da69b15169b809c3], a0.this$, a1.this$, a2);
      }

      jdouble ParameterDriver::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_dff5885c2c873297]);
      }

      jdouble ParameterDriver::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_dff5885c2c873297]);
      }

      ::java::lang::String ParameterDriver::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::java::lang::String ParameterDriver::getNameSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNameSpan_22dfbc0bf613c8d6], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getNamesSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getNamesSpanMap_62c7757711639c83]));
      }

      jint ParameterDriver::getNbOfValues() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbOfValues_570ce0828f81a2c1]);
      }

      jdouble ParameterDriver::getNormalizedValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_dff5885c2c873297]);
      }

      jdouble ParameterDriver::getNormalizedValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_bf1d7732f1acb697], a0.this$);
      }

      ::java::util::List ParameterDriver::getObservers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservers_2afa36052df4765d]));
      }

      ::org::orekit::time::AbsoluteDate ParameterDriver::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
      }

      jdouble ParameterDriver::getReferenceValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReferenceValue_dff5885c2c873297]);
      }

      jdouble ParameterDriver::getScale() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
      }

      JArray< ::org::orekit::time::AbsoluteDate > ParameterDriver::getTransitionDates() const
      {
        return JArray< ::org::orekit::time::AbsoluteDate >(env->callObjectMethod(this$, mids$[mid_getTransitionDates_4dd12f6fac20c51e]));
      }

      jdouble ParameterDriver::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
      }

      jdouble ParameterDriver::getValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_6810b9d6ff563a3b], a0, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_e9b8f1c3e8e1bfec], a0, a1.this$, a2.this$));
      }

      jdouble ParameterDriver::getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueContinuousEstimation_bf1d7732f1acb697], a0.this$);
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getValueSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getValueSpanMap_62c7757711639c83]));
      }

      jdouble ParameterDriver::getValueStepEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueStepEstimation_bf1d7732f1acb697], a0.this$);
      }

      JArray< jdouble > ParameterDriver::getValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_60c7040667a7dc5c]));
      }

      jboolean ParameterDriver::isContinuousEstimation() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isContinuousEstimation_b108b35ef48e27bd]);
      }

      jboolean ParameterDriver::isSelected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSelected_b108b35ef48e27bd]);
      }

      void ParameterDriver::removeObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeObserver_beaf65de1f6a41ab], a0.this$);
      }

      void ParameterDriver::replaceObserver(const ::org::orekit::utils::ParameterObserver & a0, const ::org::orekit::utils::ParameterObserver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_replaceObserver_a1adb55e7004d222], a0.this$, a1.this$);
      }

      void ParameterDriver::setContinuousEstimation(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setContinuousEstimation_bd04c9335fb9e4cf], a0);
      }

      void ParameterDriver::setMaxValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxValue_17db3a65980d3441], a0);
      }

      void ParameterDriver::setMinValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinValue_17db3a65980d3441], a0);
      }

      void ParameterDriver::setName(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setName_d0bc48d5b00dc40c], a0.this$);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_17db3a65980d3441], a0);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_a7786d9d355d3792], a0, a1.this$);
      }

      void ParameterDriver::setReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceDate_600a2a61652bc473], a0.this$);
      }

      void ParameterDriver::setReferenceValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceValue_17db3a65980d3441], a0);
      }

      void ParameterDriver::setScale(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_17db3a65980d3441], a0);
      }

      void ParameterDriver::setSelected(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSelected_bd04c9335fb9e4cf], a0);
      }

      void ParameterDriver::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_17db3a65980d3441], a0);
      }

      void ParameterDriver::setValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_a7786d9d355d3792], a0, a1.this$);
      }

      void ParameterDriver::setValueSpanMap(const ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValueSpanMap_01a5c4b8230d6f04], a0.this$);
      }

      ::java::lang::String ParameterDriver::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data);
      static PyGetSetDef t_ParameterDriver__fields_[] = {
        DECLARE_GETSET_FIELD(t_ParameterDriver, continuousEstimation),
        DECLARE_GETSET_FIELD(t_ParameterDriver, maxValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, minValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, name),
        DECLARE_GET_FIELD(t_ParameterDriver, namesSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, nbOfValues),
        DECLARE_GETSET_FIELD(t_ParameterDriver, normalizedValue),
        DECLARE_GET_FIELD(t_ParameterDriver, observers),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceDate),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, scale),
        DECLARE_GETSET_FIELD(t_ParameterDriver, selected),
        DECLARE_GET_FIELD(t_ParameterDriver, transitionDates),
        DECLARE_GETSET_FIELD(t_ParameterDriver, value),
        DECLARE_GETSET_FIELD(t_ParameterDriver, valueSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, values),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, addObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpanAtDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpans, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getName, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNameSpan, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getNamesSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNbOfValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getObservers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getScale, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getTransitionDates, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValueSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueStepEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isContinuousEstimation, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isSelected, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, removeObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, replaceObserver, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMaxValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMinValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setName, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setReferenceDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setReferenceValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setScale, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setSelected, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setValueSpanMap, METH_O),
        DECLARE_METHOD(t_ParameterDriver, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriver)[] = {
        { Py_tp_methods, t_ParameterDriver__methods_ },
        { Py_tp_init, (void *) t_ParameterDriver_init_ },
        { Py_tp_getset, t_ParameterDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriver, t_ParameterDriver, ParameterDriver);

      void t_ParameterDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriver), &PY_TYPE_DEF(ParameterDriver), module, "ParameterDriver", 0);
      }

      void t_ParameterDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "class_", make_descriptor(ParameterDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "wrapfn_", make_descriptor(t_ParameterDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriver::wrap_Object(ParameterDriver(((t_ParameterDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeSpanMap a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sKKDDDD", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addSpanAtDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpanAtDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addSpans(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpans", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getNameSpan(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getNameSpan", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbOfValues());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormalizedValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormalizedValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterObserver));
      }

      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScale());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self)
      {
        JArray< ::org::orekit::time::AbsoluteDate > result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitionDates());
        return JArray<jobject>(result.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IK", ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::Map::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1, a2));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueContinuousEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueStepEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueStepEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValues());
        return result.wrap();
      }

      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSelected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);
        ::org::orekit::utils::ParameterObserver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterObserver::initializeClass, ::org::orekit::utils::ParameterObserver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.replaceObserver(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "replaceObserver", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setContinuousEstimation(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.setName(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setReferenceValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setSelected(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSelected", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg)
      {
        ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setValueSpanMap(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValueSpanMap", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ParameterDriver), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setContinuousEstimation(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "continuousEstimation", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::java::lang::String value((jobject) NULL);
          if (!parseArg(arg, "s", &value))
          {
            INT_CALL(self->object.setName(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "name", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbOfValues());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormalizedValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setNormalizedValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "normalizedValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceDate(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceDate", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setReferenceValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScale());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSelected());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setSelected(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "selected", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data)
      {
        JArray< ::org::orekit::time::AbsoluteDate > value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitionDates());
        return JArray<jobject>(value.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ParameterDriver value((jobject) NULL);
          if (!parseArg(arg, "k", ParameterDriver::initializeClass, &value))
          {
            INT_CALL(self->object.setValueSpanMap(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "valueSpanMap", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValues());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessageType::class$ = NULL;
          jmethodID *IgsSsrMessageType::mids$ = NULL;
          bool IgsSsrMessageType::live$ = false;
          IgsSsrMessageType *IgsSsrMessageType::IGM_01 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_02 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_03 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_04 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_05 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_06 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_07 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IM_201 = NULL;

          jclass IgsSsrMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_044bc996b7e01e86] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_getSatelliteId_ca48e2f2a322b431] = env->getStaticMethodID(cls, "getSatelliteId", "(Lorg/orekit/gnss/SatelliteSystem;I)I");
              mids$[mid_messageNumberToSatelliteSystem_88047dd77a18b2f0] = env->getStaticMethodID(cls, "messageNumberToSatelliteSystem", "(I)Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_valueOf_044bc996b7e01e86] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_values_23b79723d947151c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGM_01 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_01", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_02 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_02", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_03 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_03", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_04 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_04", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_05 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_05", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_06 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_06", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_07 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_07", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IM_201 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IM_201", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessageType IgsSsrMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_044bc996b7e01e86], a0.this$));
          }

          jint IgsSsrMessageType::getSatelliteId(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticIntMethod(cls, mids$[mid_getSatelliteId_ca48e2f2a322b431], a0.this$, a1);
          }

          ::org::orekit::gnss::SatelliteSystem IgsSsrMessageType::messageNumberToSatelliteSystem(jint a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::gnss::SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_messageNumberToSatelliteSystem_88047dd77a18b2f0], a0));
          }

          IgsSsrMessageType IgsSsrMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_044bc996b7e01e86], a0.this$));
          }

          JArray< IgsSsrMessageType > IgsSsrMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_23b79723d947151c]));
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
          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args);
          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type);
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data);
          static PyGetSetDef t_IgsSsrMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrMessageType__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, getSatelliteId, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, messageNumberToSatelliteSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessageType)[] = {
            { Py_tp_methods, t_IgsSsrMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessageType, t_IgsSsrMessageType, IgsSsrMessageType);
          PyObject *t_IgsSsrMessageType::wrap_Object(const IgsSsrMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessageType), &PY_TYPE_DEF(IgsSsrMessageType), module, "IgsSsrMessageType", 0);
          }

          void t_IgsSsrMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "class_", make_descriptor(IgsSsrMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "wrapfn_", make_descriptor(t_IgsSsrMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_01", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_01)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_02", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_02)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_03", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_03)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_04", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_04)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_05", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_05)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_06", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_06)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_07", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_07)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IM_201", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IM_201)));
          }

          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessageType::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessageType::wrap_Object(IgsSsrMessageType(((t_IgsSsrMessageType *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getMessageType(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint result;

            if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getSatelliteId(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError(type, "getSatelliteId", args);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::messageNumberToSatelliteSystem(a0));
              return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "messageNumberToSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::valueOf(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type)
          {
            JArray< IgsSsrMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrMessageType::wrap_jobject);
          }
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1D::class$ = NULL;
          jmethodID *Vector1D::mids$ = NULL;
          bool Vector1D::live$ = false;
          Vector1D *Vector1D::NEGATIVE_INFINITY = NULL;
          Vector1D *Vector1D::NaN = NULL;
          Vector1D *Vector1D::ONE = NULL;
          Vector1D *Vector1D::POSITIVE_INFINITY = NULL;
          Vector1D *Vector1D::ZERO = NULL;

          jclass Vector1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_7757c3d40a86ae4d] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_90fba1d39ff2c19f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_bb464d8a47dffde9] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_6eba53664f74ff3a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_add_b46f57fa6217d00f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_add_733d0ab0dc2eba13] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_distance_07bb97c2794cf6b1] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_e14b0b079d61a875] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distance1_b4822d5266bca26e] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_b4822d5266bca26e] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_e14b0b079d61a875] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distanceSq_b4822d5266bca26e] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_e14b0b079d61a875] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_dotProduct_b4822d5266bca26e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_65c7d273e80d497a] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_dff5885c2c873297] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_dff5885c2c873297] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_dff5885c2c873297] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getZero_90d24faee21188ef] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_90d24faee21188ef] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_scalarMultiply_45a3480a9fbf5253] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_b46f57fa6217d00f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_733d0ab0dc2eba13] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_7b429db583278c20] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NEGATIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              NaN = new Vector1D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ONE = new Vector1D(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              POSITIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ZERO = new Vector1D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1D::Vector1D(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7757c3d40a86ae4d, a0, a1.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_90fba1d39ff2c19f, a0, a1.this$, a2, a3.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb464d8a47dffde9, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5, jdouble a6, const Vector1D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6eba53664f74ff3a, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector1D Vector1D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_b46f57fa6217d00f], a0.this$));
          }

          Vector1D Vector1D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_733d0ab0dc2eba13], a0, a1.this$));
          }

          jdouble Vector1D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_07bb97c2794cf6b1], a0.this$);
          }

          jdouble Vector1D::distance(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_e14b0b079d61a875], a0.this$, a1.this$);
          }

          jdouble Vector1D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector1D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector1D::distanceInf(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_e14b0b079d61a875], a0.this$, a1.this$);
          }

          jdouble Vector1D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector1D::distanceSq(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_e14b0b079d61a875], a0.this$, a1.this$);
          }

          jdouble Vector1D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_b4822d5266bca26e], a0.this$);
          }

          jboolean Vector1D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jboolean Vector1D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_65c7d273e80d497a], a0.this$);
          }

          jdouble Vector1D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
          }

          jdouble Vector1D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_dff5885c2c873297]);
          }

          jdouble Vector1D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_dff5885c2c873297]);
          }

          jdouble Vector1D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::Space Vector1D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_ebbd6b2d39ab0e4f]));
          }

          jdouble Vector1D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
          }

          Vector1D Vector1D::getZero() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_getZero_90d24faee21188ef]));
          }

          jint Vector1D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean Vector1D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
          }

          jboolean Vector1D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
          }

          Vector1D Vector1D::negate() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_negate_90d24faee21188ef]));
          }

          Vector1D Vector1D::scalarMultiply(jdouble a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_45a3480a9fbf5253], a0));
          }

          Vector1D Vector1D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_b46f57fa6217d00f], a0.this$));
          }

          Vector1D Vector1D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_733d0ab0dc2eba13], a0, a1.this$));
          }

          ::java::lang::String Vector1D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          ::java::lang::String Vector1D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7b429db583278c20], a0.this$));
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
        namespace oned {
          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_getNorm(t_Vector1D *self);
          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self);
          static PyObject *t_Vector1D_getSpace(t_Vector1D *self);
          static PyObject *t_Vector1D_getX(t_Vector1D *self);
          static PyObject *t_Vector1D_getZero(t_Vector1D *self);
          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self);
          static PyObject *t_Vector1D_isNaN(t_Vector1D *self);
          static PyObject *t_Vector1D_negate(t_Vector1D *self);
          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data);
          static PyGetSetDef t_Vector1D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1D, infinite),
            DECLARE_GET_FIELD(t_Vector1D, naN),
            DECLARE_GET_FIELD(t_Vector1D, norm),
            DECLARE_GET_FIELD(t_Vector1D, norm1),
            DECLARE_GET_FIELD(t_Vector1D, normInf),
            DECLARE_GET_FIELD(t_Vector1D, normSq),
            DECLARE_GET_FIELD(t_Vector1D, space),
            DECLARE_GET_FIELD(t_Vector1D, x),
            DECLARE_GET_FIELD(t_Vector1D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1D__methods_[] = {
            DECLARE_METHOD(t_Vector1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, distance, METH_O),
            DECLARE_METHOD(t_Vector1D, distance1, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector1D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector1D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector1D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1D)[] = {
            { Py_tp_methods, t_Vector1D__methods_ },
            { Py_tp_init, (void *) t_Vector1D_init_ },
            { Py_tp_getset, t_Vector1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector1D, t_Vector1D, Vector1D);

          void t_Vector1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1D), &PY_TYPE_DEF(Vector1D), module, "Vector1D", 0);
          }

          void t_Vector1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "class_", make_descriptor(Vector1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "wrapfn_", make_descriptor(t_Vector1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NEGATIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NaN", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ONE", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "POSITIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ZERO", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ZERO)));
          }

          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1D::initializeClass, 1)))
              return NULL;
            return t_Vector1D::wrap_Object(Vector1D(((t_Vector1D *) arg)->object.this$));
          }
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Vector1D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector1D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector1D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                jdouble a6;
                Vector1D a7((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg)
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

          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg)
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

          static PyObject *t_Vector1D_getNorm(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getSpace(t_Vector1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector1D_getX(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getZero(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_isNaN(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_negate(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg)
          {
            jdouble a0;
            Vector1D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector1D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data)
          {
            Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *EvaluationRmsChecker::class$ = NULL;
            jmethodID *EvaluationRmsChecker::mids$ = NULL;
            bool EvaluationRmsChecker::live$ = false;

            jclass EvaluationRmsChecker::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_converged_a6b9ae58ae2de284] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

            jboolean EvaluationRmsChecker::converged(jint a0, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_converged_a6b9ae58ae2de284], a0, a1.this$, a2.this$);
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg);
            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds);
            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args);

            static PyMethodDef t_EvaluationRmsChecker__methods_[] = {
              DECLARE_METHOD(t_EvaluationRmsChecker, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, converged, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(EvaluationRmsChecker)[] = {
              { Py_tp_methods, t_EvaluationRmsChecker__methods_ },
              { Py_tp_init, (void *) t_EvaluationRmsChecker_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(EvaluationRmsChecker)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(EvaluationRmsChecker, t_EvaluationRmsChecker, EvaluationRmsChecker);

            void t_EvaluationRmsChecker::install(PyObject *module)
            {
              installType(&PY_TYPE(EvaluationRmsChecker), &PY_TYPE_DEF(EvaluationRmsChecker), module, "EvaluationRmsChecker", 0);
            }

            void t_EvaluationRmsChecker::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "class_", make_descriptor(EvaluationRmsChecker::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "wrapfn_", make_descriptor(t_EvaluationRmsChecker::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, EvaluationRmsChecker::initializeClass, 1)))
                return NULL;
              return t_EvaluationRmsChecker::wrap_Object(EvaluationRmsChecker(((t_EvaluationRmsChecker *) arg)->object.this$));
            }
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, EvaluationRmsChecker::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0, a1));
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

            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args)
            {
              jint a0;
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.converged(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "converged", args);
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
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodType::class$ = NULL;
          jmethodID *PocMethodType::mids$ = NULL;
          bool PocMethodType::live$ = false;
          PocMethodType *PocMethodType::AKELLAALFRIEND_2000 = NULL;
          PocMethodType *PocMethodType::ALFANO_2005 = NULL;
          PocMethodType *PocMethodType::ALFANO_MAX_PROBABILITY = NULL;
          PocMethodType *PocMethodType::ALFANO_PARAL_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_TUBES_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_VOXELS_2006 = NULL;
          PocMethodType *PocMethodType::ALFRIEND_1999 = NULL;
          PocMethodType *PocMethodType::CHAN_1997 = NULL;
          PocMethodType *PocMethodType::CHAN_2003 = NULL;
          PocMethodType *PocMethodType::FOSTER_1992 = NULL;
          PocMethodType *PocMethodType::MCKINLEY_2006 = NULL;
          PocMethodType *PocMethodType::PATERA_2001 = NULL;
          PocMethodType *PocMethodType::PATERA_2003 = NULL;
          PocMethodType *PocMethodType::PATERA_2005 = NULL;

          jclass PocMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCCSDSName_11b109bd155ca898] = env->getMethodID(cls, "getCCSDSName", "()Ljava/lang/String;");
              mids$[mid_getMethodType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getMethodType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
              mids$[mid_valueOf_5a2f6d46714799f2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_values_4d281f4171bc31e1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/PocMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AKELLAALFRIEND_2000 = new PocMethodType(env->getStaticObjectField(cls, "AKELLAALFRIEND_2000", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_2005 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_MAX_PROBABILITY = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_PARAL_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_PARAL_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_TUBES_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_TUBES_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_VOXELS_2006 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_VOXELS_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFRIEND_1999 = new PocMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_1997 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_2003 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              FOSTER_1992 = new PocMethodType(env->getStaticObjectField(cls, "FOSTER_1992", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              MCKINLEY_2006 = new PocMethodType(env->getStaticObjectField(cls, "MCKINLEY_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2001 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2001", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2003 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2005 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String PocMethodType::getCCSDSName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCCSDSName_11b109bd155ca898]));
          }

          ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType PocMethodType::getMethodType() const
          {
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getMethodType_5d7ecb27bb5e3bc3]));
          }

          PocMethodType PocMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5a2f6d46714799f2], a0.this$));
          }

          JArray< PocMethodType > PocMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< PocMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_4d281f4171bc31e1]));
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
          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args);
          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self);
          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self);
          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_PocMethodType_values(PyTypeObject *type);
          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data);
          static PyGetSetDef t_PocMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodType, cCSDSName),
            DECLARE_GET_FIELD(t_PocMethodType, methodType),
            DECLARE_GET_FIELD(t_PocMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodType__methods_[] = {
            DECLARE_METHOD(t_PocMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_PocMethodType, getCCSDSName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, getMethodType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodType)[] = {
            { Py_tp_methods, t_PocMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PocMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(PocMethodType, t_PocMethodType, PocMethodType);
          PyObject *t_PocMethodType::wrap_Object(const PocMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PocMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PocMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodType), &PY_TYPE_DEF(PocMethodType), module, "PocMethodType", 0);
          }

          void t_PocMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "class_", make_descriptor(PocMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "wrapfn_", make_descriptor(t_PocMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(PocMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "AKELLAALFRIEND_2000", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::AKELLAALFRIEND_2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_MAX_PROBABILITY", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_MAX_PROBABILITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_PARAL_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_PARAL_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_TUBES_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_TUBES_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_VOXELS_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_VOXELS_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFRIEND_1999", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFRIEND_1999)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_1997", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "FOSTER_1992", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::FOSTER_1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "MCKINLEY_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::MCKINLEY_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2001", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2005)));
          }

          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodType::initializeClass, 1)))
              return NULL;
            return t_PocMethodType::wrap_Object(PocMethodType(((t_PocMethodType *) arg)->object.this$));
          }
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCCSDSName());
            return j2p(result);
          }

          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::valueOf(a0));
              return t_PocMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_PocMethodType_values(PyTypeObject *type)
          {
            JArray< PocMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_PocMethodType::wrap_jobject);
          }
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCCSDSName());
            return j2p(value);
          }

          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *FixedTroposphericDelay::class$ = NULL;
          jmethodID *FixedTroposphericDelay::mids$ = NULL;
          bool FixedTroposphericDelay::live$ = false;

          jclass FixedTroposphericDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/FixedTroposphericDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_init$_2656072909750fef] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
              mids$[mid_getDefaultModel_fb351a86def9fdc1] = env->getStaticMethodID(cls, "getDefaultModel", "()Lorg/orekit/models/earth/troposphere/FixedTroposphericDelay;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2656072909750fef, a0.this$, a1.this$, a2.this$)) {}

          FixedTroposphericDelay FixedTroposphericDelay::getDefaultModel()
          {
            jclass cls = env->getClass(initializeClass);
            return FixedTroposphericDelay(env->callStaticObjectMethod(cls, mids$[mid_getDefaultModel_fb351a86def9fdc1]));
          }

          ::java::util::List FixedTroposphericDelay::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::CalculusFieldElement FixedTroposphericDelay::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble FixedTroposphericDelay::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type);
          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self);
          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args);
          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data);
          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data);
          static PyGetSetDef t_FixedTroposphericDelay__fields_[] = {
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, defaultModel),
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FixedTroposphericDelay__methods_[] = {
            DECLARE_METHOD(t_FixedTroposphericDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getDefaultModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FixedTroposphericDelay, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FixedTroposphericDelay)[] = {
            { Py_tp_methods, t_FixedTroposphericDelay__methods_ },
            { Py_tp_init, (void *) t_FixedTroposphericDelay_init_ },
            { Py_tp_getset, t_FixedTroposphericDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FixedTroposphericDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FixedTroposphericDelay, t_FixedTroposphericDelay, FixedTroposphericDelay);

          void t_FixedTroposphericDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(FixedTroposphericDelay), &PY_TYPE_DEF(FixedTroposphericDelay), module, "FixedTroposphericDelay", 0);
          }

          void t_FixedTroposphericDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "class_", make_descriptor(FixedTroposphericDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "wrapfn_", make_descriptor(t_FixedTroposphericDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FixedTroposphericDelay::initializeClass, 1)))
              return NULL;
            return t_FixedTroposphericDelay::wrap_Object(FixedTroposphericDelay(((t_FixedTroposphericDelay *) arg)->object.this$));
          }
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FixedTroposphericDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1, a2));
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

          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type)
          {
            FixedTroposphericDelay result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::FixedTroposphericDelay::getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(result);
          }

          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data)
          {
            FixedTroposphericDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(value);
          }

          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data)
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
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEIntegrator::class$ = NULL;
      jmethodID *FieldODEIntegrator::mids$ = NULL;
      bool FieldODEIntegrator::live$ = false;

      jclass FieldODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_cdac85baa1ddabb0] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_9ddb55dbce73d9f2] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_a947dba38eed8683] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_eba8e72a22c984ac] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_2afa36052df4765d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_integrate_d8a6319aba9a7b17] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_99803b0791f320ff] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_cdac85baa1ddabb0], a0.this$);
      }

      void FieldODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_9ddb55dbce73d9f2], a0.this$);
      }

      void FieldODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_a947dba38eed8683], a0.this$);
      }

      void FieldODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0fa09c18fee449d5]);
      }

      void FieldODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0fa09c18fee449d5]);
      }

      void FieldODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0fa09c18fee449d5]);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_eba8e72a22c984ac]));
      }

      jint FieldODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
      }

      ::java::util::List FieldODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_2afa36052df4765d]));
      }

      jint FieldODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
      }

      ::java::lang::String FieldODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::java::util::List FieldODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_2afa36052df4765d]));
      }

      ::java::util::List FieldODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_2afa36052df4765d]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_7194dd3ba3cbc7e8]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_d8a6319aba9a7b17], a0.this$, a1.this$, a2.this$));
      }

      void FieldODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_99803b0791f320ff], a0);
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
      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data);
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data);
      static PyGetSetDef t_FieldODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_FieldODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, name),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepStart),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegrator)[] = {
        { Py_tp_methods, t_FieldODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEIntegrator, t_FieldODEIntegrator, FieldODEIntegrator);
      PyObject *t_FieldODEIntegrator::wrap_Object(const FieldODEIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEIntegrator), &PY_TYPE_DEF(FieldODEIntegrator), module, "FieldODEIntegrator", 0);
      }

      void t_FieldODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "class_", make_descriptor(FieldODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "wrapfn_", make_descriptor(t_FieldODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldODEIntegrator::wrap_Object(FieldODEIntegrator(((t_FieldODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg)
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

      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg)
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

      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg)
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

      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg)
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
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data)
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
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "java/util/function/DoubleConsumer.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics::class$ = NULL;
        jmethodID *StreamingStatistics::mids$ = NULL;
        bool StreamingStatistics::live$ = false;

        jclass StreamingStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a73757db4170dc00] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_accept_17db3a65980d3441] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_17db3a65980d3441] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_aggregate_b9e7d1acbb3a5f4c] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)V");
            mids$[mid_builder_b53be6ff329e001c] = env->getStaticMethodID(cls, "builder", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_28f0324196bf3cb7] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getGeometricMean_dff5885c2c873297] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_dff5885c2c873297] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMedian_dff5885c2c873297] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_dcbc7ce2902fa136] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_dff5885c2c873297] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_dff5885c2c873297] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSecondMoment_dff5885c2c873297] = env->getMethodID(cls, "getSecondMoment", "()D");
            mids$[mid_getStandardDeviation_dff5885c2c873297] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_dff5885c2c873297] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfLogs_dff5885c2c873297] = env->getMethodID(cls, "getSumOfLogs", "()D");
            mids$[mid_getSumOfSquares_dff5885c2c873297] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getSummary_5a169194284d157f] = env->getMethodID(cls, "getSummary", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getVariance_dff5885c2c873297] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics::StreamingStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        StreamingStatistics::StreamingStatistics(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a73757db4170dc00, a0, a1.this$)) {}

        void StreamingStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_17db3a65980d3441], a0);
        }

        void StreamingStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_17db3a65980d3441], a0);
        }

        void StreamingStatistics::aggregate(const StreamingStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_b9e7d1acbb3a5f4c], a0.this$);
        }

        ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics::builder()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder(env->callStaticObjectMethod(cls, mids$[mid_builder_b53be6ff329e001c]));
        }

        void StreamingStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        StreamingStatistics StreamingStatistics::copy() const
        {
          return StreamingStatistics(env->callObjectMethod(this$, mids$[mid_copy_28f0324196bf3cb7]));
        }

        jboolean StreamingStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        jdouble StreamingStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
        }

        jlong StreamingStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jdouble StreamingStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_dcbc7ce2902fa136], a0);
        }

        jdouble StreamingStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getSecondMoment() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondMoment_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getSumOfLogs() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfLogs_dff5885c2c873297]);
        }

        jdouble StreamingStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_dff5885c2c873297]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary StreamingStatistics::getSummary() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSummary_5a169194284d157f]));
        }

        jdouble StreamingStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_dff5885c2c873297]);
        }

        jint StreamingStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        ::java::lang::String StreamingStatistics::toString() const
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
        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type);
        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data);
        static PyGetSetDef t_StreamingStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingStatistics, geometricMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, max),
          DECLARE_GET_FIELD(t_StreamingStatistics, mean),
          DECLARE_GET_FIELD(t_StreamingStatistics, median),
          DECLARE_GET_FIELD(t_StreamingStatistics, min),
          DECLARE_GET_FIELD(t_StreamingStatistics, n),
          DECLARE_GET_FIELD(t_StreamingStatistics, populationVariance),
          DECLARE_GET_FIELD(t_StreamingStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, secondMoment),
          DECLARE_GET_FIELD(t_StreamingStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_StreamingStatistics, sum),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfLogs),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_StreamingStatistics, summary),
          DECLARE_GET_FIELD(t_StreamingStatistics, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingStatistics__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, accept, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, addValue, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, aggregate, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, builder, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSecondMoment, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfLogs, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSummary, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics)[] = {
          { Py_tp_methods, t_StreamingStatistics__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics_init_ },
          { Py_tp_getset, t_StreamingStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics, t_StreamingStatistics, StreamingStatistics);

        void t_StreamingStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics), &PY_TYPE_DEF(StreamingStatistics), module, "StreamingStatistics", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "StreamingStatisticsBuilder", make_descriptor(&PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder)));
        }

        void t_StreamingStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "class_", make_descriptor(StreamingStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "wrapfn_", make_descriptor(t_StreamingStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics::wrap_Object(StreamingStatistics(((t_StreamingStatistics *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              StreamingStatistics object((jobject) NULL);

              INT_CALL(object = StreamingStatistics());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              StreamingStatistics object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StreamingStatistics(a0, a1));
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

        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg)
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

        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg)
        {
          StreamingStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", StreamingStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.aggregate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StreamingStatistics::builder());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self)
        {
          StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceWriter::class$ = NULL;
            jmethodID *CartesianCovarianceWriter::mids$ = NULL;
            bool CartesianCovarianceWriter::live$ = false;

            jclass CartesianCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0418e3c5baef8bce] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovarianceWriter::CartesianCovarianceWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_0418e3c5baef8bce, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CartesianCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceWriter)[] = {
              { Py_tp_methods, t_CartesianCovarianceWriter__methods_ },
              { Py_tp_init, (void *) t_CartesianCovarianceWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceWriter, t_CartesianCovarianceWriter, CartesianCovarianceWriter);

            void t_CartesianCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceWriter), &PY_TYPE_DEF(CartesianCovarianceWriter), module, "CartesianCovarianceWriter", 0);
            }

            void t_CartesianCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "class_", make_descriptor(CartesianCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "wrapfn_", make_descriptor(t_CartesianCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceWriter::wrap_Object(CartesianCovarianceWriter(((t_CartesianCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              CartesianCovarianceWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CartesianCovarianceWriter(a0, a1, a2));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *FieldDSSTThirdBodyDynamicContext::mids$ = NULL;
            bool FieldDSSTThirdBodyDynamicContext::live$ = false;

            jclass FieldDSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e13fdf73cdf86420] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha_eba8e72a22c984ac] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBB_eba8e72a22c984ac] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBBB_eba8e72a22c984ac] = env->getMethodID(cls, "getBBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_eba8e72a22c984ac] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_eba8e72a22c984ac] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_eba8e72a22c984ac] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getGamma_eba8e72a22c984ac] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHXXX_eba8e72a22c984ac] = env->getMethodID(cls, "getHXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKXXX_eba8e72a22c984ac] = env->getMethodID(cls, "getKXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_eba8e72a22c984ac] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_eba8e72a22c984ac] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoR3_eba8e72a22c984ac] = env->getMethodID(cls, "getMuoR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_eba8e72a22c984ac] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getR3_eba8e72a22c984ac] = env->getMethodID(cls, "getR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_eba8e72a22c984ac] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_eba8e72a22c984ac] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getb_eba8e72a22c984ac] = env->getMethodID(cls, "getb", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTThirdBodyDynamicContext::FieldDSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_e13fdf73cdf86420, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBBB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getHXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHXXX_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getKXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKXXX_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoR3_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getR3_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getb() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getb_eba8e72a22c984ac]));
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
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args);
            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_FieldDSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_FieldDSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_FieldDSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTThirdBodyDynamicContext, t_FieldDSSTThirdBodyDynamicContext, FieldDSSTThirdBodyDynamicContext);
            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_Object(const FieldDSSTThirdBodyDynamicContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTThirdBodyDynamicContext), &PY_TYPE_DEF(FieldDSSTThirdBodyDynamicContext), module, "FieldDSSTThirdBodyDynamicContext", 0);
            }

            void t_FieldDSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "class_", make_descriptor(FieldDSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_FieldDSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTThirdBodyDynamicContext::wrap_Object(FieldDSSTThirdBodyDynamicContext(((t_FieldDSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldDSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getb());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getb());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
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
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Map.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/PoissonSeries.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries::class$ = NULL;
      jmethodID *PoissonSeries::mids$ = NULL;
      bool PoissonSeries::live$ = false;

      jclass PoissonSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_eb152ceb778bf99d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/PolynomialNutation;Ljava/util/Map;)V");
          mids$[mid_compile_cda8e90069187421] = env->getStaticMethodID(cls, "compile", "([Lorg/orekit/data/PoissonSeries;)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getNonPolynomialSize_570ce0828f81a2c1] = env->getMethodID(cls, "getNonPolynomialSize", "()I");
          mids$[mid_getPolynomial_5b9d83970064b661] = env->getMethodID(cls, "getPolynomial", "()Lorg/orekit/data/PolynomialNutation;");
          mids$[mid_value_bea6276a59f3cdf6] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_value_2748c478a8009c37] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeries::PoissonSeries(const ::org::orekit::data::PolynomialNutation & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb152ceb778bf99d, a0.this$, a1.this$)) {}

      ::org::orekit::data::PoissonSeries$CompiledSeries PoissonSeries::compile(const JArray< PoissonSeries > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callStaticObjectMethod(cls, mids$[mid_compile_cda8e90069187421], a0.this$));
      }

      jint PoissonSeries::getNonPolynomialSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNonPolynomialSize_570ce0828f81a2c1]);
      }

      ::org::orekit::data::PolynomialNutation PoissonSeries::getPolynomial() const
      {
        return ::org::orekit::data::PolynomialNutation(env->callObjectMethod(this$, mids$[mid_getPolynomial_5b9d83970064b661]));
      }

      jdouble PoissonSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_bea6276a59f3cdf6], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement PoissonSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_2748c478a8009c37], a0.this$));
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
      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data);
      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data);
      static PyGetSetDef t_PoissonSeries__fields_[] = {
        DECLARE_GET_FIELD(t_PoissonSeries, nonPolynomialSize),
        DECLARE_GET_FIELD(t_PoissonSeries, polynomial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoissonSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, compile, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, getNonPolynomialSize, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, getPolynomial, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries)[] = {
        { Py_tp_methods, t_PoissonSeries__methods_ },
        { Py_tp_init, (void *) t_PoissonSeries_init_ },
        { Py_tp_getset, t_PoissonSeries__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries, t_PoissonSeries, PoissonSeries);

      void t_PoissonSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries), &PY_TYPE_DEF(PoissonSeries), module, "PoissonSeries", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "CompiledSeries", make_descriptor(&PY_TYPE_DEF(PoissonSeries$CompiledSeries)));
      }

      void t_PoissonSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "class_", make_descriptor(PoissonSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "wrapfn_", make_descriptor(t_PoissonSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries::wrap_Object(PoissonSeries(((t_PoissonSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::PolynomialNutation a0((jobject) NULL);
        ::java::util::Map a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeries object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::data::PolynomialNutation::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
        {
          INT_CALL(object = PoissonSeries(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg)
      {
        JArray< PoissonSeries > a0((jobject) NULL);
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);

        if (!parseArg(arg, "[k", PoissonSeries::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PoissonSeries::compile(a0));
          return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compile", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self)
      {
        ::org::orekit::data::PolynomialNutation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(result);
      }

      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data)
      {
        ::org::orekit::data::PolynomialNutation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LevyDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LevyDistribution::class$ = NULL;
        jmethodID *LevyDistribution::mids$ = NULL;
        bool LevyDistribution::live$ = false;

        jclass LevyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LevyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_dff5885c2c873297] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
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

        LevyDistribution::LevyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble LevyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble LevyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble LevyDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_dff5885c2c873297]);
        }

        jdouble LevyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble LevyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble LevyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble LevyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble LevyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble LevyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean LevyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble LevyDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data);
        static PyGetSetDef t_LevyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LevyDistribution, location),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LevyDistribution, scale),
          DECLARE_GET_FIELD(t_LevyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LevyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LevyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LevyDistribution__methods_[] = {
          DECLARE_METHOD(t_LevyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LevyDistribution)[] = {
          { Py_tp_methods, t_LevyDistribution__methods_ },
          { Py_tp_init, (void *) t_LevyDistribution_init_ },
          { Py_tp_getset, t_LevyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LevyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LevyDistribution, t_LevyDistribution, LevyDistribution);

        void t_LevyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LevyDistribution), &PY_TYPE_DEF(LevyDistribution), module, "LevyDistribution", 0);
        }

        void t_LevyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "class_", make_descriptor(LevyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "wrapfn_", make_descriptor(t_LevyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LevyDistribution::initializeClass, 1)))
            return NULL;
          return t_LevyDistribution::wrap_Object(LevyDistribution(((t_LevyDistribution *) arg)->object.this$));
        }
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LevyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LevyDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LevyDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
