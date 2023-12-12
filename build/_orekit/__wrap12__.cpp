#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCnmSnmReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCnmSnmReader::class$ = NULL;
          jmethodID *FESCnmSnmReader::mids$ = NULL;
          bool FESCnmSnmReader::live$ = false;

          jclass FESCnmSnmReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCnmSnmReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c6843ef8200b1ede] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCnmSnmReader::FESCnmSnmReader(const ::java::lang::String & a0, jdouble a1) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_c6843ef8200b1ede, a0.this$, a1)) {}

          void FESCnmSnmReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args);

          static PyMethodDef t_FESCnmSnmReader__methods_[] = {
            DECLARE_METHOD(t_FESCnmSnmReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCnmSnmReader)[] = {
            { Py_tp_methods, t_FESCnmSnmReader__methods_ },
            { Py_tp_init, (void *) t_FESCnmSnmReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCnmSnmReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCnmSnmReader, t_FESCnmSnmReader, FESCnmSnmReader);

          void t_FESCnmSnmReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCnmSnmReader), &PY_TYPE_DEF(FESCnmSnmReader), module, "FESCnmSnmReader", 0);
          }

          void t_FESCnmSnmReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "class_", make_descriptor(FESCnmSnmReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "wrapfn_", make_descriptor(t_FESCnmSnmReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCnmSnmReader::initializeClass, 1)))
              return NULL;
            return t_FESCnmSnmReader::wrap_Object(FESCnmSnmReader(((t_FESCnmSnmReader *) arg)->object.this$));
          }
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCnmSnmReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            FESCnmSnmReader object((jobject) NULL);

            if (!parseArgs(args, "sD", &a0, &a1))
            {
              INT_CALL(object = FESCnmSnmReader(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCnmSnmReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_0c16f01e69648df7] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_568d6c99e8870196] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_613c8f46c659f636] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_0c16f01e69648df7], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_568d6c99e8870196], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_613c8f46c659f636]));
        }

        void FieldEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
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
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldFunctionalDetector::class$ = NULL;
        jmethodID *FieldFunctionalDetector::mids$ = NULL;
        bool FieldFunctionalDetector::live$ = false;

        jclass FieldFunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldFunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_7866f1fd33c539a5] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldFunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldFunctionalDetector::FieldFunctionalDetector(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldFunctionalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
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
        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args);
        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args);
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data);
        static PyGetSetDef t_FieldFunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldFunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldFunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldFunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldFunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldFunctionalDetector)[] = {
          { Py_tp_methods, t_FieldFunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldFunctionalDetector_init_ },
          { Py_tp_getset, t_FieldFunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldFunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldFunctionalDetector, t_FieldFunctionalDetector, FieldFunctionalDetector);
        PyObject *t_FieldFunctionalDetector::wrap_Object(const FieldFunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldFunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldFunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldFunctionalDetector), &PY_TYPE_DEF(FieldFunctionalDetector), module, "FieldFunctionalDetector", 0);
        }

        void t_FieldFunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "class_", make_descriptor(FieldFunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "wrapfn_", make_descriptor(t_FieldFunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldFunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldFunctionalDetector::wrap_Object(FieldFunctionalDetector(((t_FieldFunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldFunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldFunctionalDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            INT_CALL(object = FieldFunctionalDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldFunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleVectorValueChecker.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleVectorValueChecker::class$ = NULL;
      jmethodID *SimpleVectorValueChecker::mids$ = NULL;
      bool SimpleVectorValueChecker::live$ = false;

      jclass SimpleVectorValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleVectorValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_f9e76603e48421af] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointVectorValuePair;Lorg/hipparchus/optim/PointVectorValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

      jboolean SimpleVectorValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointVectorValuePair & a1, const ::org::hipparchus::optim::PointVectorValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_f9e76603e48421af], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args);
      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args);
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data);
      static PyGetSetDef t_SimpleVectorValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleVectorValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleVectorValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleVectorValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleVectorValueChecker)[] = {
        { Py_tp_methods, t_SimpleVectorValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleVectorValueChecker_init_ },
        { Py_tp_getset, t_SimpleVectorValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleVectorValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleVectorValueChecker, t_SimpleVectorValueChecker, SimpleVectorValueChecker);
      PyObject *t_SimpleVectorValueChecker::wrap_Object(const SimpleVectorValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleVectorValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleVectorValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleVectorValueChecker), &PY_TYPE_DEF(SimpleVectorValueChecker), module, "SimpleVectorValueChecker", 0);
      }

      void t_SimpleVectorValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "class_", make_descriptor(SimpleVectorValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "wrapfn_", make_descriptor(t_SimpleVectorValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleVectorValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleVectorValueChecker::wrap_Object(SimpleVectorValueChecker(((t_SimpleVectorValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleVectorValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
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

      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointVectorValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointVectorValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointVectorValuePair::initializeClass, ::org::hipparchus::optim::PointVectorValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleVectorValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DerivativeStructure::class$ = NULL;
        jmethodID *DerivativeStructure::mids$ = NULL;
        bool DerivativeStructure::live$ = false;

        jclass DerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_9f40c2a430225d38] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acos_9f40c2a430225d38] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acosh_9f40c2a430225d38] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_8d5b339a942e17f4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_e5494538980257b4] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asin_9f40c2a430225d38] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asinh_9f40c2a430225d38] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan_9f40c2a430225d38] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_8d5b339a942e17f4] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_a2e9ef2c805a8901] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atanh_9f40c2a430225d38] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cbrt_9f40c2a430225d38] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ceil_9f40c2a430225d38] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_compose_51e3f3a70c0b0650] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_8d5b339a942e17f4] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_e5494538980257b4] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cos_9f40c2a430225d38] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cosh_9f40c2a430225d38] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_differentiate_315cc5446c72b1b3] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_8d5b339a942e17f4] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_e5494538980257b4] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_9f40c2a430225d38] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_expm1_9f40c2a430225d38] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_floor_9f40c2a430225d38] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getAllDerivatives_a53a7513ecedada2] = env->getMethodID(cls, "getAllDerivatives", "()[D");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_ed72edf4e59e365e] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/DSFactory;");
            mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_75914fee15aa69bc] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPi_9f40c2a430225d38] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_8d5b339a942e17f4] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hypot_a2e9ef2c805a8901] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_integrate_315cc5446c72b1b3] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_84db6487129d2643] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_d41586344ae34ebb] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_5f600a2637357651] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_789eb9634df7cfd1] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_ceb03024cad0d401] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_a73efab443377ec2] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_d74beb9a303bcf8d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_bdc51eeba62a4d09] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log_9f40c2a430225d38] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log10_9f40c2a430225d38] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log1p_9f40c2a430225d38] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_8d5b339a942e17f4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_e5494538980257b4] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_aee818789db1d6ac] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_negate_9f40c2a430225d38] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_newInstance_e5494538980257b4] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_8d5b339a942e17f4] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_e5494538980257b4] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_aee818789db1d6ac] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_a170120f31aca901] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rebase_8bdb7c411329c668] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_reciprocal_9f40c2a430225d38] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_8d5b339a942e17f4] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_e5494538980257b4] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rint_9f40c2a430225d38] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rootN_aee818789db1d6ac] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_scalb_aee818789db1d6ac] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sign_9f40c2a430225d38] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sin_9f40c2a430225d38] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_9f40c2a430225d38] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_9f40c2a430225d38] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_8d5b339a942e17f4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_e5494538980257b4] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tan_9f40c2a430225d38] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tanh_9f40c2a430225d38] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_taylor_86c4a0582e0747ce] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_9f40c2a430225d38] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_9f40c2a430225d38] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ulp_9f40c2a430225d38] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DerivativeStructure DerivativeStructure::abs() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::acos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::acosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::add(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::add(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_e5494538980257b4], a0));
        }

        DerivativeStructure DerivativeStructure::asin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::asinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::atan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_a2e9ef2c805a8901], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::atanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::cbrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::ceil() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_51e3f3a70c0b0650], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_e5494538980257b4], a0));
        }

        DerivativeStructure DerivativeStructure::cos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::cosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_315cc5446c72b1b3], a0, a1));
        }

        DerivativeStructure DerivativeStructure::divide(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::divide(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_e5494538980257b4], a0));
        }

        jboolean DerivativeStructure::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        DerivativeStructure DerivativeStructure::exp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::expm1() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::floor() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_9f40c2a430225d38]));
        }

        JArray< jdouble > DerivativeStructure::getAllDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_a53a7513ecedada2]));
        }

        jint DerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::DSFactory DerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_ed72edf4e59e365e]));
        }

        ::org::hipparchus::Field DerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
        }

        jint DerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        jint DerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        jdouble DerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_75914fee15aa69bc], a0.this$);
        }

        DerivativeStructure DerivativeStructure::getPi() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_9f40c2a430225d38]));
        }

        jdouble DerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        jdouble DerivativeStructure::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
        }

        jint DerivativeStructure::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_a2e9ef2c805a8901], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::integrate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_315cc5446c72b1b3], a0, a1));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_84db6487129d2643], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< DerivativeStructure > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d41586344ae34ebb], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5f600a2637357651], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_789eb9634df7cfd1], a0, a1.this$, a2, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_ceb03024cad0d401], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_a73efab443377ec2], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5, const DerivativeStructure & a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d74beb9a303bcf8d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5, jdouble a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_bdc51eeba62a4d09], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        DerivativeStructure DerivativeStructure::log() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::log10() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::log1p() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::multiply(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::multiply(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_e5494538980257b4], a0));
        }

        DerivativeStructure DerivativeStructure::multiply(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_aee818789db1d6ac], a0));
        }

        DerivativeStructure DerivativeStructure::negate() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::newInstance(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_e5494538980257b4], a0));
        }

        DerivativeStructure DerivativeStructure::pow(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_e5494538980257b4], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_aee818789db1d6ac], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_a170120f31aca901], a0, a1.this$));
        }

        DerivativeStructure DerivativeStructure::rebase(const JArray< DerivativeStructure > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_8bdb7c411329c668], a0.this$));
        }

        DerivativeStructure DerivativeStructure::reciprocal() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::remainder(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::remainder(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_e5494538980257b4], a0));
        }

        DerivativeStructure DerivativeStructure::rint() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::rootN(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_aee818789db1d6ac], a0));
        }

        DerivativeStructure DerivativeStructure::scalb(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_aee818789db1d6ac], a0));
        }

        DerivativeStructure DerivativeStructure::sign() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::sin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_9f40c2a430225d38]));
        }

        ::org::hipparchus::util::FieldSinCos DerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        DerivativeStructure DerivativeStructure::sinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_9f40c2a430225d38]));
        }

        ::org::hipparchus::util::FieldSinhCosh DerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        DerivativeStructure DerivativeStructure::sqrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::subtract(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_8d5b339a942e17f4], a0.this$));
        }

        DerivativeStructure DerivativeStructure::subtract(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_e5494538980257b4], a0));
        }

        DerivativeStructure DerivativeStructure::tan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::tanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_9f40c2a430225d38]));
        }

        jdouble DerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_86c4a0582e0747ce], a0.this$);
        }

        DerivativeStructure DerivativeStructure::toDegrees() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::toRadians() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_9f40c2a430225d38]));
        }

        DerivativeStructure DerivativeStructure::ulp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_9f40c2a430225d38]));
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
        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data);
        static PyGetSetDef t_DerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_DerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_DerivativeStructure, factory),
          DECLARE_GET_FIELD(t_DerivativeStructure, field),
          DECLARE_GET_FIELD(t_DerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_DerivativeStructure, order),
          DECLARE_GET_FIELD(t_DerivativeStructure, pi),
          DECLARE_GET_FIELD(t_DerivativeStructure, real),
          DECLARE_GET_FIELD(t_DerivativeStructure, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_DerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, compose, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, equals, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, taylor, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeStructure)[] = {
          { Py_tp_methods, t_DerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeStructure, t_DerivativeStructure, DerivativeStructure);

        void t_DerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeStructure), &PY_TYPE_DEF(DerivativeStructure), module, "DerivativeStructure", 0);
        }

        void t_DerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "class_", make_descriptor(DerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "wrapfn_", make_descriptor(t_DerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_DerivativeStructure::wrap_Object(DerivativeStructure(((t_DerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::atan2(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return result.wrap();
        }

        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::hypot(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[k", DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              JArray< DerivativeStructure > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[k[k", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure a6((jobject) NULL);
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              jdouble a6;
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "Dk", DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::pow(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< DerivativeStructure > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return value.wrap();
        }

        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data)
        {
          DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data)
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
#include "org/hipparchus/stat/inference/ChiSquareTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *ChiSquareTest::class$ = NULL;
        jmethodID *ChiSquareTest::mids$ = NULL;
        bool ChiSquareTest::live$ = false;

        jclass ChiSquareTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/ChiSquareTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_chiSquare_4661adbd7cb942d0] = env->getMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_309c07a77179d86e] = env->getMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_c9aa1880e4fb2330] = env->getMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_4661adbd7cb942d0] = env->getMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_309c07a77179d86e] = env->getMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_76b7b3677f01cb1c] = env->getMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_deac5230a366dcf3] = env->getMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_c9aa1880e4fb2330] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_885f29369ee9c892] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquareTest::ChiSquareTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble ChiSquareTest::chiSquare(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_4661adbd7cb942d0], a0.this$);
        }

        jdouble ChiSquareTest::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_309c07a77179d86e], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_4661adbd7cb942d0], a0.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_309c07a77179d86e], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_76b7b3677f01cb1c], a0.this$, a1);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_deac5230a366dcf3], a0.this$, a1.this$, a2);
        }

        jdouble ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_885f29369ee9c892], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args);

        static PyMethodDef t_ChiSquareTest__methods_[] = {
          DECLARE_METHOD(t_ChiSquareTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquare, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTest, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTestDataSetsComparison, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquareTest)[] = {
          { Py_tp_methods, t_ChiSquareTest__methods_ },
          { Py_tp_init, (void *) t_ChiSquareTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquareTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ChiSquareTest, t_ChiSquareTest, ChiSquareTest);

        void t_ChiSquareTest::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquareTest), &PY_TYPE_DEF(ChiSquareTest), module, "ChiSquareTest", 0);
        }

        void t_ChiSquareTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "class_", make_descriptor(ChiSquareTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "wrapfn_", make_descriptor(t_ChiSquareTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquareTest::initializeClass, 1)))
            return NULL;
          return t_ChiSquareTest::wrap_Object(ChiSquareTest(((t_ChiSquareTest *) arg)->object.this$));
        }
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquareTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds)
        {
          ChiSquareTest object((jobject) NULL);

          INT_CALL(object = ChiSquareTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *AbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool AbstractAnalyticalMatricesHarvester::live$ = false;

        jclass AbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_freezeColumnsNames_0640e6acf969ed28] = env->getMethodID(cls, "freezeColumnsNames", "()V");
            mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_getGradientConverter_ad82abd02e8e26ae] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_setReferenceState_8655761ebf04b503] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalMatricesHarvester::freezeColumnsNames() const
        {
          env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_0640e6acf969ed28]);
        }

        JArray< jdouble > AbstractAnalyticalMatricesHarvester::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_2a145999b8c9a41d], a0.this$));
        }

        ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter AbstractAnalyticalMatricesHarvester::getGradientConverter() const
        {
          return ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->callObjectMethod(this$, mids$[mid_getGradientConverter_ad82abd02e8e26ae]));
        }

        ::java::util::List AbstractAnalyticalMatricesHarvester::getJacobiansColumnsNames() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef]));
        }

        ::java::lang::String AbstractAnalyticalMatricesHarvester::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        ::org::orekit::orbits::OrbitType AbstractAnalyticalMatricesHarvester::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2], a0.this$));
        }

        ::org::orekit::orbits::PositionAngleType AbstractAnalyticalMatricesHarvester::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2], a0.this$));
        }

        void AbstractAnalyticalMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceState_8655761ebf04b503], a0.this$);
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
        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, gradientConverter),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, jacobiansColumnsNames),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, name),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, orbitType),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, positionAngleType),
          DECLARE_SET_FIELD(t_AbstractAnalyticalMatricesHarvester, referenceState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, freezeColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getAdditionalState, METH_O),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getGradientConverter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getJacobiansColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getOrbitType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getParametersJacobian, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getPositionAngleType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getStateTransitionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, setReferenceState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_AbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalMatricesHarvester, t_AbstractAnalyticalMatricesHarvester, AbstractAnalyticalMatricesHarvester);

        void t_AbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(AbstractAnalyticalMatricesHarvester), module, "AbstractAnalyticalMatricesHarvester", 0);
        }

        void t_AbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "class_", make_descriptor(AbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalMatricesHarvester::wrap_Object(AbstractAnalyticalMatricesHarvester(((t_AbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.freezeColumnsNames());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAdditionalState(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getOrbitType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getParametersJacobian(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "setReferenceState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getJacobiansColumnsNames());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Constants::class$ = NULL;
      jmethodID *Constants::mids$ = NULL;
      bool Constants::live$ = false;
      jdouble Constants::ARC_SECONDS_TO_RADIANS = (jdouble) 0;
      jdouble Constants::BESSELIAN_YEAR = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_MU = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_MU = (jdouble) 0;
      jdouble Constants::G0_STANDARD_GRAVITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C30 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C40 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C50 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C60 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_MU = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_MU = (jdouble) 0;
      jdouble Constants::IAU_2012_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SOLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SUN_GM = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_MU = (jdouble) 0;
      jdouble Constants::JPL_SSD_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_PLUS_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = (jdouble) 0;
      jdouble Constants::JPL_SSD_JUPITER_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MARS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MERCURY_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_NEPTUNE_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_PLUTO_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SATURN_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_VENUS_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_URANUS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_VENUS_GM = (jdouble) 0;
      jdouble Constants::JULIAN_CENTURY = (jdouble) 0;
      jdouble Constants::JULIAN_DAY = (jdouble) 0;
      jdouble Constants::JULIAN_YEAR = (jdouble) 0;
      jdouble Constants::MOON_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::SPEED_OF_LIGHT = (jdouble) 0;
      jdouble Constants::SUN_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_C20 = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_MU = (jdouble) 0;

      jclass Constants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Constants");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS_TO_RADIANS = env->getStaticDoubleField(cls, "ARC_SECONDS_TO_RADIANS");
          BESSELIAN_YEAR = env->getStaticDoubleField(cls, "BESSELIAN_YEAR");
          EGM96_EARTH_C20 = env->getStaticDoubleField(cls, "EGM96_EARTH_C20");
          EGM96_EARTH_C30 = env->getStaticDoubleField(cls, "EGM96_EARTH_C30");
          EGM96_EARTH_C40 = env->getStaticDoubleField(cls, "EGM96_EARTH_C40");
          EGM96_EARTH_C50 = env->getStaticDoubleField(cls, "EGM96_EARTH_C50");
          EGM96_EARTH_C60 = env->getStaticDoubleField(cls, "EGM96_EARTH_C60");
          EGM96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EGM96_EARTH_EQUATORIAL_RADIUS");
          EGM96_EARTH_MU = env->getStaticDoubleField(cls, "EGM96_EARTH_MU");
          EIGEN5C_EARTH_C20 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C20");
          EIGEN5C_EARTH_C30 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C30");
          EIGEN5C_EARTH_C40 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C40");
          EIGEN5C_EARTH_C50 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C50");
          EIGEN5C_EARTH_C60 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C60");
          EIGEN5C_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_EQUATORIAL_RADIUS");
          EIGEN5C_EARTH_MU = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_MU");
          G0_STANDARD_GRAVITY = env->getStaticDoubleField(cls, "G0_STANDARD_GRAVITY");
          GRIM5C1_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_ANGULAR_VELOCITY");
          GRIM5C1_EARTH_C20 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C20");
          GRIM5C1_EARTH_C30 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C30");
          GRIM5C1_EARTH_C40 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C40");
          GRIM5C1_EARTH_C50 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C50");
          GRIM5C1_EARTH_C60 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C60");
          GRIM5C1_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_EQUATORIAL_RADIUS");
          GRIM5C1_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_FLATTENING");
          GRIM5C1_EARTH_MU = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_MU");
          GRS80_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRS80_EARTH_ANGULAR_VELOCITY");
          GRS80_EARTH_C20 = env->getStaticDoubleField(cls, "GRS80_EARTH_C20");
          GRS80_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRS80_EARTH_EQUATORIAL_RADIUS");
          GRS80_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRS80_EARTH_FLATTENING");
          GRS80_EARTH_MU = env->getStaticDoubleField(cls, "GRS80_EARTH_MU");
          IAU_2012_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "IAU_2012_ASTRONOMICAL_UNIT");
          IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_EARTH_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_GM");
          IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS");
          IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_JUPITER_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_GM");
          IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS");
          IAU_2015_NOMINAL_SOLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SOLAR_RADIUS");
          IAU_2015_NOMINAL_SUN_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SUN_GM");
          IERS2003_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2003_EARTH_ANGULAR_VELOCITY");
          IERS2003_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2003_EARTH_C20");
          IERS2003_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2003_EARTH_EQUATORIAL_RADIUS");
          IERS2003_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2003_EARTH_FLATTENING");
          IERS2003_EARTH_MU = env->getStaticDoubleField(cls, "IERS2003_EARTH_MU");
          IERS2010_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2010_EARTH_ANGULAR_VELOCITY");
          IERS2010_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2010_EARTH_C20");
          IERS2010_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2010_EARTH_EQUATORIAL_RADIUS");
          IERS2010_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2010_EARTH_FLATTENING");
          IERS2010_EARTH_MU = env->getStaticDoubleField(cls, "IERS2010_EARTH_MU");
          IERS96_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS96_EARTH_ANGULAR_VELOCITY");
          IERS96_EARTH_C20 = env->getStaticDoubleField(cls, "IERS96_EARTH_C20");
          IERS96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS96_EARTH_EQUATORIAL_RADIUS");
          IERS96_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS96_EARTH_FLATTENING");
          IERS96_EARTH_MU = env->getStaticDoubleField(cls, "IERS96_EARTH_MU");
          JPL_SSD_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "JPL_SSD_ASTRONOMICAL_UNIT");
          JPL_SSD_EARTH_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_GM");
          JPL_SSD_EARTH_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_MOON_MASS_RATIO");
          JPL_SSD_EARTH_PLUS_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_PLUS_MOON_GM");
          JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = env->getStaticDoubleField(cls, "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT");
          JPL_SSD_JUPITER_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_JUPITER_SYSTEM_GM");
          JPL_SSD_MARS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_MARS_SYSTEM_GM");
          JPL_SSD_MERCURY_GM = env->getStaticDoubleField(cls, "JPL_SSD_MERCURY_GM");
          JPL_SSD_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_MOON_GM");
          JPL_SSD_NEPTUNE_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_NEPTUNE_SYSTEM_GM");
          JPL_SSD_PLUTO_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_PLUTO_SYSTEM_GM");
          JPL_SSD_SATURN_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_SATURN_SYSTEM_GM");
          JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO");
          JPL_SSD_SUN_GM = env->getStaticDoubleField(cls, "JPL_SSD_SUN_GM");
          JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MERCURY_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MERCURY_MASS_RATIO");
          JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_VENUS_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_VENUS_MASS_RATIO");
          JPL_SSD_URANUS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_URANUS_SYSTEM_GM");
          JPL_SSD_VENUS_GM = env->getStaticDoubleField(cls, "JPL_SSD_VENUS_GM");
          JULIAN_CENTURY = env->getStaticDoubleField(cls, "JULIAN_CENTURY");
          JULIAN_DAY = env->getStaticDoubleField(cls, "JULIAN_DAY");
          JULIAN_YEAR = env->getStaticDoubleField(cls, "JULIAN_YEAR");
          MOON_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "MOON_EQUATORIAL_RADIUS");
          SPEED_OF_LIGHT = env->getStaticDoubleField(cls, "SPEED_OF_LIGHT");
          SUN_RADIUS = env->getStaticDoubleField(cls, "SUN_RADIUS");
          WGS84_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "WGS84_EARTH_ANGULAR_VELOCITY");
          WGS84_EARTH_C20 = env->getStaticDoubleField(cls, "WGS84_EARTH_C20");
          WGS84_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "WGS84_EARTH_EQUATORIAL_RADIUS");
          WGS84_EARTH_FLATTENING = env->getStaticDoubleField(cls, "WGS84_EARTH_FLATTENING");
          WGS84_EARTH_MU = env->getStaticDoubleField(cls, "WGS84_EARTH_MU");
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Constants__methods_[] = {
        DECLARE_METHOD(t_Constants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Constants, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Constants)[] = {
        { Py_tp_methods, t_Constants__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Constants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Constants, t_Constants, Constants);

      void t_Constants::install(PyObject *module)
      {
        installType(&PY_TYPE(Constants), &PY_TYPE_DEF(Constants), module, "Constants", 0);
      }

      void t_Constants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "class_", make_descriptor(Constants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "wrapfn_", make_descriptor(t_Constants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "boxfn_", make_descriptor(boxObject));
        env->getClass(Constants::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "ARC_SECONDS_TO_RADIANS", make_descriptor(Constants::ARC_SECONDS_TO_RADIANS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "BESSELIAN_YEAR", make_descriptor(Constants::BESSELIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C20", make_descriptor(Constants::EGM96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C30", make_descriptor(Constants::EGM96_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C40", make_descriptor(Constants::EGM96_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C50", make_descriptor(Constants::EGM96_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C60", make_descriptor(Constants::EGM96_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EGM96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_MU", make_descriptor(Constants::EGM96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C20", make_descriptor(Constants::EIGEN5C_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C30", make_descriptor(Constants::EIGEN5C_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C40", make_descriptor(Constants::EIGEN5C_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C50", make_descriptor(Constants::EIGEN5C_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C60", make_descriptor(Constants::EIGEN5C_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_MU", make_descriptor(Constants::EIGEN5C_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "G0_STANDARD_GRAVITY", make_descriptor(Constants::G0_STANDARD_GRAVITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C20", make_descriptor(Constants::GRIM5C1_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C30", make_descriptor(Constants::GRIM5C1_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C40", make_descriptor(Constants::GRIM5C1_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C50", make_descriptor(Constants::GRIM5C1_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C60", make_descriptor(Constants::GRIM5C1_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_FLATTENING", make_descriptor(Constants::GRIM5C1_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_MU", make_descriptor(Constants::GRIM5C1_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRS80_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_C20", make_descriptor(Constants::GRS80_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRS80_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_FLATTENING", make_descriptor(Constants::GRS80_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_MU", make_descriptor(Constants::GRS80_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2012_ASTRONOMICAL_UNIT", make_descriptor(Constants::IAU_2012_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_GM", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_GM", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SOLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_SOLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SUN_GM", make_descriptor(Constants::IAU_2015_NOMINAL_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2003_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_C20", make_descriptor(Constants::IERS2003_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2003_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_FLATTENING", make_descriptor(Constants::IERS2003_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_MU", make_descriptor(Constants::IERS2003_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2010_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_C20", make_descriptor(Constants::IERS2010_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2010_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_FLATTENING", make_descriptor(Constants::IERS2010_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_MU", make_descriptor(Constants::IERS2010_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS96_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_C20", make_descriptor(Constants::IERS96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_FLATTENING", make_descriptor(Constants::IERS96_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_MU", make_descriptor(Constants::IERS96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_ASTRONOMICAL_UNIT", make_descriptor(Constants::JPL_SSD_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_GM", make_descriptor(Constants::JPL_SSD_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_EARTH_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_PLUS_MOON_GM", make_descriptor(Constants::JPL_SSD_EARTH_PLUS_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT", make_descriptor(Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_JUPITER_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_JUPITER_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MARS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_MARS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MERCURY_GM", make_descriptor(Constants::JPL_SSD_MERCURY_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MOON_GM", make_descriptor(Constants::JPL_SSD_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_NEPTUNE_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_NEPTUNE_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_PLUTO_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_PLUTO_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SATURN_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_SATURN_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_GM", make_descriptor(Constants::JPL_SSD_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MERCURY_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_VENUS_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_VENUS_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_URANUS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_URANUS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_VENUS_GM", make_descriptor(Constants::JPL_SSD_VENUS_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_CENTURY", make_descriptor(Constants::JULIAN_CENTURY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_DAY", make_descriptor(Constants::JULIAN_DAY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_YEAR", make_descriptor(Constants::JULIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "MOON_EQUATORIAL_RADIUS", make_descriptor(Constants::MOON_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SPEED_OF_LIGHT", make_descriptor(Constants::SPEED_OF_LIGHT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SUN_RADIUS", make_descriptor(Constants::SUN_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::WGS84_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_C20", make_descriptor(Constants::WGS84_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::WGS84_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_FLATTENING", make_descriptor(Constants::WGS84_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_MU", make_descriptor(Constants::WGS84_EARTH_MU));
      }

      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Constants::initializeClass, 1)))
          return NULL;
        return t_Constants::wrap_Object(Constants(((t_Constants *) arg)->object.this$));
      }
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Constants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencyHatchFilter::class$ = NULL;
          jmethodID *SingleFrequencyHatchFilter::mids$ = NULL;
          bool SingleFrequencyHatchFilter::live$ = false;

          jclass SingleFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_894a5f5eb6fefda4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/MeasurementType;DDID)V");
              mids$[mid_filterData_121e54bf6d31bdf9] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencyHatchFilter::SingleFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::MeasurementType & a2, jdouble a3, jdouble a4, jint a5, jdouble a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_894a5f5eb6fefda4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_121e54bf6d31bdf9], a0.this$, a1.this$));
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
        namespace filtering {
          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args);

          static PyMethodDef t_SingleFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, filterData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_SingleFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencyHatchFilter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(SingleFrequencyHatchFilter, t_SingleFrequencyHatchFilter, SingleFrequencyHatchFilter);

          void t_SingleFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencyHatchFilter), &PY_TYPE_DEF(SingleFrequencyHatchFilter), module, "SingleFrequencyHatchFilter", 0);
          }

          void t_SingleFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "class_", make_descriptor(SingleFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "wrapfn_", make_descriptor(t_SingleFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencyHatchFilter::wrap_Object(SingleFrequencyHatchFilter(((t_SingleFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::MeasurementType a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jint a5;
            jdouble a6;
            SingleFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkKDDID", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_MeasurementType::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = SingleFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonAbstractBatchLSModel::class$ = NULL;
        jmethodID *PythonAbstractBatchLSModel::mids$ = NULL;
        bool PythonAbstractBatchLSModel::live$ = false;

        jclass PythonAbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2406e4cf7f21e166] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_58ff847451f5cf92] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_614fe55969c9646f] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createPropagators_30bf62a3dd22b244] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;");
            mids$[mid_fetchEvaluatedMeasurement_e484126dd163b386] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEvaluationsCount_412668abc8d889e9] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_412668abc8d889e9] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedPropagationDriversForBuilder_b63a8ff72f9e46a4] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_89b302893bdbe1f1] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEvaluationsCounter_7852dd173b858d1b] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_7852dd173b858d1b] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_77538fd880505017] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractBatchLSModel::PythonAbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_2406e4cf7f21e166, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > PythonAbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator >(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_createPropagators_04da9f6cb19def2d], a0.this$));
        }

        void PythonAbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_fetchEvaluatedMeasurement_e484126dd163b386], a0, a1.this$);
        }

        void PythonAbstractBatchLSModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jint PythonAbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getEvaluationsCount_412668abc8d889e9]);
        }

        jint PythonAbstractBatchLSModel::getIterationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getIterationsCount_412668abc8d889e9]);
        }

        ::org::orekit::utils::ParameterDriversList PythonAbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getSelectedPropagationDriversForBuilder_b63a8ff72f9e46a4], a0));
        }

        jboolean PythonAbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callNonvirtualBooleanMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_isForwardPropagation_89b302893bdbe1f1]);
        }

        jlong PythonAbstractBatchLSModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractBatchLSModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }

        void PythonAbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setEvaluationsCounter_7852dd173b858d1b], a0.this$);
        }

        void PythonAbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setIterationsCounter_7852dd173b858d1b], a0.this$);
        }

        ::org::hipparchus::util::Pair PythonAbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_value_77538fd880505017], a0.this$));
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
      namespace leastsquares {
        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self);
        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1);
        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0);
        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data);
        static PyGetSetDef t_PythonAbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractBatchLSModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, createPropagators, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getEvaluationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getIterationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, isForwardPropagation, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, pythonExtension, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setEvaluationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setIterationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBatchLSModel)[] = {
          { Py_tp_methods, t_PythonAbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractBatchLSModel_init_ },
          { Py_tp_getset, t_PythonAbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractBatchLSModel, t_PythonAbstractBatchLSModel, PythonAbstractBatchLSModel);

        void t_PythonAbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractBatchLSModel), &PY_TYPE_DEF(PythonAbstractBatchLSModel), module, "PythonAbstractBatchLSModel", 1);
        }

        void t_PythonAbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "class_", make_descriptor(PythonAbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "wrapfn_", make_descriptor(t_PythonAbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractBatchLSModel::initializeClass);
          JNINativeMethod methods[] = {
            { "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonAbstractBatchLSModel_configureHarvester0 },
            { "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractBatchLSModel_configureOrbits1 },
            { "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;", (void *) t_PythonAbstractBatchLSModel_createPropagators2 },
            { "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3 },
            { "getEvaluationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getEvaluationsCount4 },
            { "getIterationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getIterationsCount5 },
            { "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6 },
            { "isForwardPropagation", "()Z", (void *) t_PythonAbstractBatchLSModel_isForwardPropagation7 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractBatchLSModel_pythonDecRef8 },
            { "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setEvaluationsCounter9 },
            { "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setIterationsCounter10 },
            { "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;", (void *) t_PythonAbstractBatchLSModel_value11 },
          };
          env->registerNatives(cls, methods, 12);
        }

        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractBatchLSModel::wrap_Object(PythonAbstractBatchLSModel(((t_PythonAbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          PythonAbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractBatchLSModel(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::integration::t_AbstractIntegratedPropagator::wrap_jobject);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "createPropagators", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "fetchEvaluatedMeasurement", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getEvaluationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getIterationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getIterationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getSelectedPropagationDriversForBuilder", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isForwardPropagation());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "isForwardPropagation", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args)
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

        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setEvaluationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setIterationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "value", args, 2);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *result = PyObject_CallMethod(obj, "configureHarvester", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
          {
            throwTypeError("configureHarvester", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(::org::orekit::propagation::MatricesHarvester(a0));
          PyObject *o1 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a1));
          PyObject *result = PyObject_CallMethod(obj, "configureOrbits", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("configureOrbits", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "createPropagators", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator::initializeClass, &value))
          {
            throwTypeError("createPropagators", result);
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

        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o1 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a1));
          PyObject *result = PyObject_CallMethod(obj, "fetchEvaluatedMeasurement", "iO", (int) a0, o1);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getEvaluationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getEvaluationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getIterationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getIterationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedPropagationDriversForBuilder", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getSelectedPropagationDriversForBuilder", result);
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

        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForwardPropagation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForwardPropagation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setEvaluationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setIterationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::util::Pair value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::util::Pair::initializeClass, &value))
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

        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersPhaseModifier::class$ = NULL;
          jmethodID *PhaseCentersPhaseModifier::mids$ = NULL;
          bool PhaseCentersPhaseModifier::live$ = false;

          jclass PhaseCentersPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_59cfeb08e5a13ccd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersPhaseModifier::PhaseCentersPhaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59cfeb08e5a13ccd, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void PhaseCentersPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self);
          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersPhaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersPhaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersPhaseModifier, t_PhaseCentersPhaseModifier, PhaseCentersPhaseModifier);

          void t_PhaseCentersPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersPhaseModifier), &PY_TYPE_DEF(PhaseCentersPhaseModifier), module, "PhaseCentersPhaseModifier", 0);
          }

          void t_PhaseCentersPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "class_", make_descriptor(PhaseCentersPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersPhaseModifier::wrap_Object(PhaseCentersPhaseModifier(((t_PhaseCentersPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSAlmanac::class$ = NULL;
            jmethodID *GLONASSAlmanac::mids$ = NULL;
            bool GLONASSAlmanac::live$ = false;

            jclass GLONASSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_31f65ec634981835] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDD)V");
                mids$[mid_init$_99e8e6be8e775c8e] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDDLorg/orekit/time/TimeScale;)V");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getDeltaI_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getFrequencyChannel_412668abc8d889e9] = env->getMethodID(cls, "getFrequencyChannel", "()I");
                mids$[mid_getGPS2Glo_557b8123390d8d0c] = env->getMethodID(cls, "getGPS2Glo", "()D");
                mids$[mid_getGlo2UTC_557b8123390d8d0c] = env->getMethodID(cls, "getGlo2UTC", "()D");
                mids$[mid_getGloOffset_557b8123390d8d0c] = env->getMethodID(cls, "getGloOffset", "()D");
                mids$[mid_getHealth_412668abc8d889e9] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getLambda_557b8123390d8d0c] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_412668abc8d889e9] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_412668abc8d889e9] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_557b8123390d8d0c] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_2bdec6e86d80c4e6] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_fce7ee69a3542ac1] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_16493e3d1f6bc90d] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31f65ec634981835, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)) {}

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, const ::org::orekit::time::TimeScale & a15) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99e8e6be8e775c8e, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSAlmanac::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
            }

            jdouble GLONASSAlmanac::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_557b8123390d8d0c]);
            }

            jdouble GLONASSAlmanac::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_557b8123390d8d0c]);
            }

            jdouble GLONASSAlmanac::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_557b8123390d8d0c]);
            }

            jdouble GLONASSAlmanac::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
            }

            jint GLONASSAlmanac::getFrequencyChannel() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyChannel_412668abc8d889e9]);
            }

            jdouble GLONASSAlmanac::getGPS2Glo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGPS2Glo_557b8123390d8d0c]);
            }

            jdouble GLONASSAlmanac::getGlo2UTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGlo2UTC_557b8123390d8d0c]);
            }

            jdouble GLONASSAlmanac::getGloOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGloOffset_557b8123390d8d0c]);
            }

            jint GLONASSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_412668abc8d889e9]);
            }

            jdouble GLONASSAlmanac::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_557b8123390d8d0c]);
            }

            jint GLONASSAlmanac::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_412668abc8d889e9]);
            }

            jint GLONASSAlmanac::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_412668abc8d889e9]);
            }

            jdouble GLONASSAlmanac::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_557b8123390d8d0c]);
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2bdec6e86d80c4e6]));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fce7ee69a3542ac1], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_16493e3d1f6bc90d], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GLONASSAlmanac::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
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
            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args);
            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data);
            static PyGetSetDef t_GLONASSAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSAlmanac, date),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaI),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaT),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, e),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, frequencyChannel),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gPS2Glo),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, glo2UTC),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gloOffset),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, health),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, lambda),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, n4),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, na),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, pa),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, propagator),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, time),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GLONASSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getFrequencyChannel, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGPS2Glo, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGlo2UTC, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGloOffset, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getTime, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSAlmanac)[] = {
              { Py_tp_methods, t_GLONASSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GLONASSAlmanac_init_ },
              { Py_tp_getset, t_GLONASSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSAlmanac)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSAlmanac, t_GLONASSAlmanac, GLONASSAlmanac);

            void t_GLONASSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSAlmanac), &PY_TYPE_DEF(GLONASSAlmanac), module, "GLONASSAlmanac", 0);
            }

            void t_GLONASSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "class_", make_descriptor(GLONASSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "wrapfn_", make_descriptor(t_GLONASSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GLONASSAlmanac::wrap_Object(GLONASSAlmanac(((t_GLONASSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 15:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 16:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  ::org::orekit::time::TimeScale a15((jobject) NULL);
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGloOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGloOffset());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative::class$ = NULL;
        jmethodID *UnivariateDerivative::mids$ = NULL;
        bool UnivariateDerivative::live$ = false;

        jclass UnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_69cfb132c661aca4] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_75914fee15aa69bc] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_toDerivativeStructure_9f40c2a430225d38] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative::UnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble UnivariateDerivative::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_69cfb132c661aca4], a0);
        }

        jint UnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        jdouble UnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_75914fee15aa69bc], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_9f40c2a430225d38]));
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
        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args);
        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data);
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data);
        static PyGetSetDef t_UnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_UnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative)[] = {
          { Py_tp_methods, t_UnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative_init_ },
          { Py_tp_getset, t_UnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative, t_UnivariateDerivative, UnivariateDerivative);
        PyObject *t_UnivariateDerivative::wrap_Object(const UnivariateDerivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative), &PY_TYPE_DEF(UnivariateDerivative), module, "UnivariateDerivative", 0);
        }

        void t_UnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "class_", make_descriptor(UnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "wrapfn_", make_descriptor(t_UnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative::wrap_Object(UnivariateDerivative(((t_UnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          UnivariateDerivative object((jobject) NULL);

          INT_CALL(object = UnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldForceModelContext::class$ = NULL;
            jmethodID *FieldForceModelContext::mids$ = NULL;
            bool FieldForceModelContext::live$ = false;

            jclass FieldForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFieldAuxiliaryElements_f874d30ae9cccc29] = env->getMethodID(cls, "getFieldAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements FieldForceModelContext::getFieldAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getFieldAuxiliaryElements_f874d30ae9cccc29]));
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
            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args);
            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self);
            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data);
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data);
            static PyGetSetDef t_FieldForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldForceModelContext, fieldAuxiliaryElements),
              DECLARE_GET_FIELD(t_FieldForceModelContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldForceModelContext__methods_[] = {
              DECLARE_METHOD(t_FieldForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldForceModelContext, getFieldAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldForceModelContext)[] = {
              { Py_tp_methods, t_FieldForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldForceModelContext, t_FieldForceModelContext, FieldForceModelContext);
            PyObject *t_FieldForceModelContext::wrap_Object(const FieldForceModelContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldForceModelContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldForceModelContext), &PY_TYPE_DEF(FieldForceModelContext), module, "FieldForceModelContext", 0);
            }

            void t_FieldForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "class_", make_descriptor(FieldForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "wrapfn_", make_descriptor(t_FieldForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldForceModelContext::initializeClass, 1)))
                return NULL;
              return t_FieldForceModelContext::wrap_Object(FieldForceModelContext(((t_FieldForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "java/lang/String.h"
#include "org/hipparchus/util/Blendable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinates::class$ = NULL;
      jmethodID *PVCoordinates::mids$ = NULL;
      bool PVCoordinates::live$ = false;
      PVCoordinates *PVCoordinates::ZERO = NULL;

      jclass PVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_282cea09b82f4134] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_2810d2bec90e7b1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_be9548a8a583a03d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ef872cbae0d10840] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_7dc25758da124f3f] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_d63e82e7c0b1aa2f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_a59f54e2ae2d05cf] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_46870da220391655] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_2b97db16ec2b21f9] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_e84a973ee276ff40] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/PVCoordinates;D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_crossProduct_f04a629f07d17851] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_estimateVelocity_28192f68d01b7004] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAcceleration_f88961cca75a2c0a] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngularVelocity_f88961cca75a2c0a] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMomentum_f88961cca75a2c0a] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_f88961cca75a2c0a] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_f88961cca75a2c0a] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_negate_77bd7b3cdab2713e] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_normalize_77bd7b3cdab2713e] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_positionShiftedBy_20de5f9d51c6611f] = env->getMethodID(cls, "positionShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_9237689b200d23a6] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toDerivativeStructurePV_c4ba5dc533a7295c] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_57f172e29ab8adbf] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_950575861e9716b3] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_2d64addf4c3391d9] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_950575861e9716b3] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_2d64addf4c3391d9] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ZERO = new PVCoordinates(env->getStaticObjectField(cls, "ZERO", "Lorg/orekit/utils/PVCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PVCoordinates::PVCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_282cea09b82f4134, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2810d2bec90e7b1c, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be9548a8a583a03d, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(const PVCoordinates & a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef872cbae0d10840, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7dc25758da124f3f, a0, a1.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d63e82e7c0b1aa2f, a0.this$, a1.this$, a2.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a59f54e2ae2d05cf, a0, a1.this$, a2, a3.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46870da220391655, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5, jdouble a6, const PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2b97db16ec2b21f9, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      PVCoordinates PVCoordinates::blendArithmeticallyWith(const PVCoordinates & a0, jdouble a1) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_e84a973ee276ff40], a0.this$, a1));
      }

      PVCoordinates PVCoordinates::crossProduct(const PVCoordinates & a0, const PVCoordinates & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return PVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_f04a629f07d17851], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_28192f68d01b7004], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_f88961cca75a2c0a]));
      }

      PVCoordinates PVCoordinates::negate() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_77bd7b3cdab2713e]));
      }

      PVCoordinates PVCoordinates::normalize() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_77bd7b3cdab2713e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::positionShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_20de5f9d51c6611f], a0));
      }

      PVCoordinates PVCoordinates::shiftedBy(jdouble a0) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_9237689b200d23a6], a0));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_c4ba5dc533a7295c], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_57f172e29ab8adbf], a0));
      }

      ::java::lang::String PVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative1PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_950575861e9716b3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_2d64addf4c3391d9]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative2PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_950575861e9716b3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_2d64addf4c3391d9]));
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
      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data);
      static PyGetSetDef t_PVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_PVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_PVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_PVCoordinates, momentum),
        DECLARE_GET_FIELD(t_PVCoordinates, position),
        DECLARE_GET_FIELD(t_PVCoordinates, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PVCoordinates__methods_[] = {
        DECLARE_METHOD(t_PVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, crossProduct, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinates)[] = {
        { Py_tp_methods, t_PVCoordinates__methods_ },
        { Py_tp_init, (void *) t_PVCoordinates_init_ },
        { Py_tp_getset, t_PVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinates, t_PVCoordinates, PVCoordinates);

      void t_PVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinates), &PY_TYPE_DEF(PVCoordinates), module, "PVCoordinates", 0);
      }

      void t_PVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "class_", make_descriptor(PVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "wrapfn_", make_descriptor(t_PVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(PVCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "ZERO", make_descriptor(t_PVCoordinates::wrap_Object(*PVCoordinates::ZERO)));
      }

      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinates::initializeClass, 1)))
          return NULL;
        return t_PVCoordinates::wrap_Object(PVCoordinates(((t_PVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            PVCoordinates object((jobject) NULL);

            INT_CALL(object = PVCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            PVCoordinates a0((jobject) NULL);
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Dk", PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            jdouble a6;
            PVCoordinates a7((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        jdouble a1;
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kD", PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        PVCoordinates a1((jobject) NULL);
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::crossProduct(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "crossProduct", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(PVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data)
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
#include "org/orekit/gnss/DOP.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_b59f65eda1c2aad1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;IDDDDD)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGdop_557b8123390d8d0c] = env->getMethodID(cls, "getGdop", "()D");
          mids$[mid_getGnssNb_412668abc8d889e9] = env->getMethodID(cls, "getGnssNb", "()I");
          mids$[mid_getHdop_557b8123390d8d0c] = env->getMethodID(cls, "getHdop", "()D");
          mids$[mid_getLocation_8672b163b0e4a5a3] = env->getMethodID(cls, "getLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPdop_557b8123390d8d0c] = env->getMethodID(cls, "getPdop", "()D");
          mids$[mid_getTdop_557b8123390d8d0c] = env->getMethodID(cls, "getTdop", "()D");
          mids$[mid_getVdop_557b8123390d8d0c] = env->getMethodID(cls, "getVdop", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DOP::DOP(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b59f65eda1c2aad1, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

      ::org::orekit::time::AbsoluteDate DOP::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble DOP::getGdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGdop_557b8123390d8d0c]);
      }

      jint DOP::getGnssNb() const
      {
        return env->callIntMethod(this$, mids$[mid_getGnssNb_412668abc8d889e9]);
      }

      jdouble DOP::getHdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHdop_557b8123390d8d0c]);
      }

      ::org::orekit::bodies::GeodeticPoint DOP::getLocation() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getLocation_8672b163b0e4a5a3]));
      }

      jdouble DOP::getPdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPdop_557b8123390d8d0c]);
      }

      jdouble DOP::getTdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdop_557b8123390d8d0c]);
      }

      jdouble DOP::getVdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdop_557b8123390d8d0c]);
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
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalMultivariateSummary::class$ = NULL;
        jmethodID *StatisticalMultivariateSummary::mids$ = NULL;
        bool StatisticalMultivariateSummary::live$ = false;

        jclass StatisticalMultivariateSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalMultivariateSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_70a207fcbc031df2] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_a53a7513ecedada2] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_a53a7513ecedada2] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_a53a7513ecedada2] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_a53a7513ecedada2] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_a53a7513ecedada2] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_a53a7513ecedada2] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_a53a7513ecedada2] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_a53a7513ecedada2] = env->getMethodID(cls, "getSumSq", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix StatisticalMultivariateSummary::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_70a207fcbc031df2]));
        }

        jint StatisticalMultivariateSummary::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_a53a7513ecedada2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_a53a7513ecedada2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_a53a7513ecedada2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_a53a7513ecedada2]));
        }

        jlong StatisticalMultivariateSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_a53a7513ecedada2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_a53a7513ecedada2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_a53a7513ecedada2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_a53a7513ecedada2]));
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
        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data);
        static PyGetSetDef t_StatisticalMultivariateSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, covariance),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, dimension),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, geometricMean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, max),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, min),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, n),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumLog),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalMultivariateSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalMultivariateSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumSq, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalMultivariateSummary)[] = {
          { Py_tp_methods, t_StatisticalMultivariateSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalMultivariateSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalMultivariateSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalMultivariateSummary, t_StatisticalMultivariateSummary, StatisticalMultivariateSummary);

        void t_StatisticalMultivariateSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalMultivariateSummary), &PY_TYPE_DEF(StatisticalMultivariateSummary), module, "StatisticalMultivariateSummary", 0);
        }

        void t_StatisticalMultivariateSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "class_", make_descriptor(StatisticalMultivariateSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "wrapfn_", make_descriptor(t_StatisticalMultivariateSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalMultivariateSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalMultivariateSummary::wrap_Object(StatisticalMultivariateSummary(((t_StatisticalMultivariateSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalMultivariateSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
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

              ::java::lang::Class *SsrIgm05Data::class$ = NULL;
              jmethodID *SsrIgm05Data::mids$ = NULL;
              bool SsrIgm05Data::live$ = false;

              jclass SsrIgm05Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCodeBias_801fe9b6b70a536c] = env->getMethodID(cls, "addCodeBias", "(Lorg/orekit/gnss/metric/messages/common/CodeBias;)V");
                  mids$[mid_getCodeBias_80df61932c3adcb9] = env->getMethodID(cls, "getCodeBias", "(I)Lorg/orekit/gnss/metric/messages/common/CodeBias;");
                  mids$[mid_getCodeBiases_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getCodeBiases", "()Ljava/util/Map;");
                  mids$[mid_getNumberOfBiasesProcessed_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_setNumberOfBiasesProcessed_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Data::SsrIgm05Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              void SsrIgm05Data::addCodeBias(const ::org::orekit::gnss::metric::messages::common::CodeBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCodeBias_801fe9b6b70a536c], a0.this$);
              }

              ::org::orekit::gnss::metric::messages::common::CodeBias SsrIgm05Data::getCodeBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::CodeBias(env->callObjectMethod(this$, mids$[mid_getCodeBias_80df61932c3adcb9], a0));
              }

              ::java::util::Map SsrIgm05Data::getCodeBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCodeBiases_1e62c2f73fbdd1c4]));
              }

              jint SsrIgm05Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_412668abc8d889e9]);
              }

              void SsrIgm05Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_a3da1a935cb37f7b], a0);
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
              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data);
              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data);
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm05Data__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05Data, codeBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm05Data, numberOfBiasesProcessed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, addCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, setNumberOfBiasesProcessed, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Data)[] = {
                { Py_tp_methods, t_SsrIgm05Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Data_init_ },
                { Py_tp_getset, t_SsrIgm05Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Data, t_SsrIgm05Data, SsrIgm05Data);

              void t_SsrIgm05Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Data), &PY_TYPE_DEF(SsrIgm05Data), module, "SsrIgm05Data", 0);
              }

              void t_SsrIgm05Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "class_", make_descriptor(SsrIgm05Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "wrapfn_", make_descriptor(t_SsrIgm05Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Data::wrap_Object(SsrIgm05Data(((t_SsrIgm05Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Data object((jobject) NULL);

                INT_CALL(object = SsrIgm05Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::CodeBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::CodeBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCodeBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::CodeBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getCodeBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_CodeBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(CodeBias));
              }

              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg)
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

              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonAbstractKalmanEstimator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
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
            mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getKalmanEstimation_32faeba2996c6566] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractKalmanEstimator::PythonAbstractKalmanEstimator(const ::java::util::List & a0) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

        void PythonAbstractKalmanEstimator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractKalmanEstimator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractKalmanEstimator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
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
              mids$[mid_getMessageType_ed1acef2fdb033e1] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_getSatelliteId_e73aede0632481c0] = env->getStaticMethodID(cls, "getSatelliteId", "(Lorg/orekit/gnss/SatelliteSystem;I)I");
              mids$[mid_messageNumberToSatelliteSystem_6aab4999d0ba53ca] = env->getStaticMethodID(cls, "messageNumberToSatelliteSystem", "(I)Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_valueOf_ed1acef2fdb033e1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_values_103304ddea6ba3dc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");

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
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_ed1acef2fdb033e1], a0.this$));
          }

          jint IgsSsrMessageType::getSatelliteId(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticIntMethod(cls, mids$[mid_getSatelliteId_e73aede0632481c0], a0.this$, a1);
          }

          ::org::orekit::gnss::SatelliteSystem IgsSsrMessageType::messageNumberToSatelliteSystem(jint a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::gnss::SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_messageNumberToSatelliteSystem_6aab4999d0ba53ca], a0));
          }

          IgsSsrMessageType IgsSsrMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed1acef2fdb033e1], a0.this$));
          }

          JArray< IgsSsrMessageType > IgsSsrMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_103304ddea6ba3dc]));
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
#include "org/orekit/propagation/events/handlers/StopOnIncreasing.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnIncreasing::class$ = NULL;
          jmethodID *StopOnIncreasing::mids$ = NULL;
          bool StopOnIncreasing::live$ = false;

          jclass StopOnIncreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnIncreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnIncreasing::StopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action StopOnIncreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c85ac59cb25f2670], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnIncreasing_init_(t_StopOnIncreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnIncreasing_eventOccurred(t_StopOnIncreasing *self, PyObject *args);

          static PyMethodDef t_StopOnIncreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnIncreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnIncreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnIncreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnIncreasing)[] = {
            { Py_tp_methods, t_StopOnIncreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnIncreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnIncreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnIncreasing, t_StopOnIncreasing, StopOnIncreasing);

          void t_StopOnIncreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnIncreasing), &PY_TYPE_DEF(StopOnIncreasing), module, "StopOnIncreasing", 0);
          }

          void t_StopOnIncreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "class_", make_descriptor(StopOnIncreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "wrapfn_", make_descriptor(t_StopOnIncreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnIncreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnIncreasing::wrap_Object(StopOnIncreasing(((t_StopOnIncreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnIncreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnIncreasing_init_(t_StopOnIncreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnIncreasing object((jobject) NULL);

            INT_CALL(object = StopOnIncreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnIncreasing_eventOccurred(t_StopOnIncreasing *self, PyObject *args)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GeographicZoneDetector::class$ = NULL;
        jmethodID *GeographicZoneDetector::mids$ = NULL;
        bool GeographicZoneDetector::live$ = false;

        jclass GeographicZoneDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GeographicZoneDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bc1a55e394385453] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_e9509d28a9dc022e] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_f166528db337c659] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getMargin_557b8123390d8d0c] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getZone_1223d06efa3ccad7] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_withMargin_86c82b696f99a1e1] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/GeographicZoneDetector;");
            mids$[mid_create_c137a22e12d2740e] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GeographicZoneDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeographicZoneDetector::GeographicZoneDetector(const ::org::orekit::bodies::BodyShape & a0, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bc1a55e394385453, a0.this$, a1.this$, a2)) {}

        GeographicZoneDetector::GeographicZoneDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e9509d28a9dc022e, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble GeographicZoneDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::bodies::BodyShape GeographicZoneDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_f166528db337c659]));
        }

        jdouble GeographicZoneDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet GeographicZoneDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_1223d06efa3ccad7]));
        }

        GeographicZoneDetector GeographicZoneDetector::withMargin(jdouble a0) const
        {
          return GeographicZoneDetector(env->callObjectMethod(this$, mids$[mid_withMargin_86c82b696f99a1e1], a0));
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
        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args);
        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args);
        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data);
        static PyGetSetDef t_GeographicZoneDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GeographicZoneDetector, body),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, margin),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, zone),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeographicZoneDetector__methods_[] = {
          DECLARE_METHOD(t_GeographicZoneDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getZone, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, withMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeographicZoneDetector)[] = {
          { Py_tp_methods, t_GeographicZoneDetector__methods_ },
          { Py_tp_init, (void *) t_GeographicZoneDetector_init_ },
          { Py_tp_getset, t_GeographicZoneDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeographicZoneDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GeographicZoneDetector, t_GeographicZoneDetector, GeographicZoneDetector);
        PyObject *t_GeographicZoneDetector::wrap_Object(const GeographicZoneDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeographicZoneDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeographicZoneDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GeographicZoneDetector), &PY_TYPE_DEF(GeographicZoneDetector), module, "GeographicZoneDetector", 0);
        }

        void t_GeographicZoneDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "class_", make_descriptor(GeographicZoneDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "wrapfn_", make_descriptor(t_GeographicZoneDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeographicZoneDetector::initializeClass, 1)))
            return NULL;
          return t_GeographicZoneDetector::wrap_Object(GeographicZoneDetector(((t_GeographicZoneDetector *) arg)->object.this$));
        }
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeographicZoneDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::bodies::BodyShape a0((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a2))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a4))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
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

        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeographicZoneDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg)
        {
          jdouble a0;
          GeographicZoneDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_GeographicZoneDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Skewness::class$ = NULL;
          jmethodID *Skewness::mids$ = NULL;
          bool Skewness::live$ = false;

          jclass Skewness::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Skewness");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_39d94353cfc666bc] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Skewness;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Skewness::Skewness() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void Skewness::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Skewness Skewness::copy() const
          {
            return Skewness(env->callObjectMethod(this$, mids$[mid_copy_39d94353cfc666bc]));
          }

          jdouble Skewness::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jlong Skewness::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Skewness::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Skewness::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data);
          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data);
          static PyGetSetDef t_Skewness__fields_[] = {
            DECLARE_GET_FIELD(t_Skewness, n),
            DECLARE_GET_FIELD(t_Skewness, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Skewness__methods_[] = {
            DECLARE_METHOD(t_Skewness, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, clear, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, copy, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getN, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Skewness)[] = {
            { Py_tp_methods, t_Skewness__methods_ },
            { Py_tp_init, (void *) t_Skewness_init_ },
            { Py_tp_getset, t_Skewness__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Skewness)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Skewness, t_Skewness, Skewness);

          void t_Skewness::install(PyObject *module)
          {
            installType(&PY_TYPE(Skewness), &PY_TYPE_DEF(Skewness), module, "Skewness", 0);
          }

          void t_Skewness::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "class_", make_descriptor(Skewness::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "wrapfn_", make_descriptor(t_Skewness::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Skewness::initializeClass, 1)))
              return NULL;
            return t_Skewness::wrap_Object(Skewness(((t_Skewness *) arg)->object.this$));
          }
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Skewness::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds)
          {
            Skewness object((jobject) NULL);

            INT_CALL(object = Skewness());
            self->object = object;

            return 0;
          }

          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args)
          {
            Skewness result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Skewness::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args)
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

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data)
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
#include "org/orekit/rugged/errors/DumpReplayer.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer::class$ = NULL;
        jmethodID *DumpReplayer::mids$ = NULL;
        bool DumpReplayer::live$ = false;

        jclass DumpReplayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createRugged_f145c77b35875136] = env->getMethodID(cls, "createRugged", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_execute_ea85ae1307587c4c] = env->getMethodID(cls, "execute", "(Lorg/orekit/rugged/api/Rugged;)[Lorg/orekit/rugged/errors/DumpReplayer$Result;");
            mids$[mid_parse_5d6bcca91ae998ee] = env->getMethodID(cls, "parse", "(Ljava/io/File;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DumpReplayer::DumpReplayer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::rugged::api::Rugged DumpReplayer::createRugged() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_createRugged_f145c77b35875136]));
        }

        JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > DumpReplayer::execute(const ::org::orekit::rugged::api::Rugged & a0) const
        {
          return JArray< ::org::orekit::rugged::errors::DumpReplayer$Result >(env->callObjectMethod(this$, mids$[mid_execute_ea85ae1307587c4c], a0.this$));
        }

        void DumpReplayer::parse(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_parse_5d6bcca91ae998ee], a0.this$);
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
        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self);
        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg);
        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg);

        static PyMethodDef t_DumpReplayer__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, createRugged, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer, execute, METH_O),
          DECLARE_METHOD(t_DumpReplayer, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer)[] = {
          { Py_tp_methods, t_DumpReplayer__methods_ },
          { Py_tp_init, (void *) t_DumpReplayer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer, t_DumpReplayer, DumpReplayer);

        void t_DumpReplayer::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer), &PY_TYPE_DEF(DumpReplayer), module, "DumpReplayer", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "Result", make_descriptor(&PY_TYPE_DEF(DumpReplayer$Result)));
        }

        void t_DumpReplayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "class_", make_descriptor(DumpReplayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "wrapfn_", make_descriptor(t_DumpReplayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer::wrap_Object(DumpReplayer(((t_DumpReplayer *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds)
        {
          DumpReplayer object((jobject) NULL);

          INT_CALL(object = DumpReplayer());
          self->object = object;

          return 0;
        }

        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.createRugged());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::Rugged a0((jobject) NULL);
          JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::api::Rugged::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.execute(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::rugged::errors::t_DumpReplayer$Result::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "execute", arg);
          return NULL;
        }

        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(self->object.parse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagator::class$ = NULL;
          jmethodID *SBASPropagator::mids$ = NULL;
          bool SBASPropagator::live$ = false;

          jclass SBASPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_6c9bc0a928c56d4e] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_557b8123390d8d0c] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getSBASOrbitalElements_62933eb69192060d] = env->getMethodID(cls, "getSBASOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;");
              mids$[mid_propagateInEcef_f00f0e7ea285c370] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame SBASPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_6c9bc0a928c56d4e]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_6c9bc0a928c56d4e]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          jdouble SBASPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_557b8123390d8d0c]);
          }

          ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements SBASPropagator::getSBASOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements(env->callObjectMethod(this$, mids$[mid_getSBASOrbitalElements_62933eb69192060d]));
          }

          ::org::orekit::utils::PVCoordinates SBASPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_f00f0e7ea285c370], a0.this$));
          }

          void SBASPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
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
          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg);
          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data);
          static PyGetSetDef t_SBASPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_SBASPropagator, eCEF),
            DECLARE_GET_FIELD(t_SBASPropagator, eCI),
            DECLARE_GET_FIELD(t_SBASPropagator, frame),
            DECLARE_GET_FIELD(t_SBASPropagator, mU),
            DECLARE_GET_FIELD(t_SBASPropagator, sBASOrbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SBASPropagator__methods_[] = {
            DECLARE_METHOD(t_SBASPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_SBASPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getSBASOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_SBASPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagator)[] = {
            { Py_tp_methods, t_SBASPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SBASPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(SBASPropagator, t_SBASPropagator, SBASPropagator);

          void t_SBASPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagator), &PY_TYPE_DEF(SBASPropagator), module, "SBASPropagator", 0);
          }

          void t_SBASPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "class_", make_descriptor(SBASPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "wrapfn_", make_descriptor(t_SBASPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagator::initializeClass, 1)))
              return NULL;
            return t_SBASPropagator::wrap_Object(SBASPropagator(((t_SBASPropagator *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/List.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/util/Spliterator.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *List::class$ = NULL;
    jmethodID *List::mids$ = NULL;
    bool List::live$ = false;

    jclass List::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/List");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_3e1115797609a4d9] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_c5e40f007e7fded1] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_553bd7408f29b728] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_8a5ee63f2530538f] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_38a1845c8d44a9b0] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_38a1845c8d44a9b0] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_996d185ac031638c] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_bd2239bed91d009f] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_of_0d9551367f7ecdef] = env->getStaticMethodID(cls, "of", "()Ljava/util/List;");
        mids$[mid_of_6f26a4abc68018f5] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_b025aa6e6332479e] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_6f83ea1a21aa5532] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_f7cc7bf1c1ab0de1] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_4ef495e4ba12bfb6] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_52b6ae7330901331] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_8314f586904b720d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_5c4f774ef92936ef] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_131a43757df0b2df] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_ec44ab5da477a9f1] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_2ac0931feaef3681] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_remove_8a5ee63f2530538f] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_ff7fbb4a04f4c36b] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_349032d04af23bed] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_db6a96225c690c76] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_6555a5198c71b73a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_73423092793bcd23] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean List::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    void List::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_3e1115797609a4d9], a0, a1.this$);
    }

    jboolean List::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean List::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_c5e40f007e7fded1], a0, a1.this$);
    }

    void List::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    jboolean List::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    jboolean List::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_15ecf331dcc5aaf3], a0.this$);
    }

    List List::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_copyOf_553bd7408f29b728], a0.this$));
    }

    jboolean List::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object List::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_8a5ee63f2530538f], a0));
    }

    jint List::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint List::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_38a1845c8d44a9b0], a0.this$);
    }

    jboolean List::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator List::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    jint List::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_38a1845c8d44a9b0], a0.this$);
    }

    ::java::util::ListIterator List::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_996d185ac031638c]));
    }

    ::java::util::ListIterator List::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_bd2239bed91d009f], a0));
    }

    List List::of()
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_0d9551367f7ecdef]));
    }

    List List::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_6f26a4abc68018f5], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_b025aa6e6332479e], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_6f83ea1a21aa5532], a0.this$, a1.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_f7cc7bf1c1ab0de1], a0.this$, a1.this$, a2.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_4ef495e4ba12bfb6], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_52b6ae7330901331], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_8314f586904b720d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_5c4f774ef92936ef], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_131a43757df0b2df], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_ec44ab5da477a9f1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_2ac0931feaef3681], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    ::java::lang::Object List::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_8a5ee63f2530538f], a0));
    }

    jboolean List::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jboolean List::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean List::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_15ecf331dcc5aaf3], a0.this$);
    }

    ::java::lang::Object List::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_ff7fbb4a04f4c36b], a0, a1.this$));
    }

    jint List::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    void List::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_349032d04af23bed], a0.this$);
    }

    ::java::util::Spliterator List::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }

    List List::subList(jint a0, jint a1) const
    {
      return List(env->callObjectMethod(this$, mids$[mid_subList_db6a96225c690c76], a0, a1));
    }

    JArray< ::java::lang::Object > List::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_6555a5198c71b73a]));
    }

    JArray< ::java::lang::Object > List::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_73423092793bcd23], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_of_(t_List *self, PyObject *args);
    static PyObject *t_List_add(t_List *self, PyObject *args);
    static PyObject *t_List_addAll(t_List *self, PyObject *args);
    static PyObject *t_List_clear(t_List *self, PyObject *args);
    static PyObject *t_List_contains(t_List *self, PyObject *args);
    static PyObject *t_List_containsAll(t_List *self, PyObject *args);
    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_equals(t_List *self, PyObject *args);
    static PyObject *t_List_get(t_List *self, PyObject *arg);
    static PyObject *t_List_hashCode(t_List *self, PyObject *args);
    static PyObject *t_List_indexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_isEmpty(t_List *self, PyObject *args);
    static PyObject *t_List_iterator(t_List *self, PyObject *args);
    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_listIterator(t_List *self, PyObject *args);
    static PyObject *t_List_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_List_remove(t_List *self, PyObject *args);
    static PyObject *t_List_removeAll(t_List *self, PyObject *args);
    static PyObject *t_List_retainAll(t_List *self, PyObject *args);
    static PyObject *t_List_set(t_List *self, PyObject *args);
    static PyObject *t_List_size(t_List *self, PyObject *args);
    static PyObject *t_List_sort(t_List *self, PyObject *arg);
    static PyObject *t_List_spliterator(t_List *self, PyObject *args);
    static PyObject *t_List_subList(t_List *self, PyObject *args);
    static PyObject *t_List_toArray(t_List *self, PyObject *args);
    static PyObject *t_List_get__empty(t_List *self, void *data);
    static PyObject *t_List_get__parameters_(t_List *self, void *data);
    static PyGetSetDef t_List__fields_[] = {
      DECLARE_GET_FIELD(t_List, empty),
      DECLARE_GET_FIELD(t_List, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_List__methods_[] = {
      DECLARE_METHOD(t_List, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, of_, METH_VARARGS),
      DECLARE_METHOD(t_List, add, METH_VARARGS),
      DECLARE_METHOD(t_List, addAll, METH_VARARGS),
      DECLARE_METHOD(t_List, clear, METH_VARARGS),
      DECLARE_METHOD(t_List, contains, METH_VARARGS),
      DECLARE_METHOD(t_List, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_List, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, equals, METH_VARARGS),
      DECLARE_METHOD(t_List, get, METH_O),
      DECLARE_METHOD(t_List, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_List, indexOf, METH_O),
      DECLARE_METHOD(t_List, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_List, iterator, METH_VARARGS),
      DECLARE_METHOD(t_List, lastIndexOf, METH_O),
      DECLARE_METHOD(t_List, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_List, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_List, remove, METH_VARARGS),
      DECLARE_METHOD(t_List, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_List, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_List, set, METH_VARARGS),
      DECLARE_METHOD(t_List, size, METH_VARARGS),
      DECLARE_METHOD(t_List, sort, METH_O),
      DECLARE_METHOD(t_List, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_List, subList, METH_VARARGS),
      DECLARE_METHOD(t_List, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(List)[] = {
      { Py_tp_methods, t_List__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_List__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_List *)) get_generic_iterator< t_List >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(List)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(List, t_List, List);
    PyObject *t_List::wrap_Object(const List& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_List::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_List::install(PyObject *module)
    {
      installType(&PY_TYPE(List), &PY_TYPE_DEF(List), module, "List", 0);
    }

    void t_List::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "class_", make_descriptor(List::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "wrapfn_", make_descriptor(t_List::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, List::initializeClass, 1)))
        return NULL;
      return t_List::wrap_Object(List(((t_List *) arg)->object.this$));
    }
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, List::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_List_of_(t_List *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_List_add(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_List_addAll(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_List_clear(t_List *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_List_contains(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_List_containsAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::List::copyOf(a0));
        return t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_List_equals(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_List_get(t_List *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_List_hashCode(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_List_indexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_List_isEmpty(t_List *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_List_iterator(t_List *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_List_listIterator(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_List_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          List result((jobject) NULL);
          OBJ_CALL(result = ::java::util::List::of());
          return t_List::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4));
            return t_List::wrap_Object(result);
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
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6));
            return t_List::wrap_Object(result);
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
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 9:
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
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_List::wrap_Object(result);
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
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_List::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_List_remove(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_List_removeAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_List_retainAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_List_set(t_List *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_List_size(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_List_sort(t_List *self, PyObject *arg)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "sort", arg);
      return NULL;
    }

    static PyObject *t_List_spliterator(t_List *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_List_subList(t_List *self, PyObject *args)
    {
      jint a0;
      jint a1;
      List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }

    static PyObject *t_List_toArray(t_List *self, PyObject *args)
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

      return callSuper(PY_TYPE(List), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_List_get__parameters_(t_List *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_List_get__empty(t_List *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
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
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getIonoModel_d442018e79d7cb97] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");
              mids$[mid_rangeErrorIonosphericModel_81f653af97ea34a8] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeErrorIonosphericModel_17bae2e3aa9bc870] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList$DelegatingDriver::class$ = NULL;
      jmethodID *ParameterDriversList$DelegatingDriver::mids$ = NULL;
      bool ParameterDriversList$DelegatingDriver::live$ = false;

      jclass ParameterDriversList$DelegatingDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList$DelegatingDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getRawDrivers", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List ParameterDriversList$DelegatingDriver::getRawDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRawDrivers_0d9551367f7ecdef]));
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
      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self);
      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data);
      static PyGetSetDef t_ParameterDriversList$DelegatingDriver__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList$DelegatingDriver, rawDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList$DelegatingDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, getRawDrivers, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList$DelegatingDriver)[] = {
        { Py_tp_methods, t_ParameterDriversList$DelegatingDriver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversList$DelegatingDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList$DelegatingDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList$DelegatingDriver, t_ParameterDriversList$DelegatingDriver, ParameterDriversList$DelegatingDriver);

      void t_ParameterDriversList$DelegatingDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList$DelegatingDriver), &PY_TYPE_DEF(ParameterDriversList$DelegatingDriver), module, "ParameterDriversList$DelegatingDriver", 0);
      }

      void t_ParameterDriversList$DelegatingDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "class_", make_descriptor(ParameterDriversList$DelegatingDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "wrapfn_", make_descriptor(t_ParameterDriversList$DelegatingDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList$DelegatingDriver::wrap_Object(ParameterDriversList$DelegatingDriver(((t_ParameterDriversList$DelegatingDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisSegment::mids$ = NULL;
        bool PythonAttitudeEphemerisSegment::live$ = false;

        jclass PythonAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAngularCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_b44a04493534d299] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisSegment::PythonAttitudeEphemerisSegment() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonAttitudeEphemerisSegment::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAttitudeEphemerisSegment::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAttitudeEphemerisSegment::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self);
        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisSegment, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisSegment, t_PythonAttitudeEphemerisSegment, PythonAttitudeEphemerisSegment);

        void t_PythonAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisSegment), &PY_TYPE_DEF(PythonAttitudeEphemerisSegment), module, "PythonAttitudeEphemerisSegment", 1);
        }

        void t_PythonAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "class_", make_descriptor(PythonAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisSegment::initializeClass);
          JNINativeMethod methods[] = {
            { "getAngularCoordinates", "()Ljava/util/List;", (void *) t_PythonAttitudeEphemerisSegment_getAngularCoordinates0 },
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonAttitudeEphemerisSegment_getAttitudeProvider1 },
            { "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;", (void *) t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2 },
            { "getInterpolationMethod", "()Ljava/lang/String;", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationMethod3 },
            { "getInterpolationSamples", "()I", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationSamples4 },
            { "getReferenceFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAttitudeEphemerisSegment_getReferenceFrame5 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStart6 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStop7 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisSegment_pythonDecRef8 },
          };
          env->registerNatives(cls, methods, 9);
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisSegment::wrap_Object(PythonAttitudeEphemerisSegment(((t_PythonAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisSegment object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisSegment());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAngularCoordinates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getAngularCoordinates", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAvailableDerivatives", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &value))
          {
            throwTypeError("getAvailableDerivatives", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationMethod", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getInterpolationMethod", result);
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

        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationSamples", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getInterpolationSamples", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getReferenceFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getReferenceFrame", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data)
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
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservableSatellite::class$ = NULL;
        jmethodID *ObservableSatellite::mids$ = NULL;
        bool ObservableSatellite::live$ = false;
        ::java::lang::String *ObservableSatellite::CLOCK_DRIFT_PREFIX = NULL;
        ::java::lang::String *ObservableSatellite::CLOCK_OFFSET_PREFIX = NULL;

        jclass ObservableSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservableSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getClockDriftDriver_4194657b5e280ddc] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_4194657b5e280ddc] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPropagatorIndex_412668abc8d889e9] = env->getMethodID(cls, "getPropagatorIndex", "()I");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_DRIFT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_DRIFT_PREFIX", "Ljava/lang/String;"));
            CLOCK_OFFSET_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_OFFSET_PREFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ObservableSatellite::ObservableSatellite(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

        jboolean ObservableSatellite::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_4194657b5e280ddc]));
        }

        jint ObservableSatellite::getPropagatorIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getPropagatorIndex_412668abc8d889e9]);
        }

        jint ObservableSatellite::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data);
        static PyGetSetDef t_ObservableSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_ObservableSatellite, clockDriftDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, clockOffsetDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, propagatorIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservableSatellite__methods_[] = {
          DECLARE_METHOD(t_ObservableSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, equals, METH_VARARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getPropagatorIndex, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservableSatellite)[] = {
          { Py_tp_methods, t_ObservableSatellite__methods_ },
          { Py_tp_init, (void *) t_ObservableSatellite_init_ },
          { Py_tp_getset, t_ObservableSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservableSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ObservableSatellite, t_ObservableSatellite, ObservableSatellite);

        void t_ObservableSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservableSatellite), &PY_TYPE_DEF(ObservableSatellite), module, "ObservableSatellite", 0);
        }

        void t_ObservableSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "class_", make_descriptor(ObservableSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "wrapfn_", make_descriptor(t_ObservableSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "boxfn_", make_descriptor(boxObject));
          env->getClass(ObservableSatellite::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_DRIFT_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_DRIFT_PREFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_OFFSET_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_OFFSET_PREFIX)));
        }

        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservableSatellite::initializeClass, 1)))
            return NULL;
          return t_ObservableSatellite::wrap_Object(ObservableSatellite(((t_ObservableSatellite *) arg)->object.this$));
        }
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservableSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          ObservableSatellite object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ObservableSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryAttribute.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryAttribute::class$ = NULL;
        jmethodID *BoundaryAttribute::mids$ = NULL;
        bool BoundaryAttribute::live$ = false;

        jclass BoundaryAttribute::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryAttribute");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPlusInside_0629297ff6ae927a] = env->getMethodID(cls, "getPlusInside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlusOutside_0629297ff6ae927a] = env->getMethodID(cls, "getPlusOutside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSplitters_a7bfdbab4f440827] = env->getMethodID(cls, "getSplitters", "()Lorg/hipparchus/geometry/partitioning/NodesSet;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusInside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusInside_0629297ff6ae927a]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusOutside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusOutside_0629297ff6ae927a]));
        }

        ::org::hipparchus::geometry::partitioning::NodesSet BoundaryAttribute::getSplitters() const
        {
          return ::org::hipparchus::geometry::partitioning::NodesSet(env->callObjectMethod(this$, mids$[mid_getSplitters_a7bfdbab4f440827]));
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
        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args);
        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data);
        static PyGetSetDef t_BoundaryAttribute__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusInside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusOutside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, splitters),
          DECLARE_GET_FIELD(t_BoundaryAttribute, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryAttribute__methods_[] = {
          DECLARE_METHOD(t_BoundaryAttribute, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusInside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusOutside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getSplitters, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryAttribute)[] = {
          { Py_tp_methods, t_BoundaryAttribute__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BoundaryAttribute__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryAttribute)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryAttribute, t_BoundaryAttribute, BoundaryAttribute);
        PyObject *t_BoundaryAttribute::wrap_Object(const BoundaryAttribute& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryAttribute::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryAttribute::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryAttribute), &PY_TYPE_DEF(BoundaryAttribute), module, "BoundaryAttribute", 0);
        }

        void t_BoundaryAttribute::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "class_", make_descriptor(BoundaryAttribute::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "wrapfn_", make_descriptor(t_BoundaryAttribute::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryAttribute::initializeClass, 1)))
            return NULL;
          return t_BoundaryAttribute::wrap_Object(BoundaryAttribute(((t_BoundaryAttribute *) arg)->object.this$));
        }
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryAttribute::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIBulletinAFilesLoader.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIBulletinAFilesLoader::class$ = NULL;
      jmethodID *UTCTAIBulletinAFilesLoader::mids$ = NULL;
      bool UTCTAIBulletinAFilesLoader::live$ = false;

      jclass UTCTAIBulletinAFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIBulletinAFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}

      ::java::util::List UTCTAIBulletinAFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_0d9551367f7ecdef]));
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
      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self);

      static PyMethodDef t_UTCTAIBulletinAFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIBulletinAFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIBulletinAFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIBulletinAFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIBulletinAFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIBulletinAFilesLoader, t_UTCTAIBulletinAFilesLoader, UTCTAIBulletinAFilesLoader);

      void t_UTCTAIBulletinAFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIBulletinAFilesLoader), &PY_TYPE_DEF(UTCTAIBulletinAFilesLoader), module, "UTCTAIBulletinAFilesLoader", 0);
      }

      void t_UTCTAIBulletinAFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "class_", make_descriptor(UTCTAIBulletinAFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIBulletinAFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIBulletinAFilesLoader::wrap_Object(UTCTAIBulletinAFilesLoader(((t_UTCTAIBulletinAFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0, a1));
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

      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
