#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLaguerreRuleFactory::class$ = NULL;
          jmethodID *FieldLaguerreRuleFactory::mids$ = NULL;
          bool FieldLaguerreRuleFactory::live$ = false;

          jclass FieldLaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLaguerreRuleFactory::FieldLaguerreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLaguerreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_c07c8b9364272960], a0));
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
          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args);
          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLaguerreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLaguerreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLaguerreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLaguerreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLaguerreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLaguerreRuleFactory, t_FieldLaguerreRuleFactory, FieldLaguerreRuleFactory);
          PyObject *t_FieldLaguerreRuleFactory::wrap_Object(const FieldLaguerreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLaguerreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLaguerreRuleFactory), &PY_TYPE_DEF(FieldLaguerreRuleFactory), module, "FieldLaguerreRuleFactory", 0);
          }

          void t_FieldLaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "class_", make_descriptor(FieldLaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "wrapfn_", make_descriptor(t_FieldLaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLaguerreRuleFactory::wrap_Object(FieldLaguerreRuleFactory(((t_FieldLaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLaguerreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLaguerreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data)
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
#include "org/orekit/propagation/sampling/OrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
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
            mids$[mid_init$_e1387cf2cfecde7f] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getFixedStepHandler_0a2ac70fa622a939] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_9981f74b2d109da6] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_9db9d9fe85cac7f9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitStepNormalizer::OrekitStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1387cf2cfecde7f, a0, a1.this$)) {}

        void OrekitStepNormalizer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
        }

        ::org::orekit::propagation::sampling::OrekitFixedStepHandler OrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::OrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_0a2ac70fa622a939]));
        }

        jdouble OrekitStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_9981f74b2d109da6]);
        }

        void OrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_9db9d9fe85cac7f9], a0.this$);
        }

        void OrekitStepNormalizer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
#include "org/orekit/propagation/events/handlers/StopOnIncreasing.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnIncreasing::StopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action StopOnIncreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66898681536e4202], a0.this$, a1.this$, a2));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHIJjsPolynomials::class$ = NULL;
            jmethodID *GHIJjsPolynomials::mids$ = NULL;
            bool GHIJjsPolynomials::live$ = false;

            jclass GHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_getGjs_6d920aab27f0a3d2] = env->getMethodID(cls, "getGjs", "(II)D");
                mids$[mid_getHjs_6d920aab27f0a3d2] = env->getMethodID(cls, "getHjs", "(II)D");
                mids$[mid_getIjs_6d920aab27f0a3d2] = env->getMethodID(cls, "getIjs", "(II)D");
                mids$[mid_getJjs_6d920aab27f0a3d2] = env->getMethodID(cls, "getJjs", "(II)D");
                mids$[mid_getdGjsdAlpha_6d920aab27f0a3d2] = env->getMethodID(cls, "getdGjsdAlpha", "(II)D");
                mids$[mid_getdGjsdBeta_6d920aab27f0a3d2] = env->getMethodID(cls, "getdGjsdBeta", "(II)D");
                mids$[mid_getdGjsdh_6d920aab27f0a3d2] = env->getMethodID(cls, "getdGjsdh", "(II)D");
                mids$[mid_getdGjsdk_6d920aab27f0a3d2] = env->getMethodID(cls, "getdGjsdk", "(II)D");
                mids$[mid_getdHjsdAlpha_6d920aab27f0a3d2] = env->getMethodID(cls, "getdHjsdAlpha", "(II)D");
                mids$[mid_getdHjsdBeta_6d920aab27f0a3d2] = env->getMethodID(cls, "getdHjsdBeta", "(II)D");
                mids$[mid_getdHjsdh_6d920aab27f0a3d2] = env->getMethodID(cls, "getdHjsdh", "(II)D");
                mids$[mid_getdHjsdk_6d920aab27f0a3d2] = env->getMethodID(cls, "getdHjsdk", "(II)D");
                mids$[mid_getdIjsdAlpha_6d920aab27f0a3d2] = env->getMethodID(cls, "getdIjsdAlpha", "(II)D");
                mids$[mid_getdIjsdBeta_6d920aab27f0a3d2] = env->getMethodID(cls, "getdIjsdBeta", "(II)D");
                mids$[mid_getdIjsdh_6d920aab27f0a3d2] = env->getMethodID(cls, "getdIjsdh", "(II)D");
                mids$[mid_getdIjsdk_6d920aab27f0a3d2] = env->getMethodID(cls, "getdIjsdk", "(II)D");
                mids$[mid_getdJjsdAlpha_6d920aab27f0a3d2] = env->getMethodID(cls, "getdJjsdAlpha", "(II)D");
                mids$[mid_getdJjsdBeta_6d920aab27f0a3d2] = env->getMethodID(cls, "getdJjsdBeta", "(II)D");
                mids$[mid_getdJjsdh_6d920aab27f0a3d2] = env->getMethodID(cls, "getdJjsdh", "(II)D");
                mids$[mid_getdJjsdk_6d920aab27f0a3d2] = env->getMethodID(cls, "getdJjsdk", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHIJjsPolynomials::GHIJjsPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

            jdouble GHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGjs_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHjs_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIjs_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getJjs_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdAlpha_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdBeta_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdh_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdk_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdAlpha_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdBeta_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdh_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdk_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdAlpha_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdBeta_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdh_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdk_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdAlpha_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdBeta_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdh_6d920aab27f0a3d2], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdk_6d920aab27f0a3d2], a0, a1);
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
            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args);

            static PyMethodDef t_GHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHIJjsPolynomials)[] = {
              { Py_tp_methods, t_GHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHIJjsPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHIJjsPolynomials, t_GHIJjsPolynomials, GHIJjsPolynomials);

            void t_GHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHIJjsPolynomials), &PY_TYPE_DEF(GHIJjsPolynomials), module, "GHIJjsPolynomials", 0);
            }

            void t_GHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "class_", make_descriptor(GHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "wrapfn_", make_descriptor(t_GHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHIJjsPolynomials::wrap_Object(GHIJjsPolynomials(((t_GHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
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
#include "org/orekit/propagation/PythonFieldAbstractPropagator.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAbstractPropagator::class$ = NULL;
      jmethodID *PythonFieldAbstractPropagator::mids$ = NULL;
      bool PythonFieldAbstractPropagator::live$ = false;

      jclass PythonFieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_addEventDetector_bb8991c4a46cf56d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_bcf793a6168805e3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAbstractPropagator::PythonFieldAbstractPropagator(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::FieldAbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      void PythonFieldAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldAbstractPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self);
      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data);
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonFieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonFieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonFieldAbstractPropagator, t_PythonFieldAbstractPropagator, PythonFieldAbstractPropagator);
      PyObject *t_PythonFieldAbstractPropagator::wrap_Object(const PythonFieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAbstractPropagator), &PY_TYPE_DEF(PythonFieldAbstractPropagator), module, "PythonFieldAbstractPropagator", 1);
      }

      void t_PythonFieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "class_", make_descriptor(PythonFieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAbstractPropagator::wrap_Object(PythonFieldAbstractPropagator(((t_PythonFieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        PythonFieldAbstractPropagator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = PythonFieldAbstractPropagator(a0));
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

      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data)
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
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonJB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonJB2008InputParameters::class$ = NULL;
          jmethodID *PythonJB2008InputParameters::mids$ = NULL;
          bool PythonJB2008InputParameters::live$ = false;

          jclass PythonJB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonJB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDSTDTC_209f08246d708042] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_209f08246d708042] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_209f08246d708042] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_209f08246d708042] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_209f08246d708042] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_209f08246d708042] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_209f08246d708042] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_209f08246d708042] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_209f08246d708042] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonJB2008InputParameters::PythonJB2008InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonJB2008InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonJB2008InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonJB2008InputParameters::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self);
          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data);
          static PyGetSetDef t_PythonJB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonJB2008InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonJB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonJB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonJB2008InputParameters)[] = {
            { Py_tp_methods, t_PythonJB2008InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonJB2008InputParameters_init_ },
            { Py_tp_getset, t_PythonJB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonJB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonJB2008InputParameters, t_PythonJB2008InputParameters, PythonJB2008InputParameters);

          void t_PythonJB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonJB2008InputParameters), &PY_TYPE_DEF(PythonJB2008InputParameters), module, "PythonJB2008InputParameters", 1);
          }

          void t_PythonJB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "class_", make_descriptor(PythonJB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "wrapfn_", make_descriptor(t_PythonJB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonJB2008InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getDSTDTC0 },
              { "getF10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF101 },
              { "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF10B2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMinDate4 },
              { "getS10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS105 },
              { "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS10B6 },
              { "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM107 },
              { "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM10B8 },
              { "getY10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY109 },
              { "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY10B10 },
              { "pythonDecRef", "()V", (void *) t_PythonJB2008InputParameters_pythonDecRef11 },
            };
            env->registerNatives(cls, methods, 12);
          }

          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonJB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonJB2008InputParameters::wrap_Object(PythonJB2008InputParameters(((t_PythonJB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonJB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonJB2008InputParameters object((jobject) NULL);

            INT_CALL(object = PythonJB2008InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDSTDTC", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDSTDTC", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader::live$ = false;

            jclass CssiSpaceWeatherDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7cb2659f4799e4d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_815c7115fae241c1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getLastDailyPredictedDate_80e11148db499dda] = env->getMethodID(cls, "getLastDailyPredictedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLastObservedDate_80e11148db499dda] = env->getMethodID(cls, "getLastObservedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader::CssiSpaceWeatherDataLoader(const ::org::orekit::time::TimeScale & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_7cb2659f4799e4d2, a0.this$)) {}

            ::java::util::SortedSet CssiSpaceWeatherDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_815c7115fae241c1]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastDailyPredictedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastDailyPredictedDate_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastObservedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastObservedDate_80e11148db499dda]));
            }

            void CssiSpaceWeatherDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, dataSet),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastDailyPredictedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastObservedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastDailyPredictedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastObservedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader, t_CssiSpaceWeatherDataLoader, CssiSpaceWeatherDataLoader);
            PyObject *t_CssiSpaceWeatherDataLoader::wrap_Object(const CssiSpaceWeatherDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader), module, "CssiSpaceWeatherDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters)));
            }

            void t_CssiSpaceWeatherDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "class_", make_descriptor(CssiSpaceWeatherDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader::wrap_Object(CssiSpaceWeatherDataLoader(((t_CssiSpaceWeatherDataLoader *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CssiSpaceWeatherDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters));
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTZonalContext::class$ = NULL;
            jmethodID *FieldDSSTZonalContext::mids$ = NULL;
            bool FieldDSSTZonalContext::live$ = false;

            jclass FieldDSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_08d37e3f77b7239d] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_08d37e3f77b7239d] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_08d37e3f77b7239d] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCXO2N2A2_08d37e3f77b7239d] = env->getMethodID(cls, "getCXO2N2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHK_08d37e3f77b7239d] = env->getMethodID(cls, "getHK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2_08d37e3f77b7239d] = env->getMethodID(cls, "getK2MH2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2O2_08d37e3f77b7239d] = env->getMethodID(cls, "getK2MH2O2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_08d37e3f77b7239d] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_08d37e3f77b7239d] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoa_08d37e3f77b7239d] = env->getMethodID(cls, "getMuoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOON2A2_08d37e3f77b7239d] = env->getMethodID(cls, "getOON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_08d37e3f77b7239d] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_08d37e3f77b7239d] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_08d37e3f77b7239d] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX2ON2A2XP1_08d37e3f77b7239d] = env->getMethodID(cls, "getX2ON2A2XP1", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX3ON2A_08d37e3f77b7239d] = env->getMethodID(cls, "getX3ON2A", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXON2A2_08d37e3f77b7239d] = env->getMethodID(cls, "getXON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_08d37e3f77b7239d] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXXX_08d37e3f77b7239d] = env->getMethodID(cls, "getXXX", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getCXO2N2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCXO2N2A2_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getHK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHK_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2O2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2O2_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMuoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoa_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOON2A2_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX2ON2A2XP1() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX2ON2A2XP1_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX3ON2A() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX3ON2A_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXON2A2_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXXX_08d37e3f77b7239d]));
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
            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args);
            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data);
            static PyGetSetDef t_FieldDSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xXX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTZonalContext)[] = {
              { Py_tp_methods, t_FieldDSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTZonalContext, t_FieldDSSTZonalContext, FieldDSSTZonalContext);
            PyObject *t_FieldDSSTZonalContext::wrap_Object(const FieldDSSTZonalContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTZonalContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTZonalContext), &PY_TYPE_DEF(FieldDSSTZonalContext), module, "FieldDSSTZonalContext", 0);
            }

            void t_FieldDSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "class_", make_descriptor(FieldDSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "wrapfn_", make_descriptor(t_FieldDSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTZonalContext::wrap_Object(FieldDSSTZonalContext(((t_FieldDSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2O2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX3ON2A());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2O2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX3ON2A());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXXX());
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMessageWriter::class$ = NULL;
            jmethodID *CdmMessageWriter::mids$ = NULL;
            bool CdmMessageWriter::live$ = false;
            ::java::lang::String *CdmMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass CdmMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3026836a952fe988] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_fc8d452549dd65ec] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_9981f74b2d109da6] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_d2c8eb4129821f0e] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_45cb786b56bfc0bf] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_9981f74b2d109da6] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_1564c35f88556e3e] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_05c6d36d73082fa6] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_c0e1369736d25fb3] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)V");
                mids$[mid_writeRelativeMetadataContent_d892bd325a5da5c3] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegment_caac2f59668a092a] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmSegment;)V");
                mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMessageWriter::CdmMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3026836a952fe988, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding CdmMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_fc8d452549dd65ec]));
            }

            jdouble CdmMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_9981f74b2d109da6]);
            }

            ::java::lang::String CdmMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter CdmMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_45cb786b56bfc0bf]));
            }

            jdouble CdmMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_9981f74b2d109da6]);
            }

            void CdmMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_1564c35f88556e3e], a0.this$);
            }

            void CdmMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_05c6d36d73082fa6], a0.this$);
            }

            void CdmMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_c0e1369736d25fb3], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_d892bd325a5da5c3], a0.this$, a1, a2.this$);
            }

            void CdmMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmSegment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_caac2f59668a092a], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_305aa7864995b122], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data);
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data);
            static PyGetSetDef t_CdmMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMessageWriter, context),
              DECLARE_GET_FIELD(t_CdmMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_CdmMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_CdmMessageWriter, root),
              DECLARE_GET_FIELD(t_CdmMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_CdmMessageWriter, version),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMessageWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegment, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMessageWriter)[] = {
              { Py_tp_methods, t_CdmMessageWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMessageWriter_init_ },
              { Py_tp_getset, t_CdmMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmMessageWriter, t_CdmMessageWriter, CdmMessageWriter);

            void t_CdmMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMessageWriter), &PY_TYPE_DEF(CdmMessageWriter), module, "CdmMessageWriter", 0);
            }

            void t_CdmMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "class_", make_descriptor(CdmMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "wrapfn_", make_descriptor(t_CdmMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*CdmMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMessageWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMessageWriter::wrap_Object(CdmMessageWriter(((t_CdmMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              CdmMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CdmMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeRelativeMetadataContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmSegment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmSegment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::section::Segment a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "kDK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegmentContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegmentContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/orekit/files/general/PythonAttitudeEphemerisFileParser.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "java/io/BufferedReader.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileParser::mids$ = NULL;
        bool PythonAttitudeEphemerisFileParser::live$ = false;

        jclass PythonAttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_498b7d4fef347b9b] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_parse_BS_5814c1ff8a49014a] = env->getMethodID(cls, "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileParser::PythonAttitudeEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAttitudeEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAttitudeEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAttitudeEphemerisFileParser::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self);
        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileParser, t_PythonAttitudeEphemerisFileParser, PythonAttitudeEphemerisFileParser);

        void t_PythonAttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileParser), &PY_TYPE_DEF(PythonAttitudeEphemerisFileParser), module, "PythonAttitudeEphemerisFileParser", 1);
        }

        void t_PythonAttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "class_", make_descriptor(PythonAttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse0 },
            { "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse_BS1 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileParser_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileParser::wrap_Object(PythonAttitudeEphemerisFileParser(((t_PythonAttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::java::io::t_BufferedReader::wrap_Object(::java::io::BufferedReader(a0));
          PyObject *o1 = env->fromJString((jstring) a1, 0);
          PyObject *result = PyObject_CallMethod(obj, "parse_BS", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse_BS", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Cdm::class$ = NULL;
            jmethodID *Cdm::mids$ = NULL;
            bool Cdm::live$ = false;
            ::java::lang::String *Cdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Cdm::ROOT = NULL;

            jclass Cdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Cdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_593c42a483f8f4d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_getDataObject1_dc46e045caf66f40] = env->getMethodID(cls, "getDataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getDataObject2_dc46e045caf66f40] = env->getMethodID(cls, "getDataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getMetadataObject1_9d2158d72b158900] = env->getMethodID(cls, "getMetadataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getMetadataObject2_9d2158d72b158900] = env->getMethodID(cls, "getMetadataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getRelativeMetadata_e3058383361edffc] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getUserDefinedParameters_b8dba07746e1b089] = env->getMethodID(cls, "getUserDefinedParameters", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Cdm::Cdm(const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_593c42a483f8f4d3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject1_dc46e045caf66f40]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject2_dc46e045caf66f40]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject1_9d2158d72b158900]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject2_9d2158d72b158900]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata Cdm::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_e3058383361edffc]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined Cdm::getUserDefinedParameters() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedParameters_b8dba07746e1b089]));
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
            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args);
            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Cdm_getDataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getDataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self);
            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self);
            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data);
            static PyGetSetDef t_Cdm__fields_[] = {
              DECLARE_GET_FIELD(t_Cdm, dataObject1),
              DECLARE_GET_FIELD(t_Cdm, dataObject2),
              DECLARE_GET_FIELD(t_Cdm, metadataObject1),
              DECLARE_GET_FIELD(t_Cdm, metadataObject2),
              DECLARE_GET_FIELD(t_Cdm, relativeMetadata),
              DECLARE_GET_FIELD(t_Cdm, userDefinedParameters),
              DECLARE_GET_FIELD(t_Cdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Cdm__methods_[] = {
              DECLARE_METHOD(t_Cdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, of_, METH_VARARGS),
              DECLARE_METHOD(t_Cdm, getDataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getDataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getUserDefinedParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Cdm)[] = {
              { Py_tp_methods, t_Cdm__methods_ },
              { Py_tp_init, (void *) t_Cdm_init_ },
              { Py_tp_getset, t_Cdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Cdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Cdm, t_Cdm, Cdm);
            PyObject *t_Cdm::wrap_Object(const Cdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Cdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Cdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Cdm), &PY_TYPE_DEF(Cdm), module, "Cdm", 0);
            }

            void t_Cdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "class_", make_descriptor(Cdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "wrapfn_", make_descriptor(t_Cdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Cdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Cdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "ROOT", make_descriptor(j2p(*Cdm::ROOT)));
            }

            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Cdm::initializeClass, 1)))
                return NULL;
              return t_Cdm::wrap_Object(Cdm(((t_Cdm *) arg)->object.this$));
            }
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Cdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Cdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Cdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmHeader);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmSegment);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Cdm_getDataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getDataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProviderModifier::class$ = NULL;
      jmethodID *AttitudeProviderModifier::mids$ = NULL;
      bool AttitudeProviderModifier::live$ = false;

      jclass AttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::AttitudeProvider AttitudeProviderModifier::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c]));
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
      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self);
      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_AttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeProviderModifier, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_AttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProviderModifier)[] = {
        { Py_tp_methods, t_AttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(AttitudeProviderModifier, t_AttitudeProviderModifier, AttitudeProviderModifier);

      void t_AttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProviderModifier), &PY_TYPE_DEF(AttitudeProviderModifier), module, "AttitudeProviderModifier", 0);
      }

      void t_AttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "class_", make_descriptor(AttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "wrapfn_", make_descriptor(t_AttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_AttitudeProviderModifier::wrap_Object(AttitudeProviderModifier(((t_AttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/PythonMeasurementFilter.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonMeasurementFilter::class$ = NULL;
          jmethodID *PythonMeasurementFilter::mids$ = NULL;
          bool PythonMeasurementFilter::live$ = false;

          jclass PythonMeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonMeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_filter_2b2e233a7bb98272] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementFilter::PythonMeasurementFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonMeasurementFilter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonMeasurementFilter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonMeasurementFilter::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args);
          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self);
          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args);
          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data);
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data);
          static PyGetSetDef t_PythonMeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, self),
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementFilter)[] = {
            { Py_tp_methods, t_PythonMeasurementFilter__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementFilter_init_ },
            { Py_tp_getset, t_PythonMeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementFilter, t_PythonMeasurementFilter, PythonMeasurementFilter);
          PyObject *t_PythonMeasurementFilter::wrap_Object(const PythonMeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementFilter), &PY_TYPE_DEF(PythonMeasurementFilter), module, "PythonMeasurementFilter", 1);
          }

          void t_PythonMeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "class_", make_descriptor(PythonMeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "wrapfn_", make_descriptor(t_PythonMeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementFilter::initializeClass);
            JNINativeMethod methods[] = {
              { "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMeasurementFilter_filter0 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementFilter_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementFilter::wrap_Object(PythonMeasurementFilter(((t_PythonMeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementFilter object((jobject) NULL);

            INT_CALL(object = PythonMeasurementFilter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args)
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

          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "filter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data)
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
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data)
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
#include "org/hipparchus/linear/AbstractRealMatrix.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractRealMatrix::class$ = NULL;
      jmethodID *AbstractRealMatrix::mids$ = NULL;
      bool AbstractRealMatrix::live$ = false;

      jclass AbstractRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_5a8a8185eb309db7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_e98d7b3e971b6087] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_b2eebabce70526d8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_eeaa7ca2223e42ad] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_d53a95949cb9e95d] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_afc0d8087db42fe7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_81add9fc9d78d5b9] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_ef7bea65e8e6eaaa] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_2ea477ed14744e74] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_eda3f19b8225f78f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_6d920aab27f0a3d2] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_9981f74b2d109da6] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getRow_81add9fc9d78d5b9] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_ef7bea65e8e6eaaa] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_2ea477ed14744e74] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_94a006d49812ec14] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_a064070b1670e8d8] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_9981f74b2d109da6] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_eee3de00fe971136] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_5a8a8185eb309db7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_e98d7b3e971b6087] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_operate_51f624c89851da7e] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_bf8d75e459632544] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_ef7bea65e8e6eaaa] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_51f624c89851da7e] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_bf8d75e459632544] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_5a8a8185eb309db7] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_d5a7c13c36e5009c] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_d5a7c13c36e5009c] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_9d367e34fba0a5ea] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_f7b5db2ddda2ff4c] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_543485b1a87e5329] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_9d367e34fba0a5ea] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_f7b5db2ddda2ff4c] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_543485b1a87e5329] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_5cc0a3799fec1dc7] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_5a8a8185eb309db7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_b2eebabce70526d8] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_be1420f911d13599] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_be1420f911d13599] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_be1420f911d13599] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_add_5a8a8185eb309db7], a0.this$));
      }

      void AbstractRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_b2eebabce70526d8]));
      }

      void AbstractRealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_eeaa7ca2223e42ad], a0.this$, a1.this$, a2.this$);
      }

      void AbstractRealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_d53a95949cb9e95d], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_afc0d8087db42fe7], a0, a1));
      }

      jboolean AbstractRealMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      JArray< jdouble > AbstractRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_81add9fc9d78d5b9], a0));
      }

      jint AbstractRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_ef7bea65e8e6eaaa], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2ea477ed14744e74], a0));
      }

      JArray< JArray< jdouble > > AbstractRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_eda3f19b8225f78f]));
      }

      jdouble AbstractRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_6d920aab27f0a3d2], a0, a1);
      }

      jdouble AbstractRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_9981f74b2d109da6]);
      }

      JArray< jdouble > AbstractRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_81add9fc9d78d5b9], a0));
      }

      jint AbstractRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_ef7bea65e8e6eaaa], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2ea477ed14744e74], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_94a006d49812ec14], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_a064070b1670e8d8], a0, a1, a2, a3));
      }

      jdouble AbstractRealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_9981f74b2d109da6]);
      }

      jint AbstractRealMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean AbstractRealMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_eee3de00fe971136]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_5a8a8185eb309db7], a0.this$));
      }

      void AbstractRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      JArray< jdouble > AbstractRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_51f624c89851da7e], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_bf8d75e459632544], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_power_ef7bea65e8e6eaaa], a0));
      }

      JArray< jdouble > AbstractRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_51f624c89851da7e], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_bf8d75e459632544], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_5a8a8185eb309db7], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarAdd(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_d5a7c13c36e5009c], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_d5a7c13c36e5009c], a0));
      }

      void AbstractRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_9d367e34fba0a5ea], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_f7b5db2ddda2ff4c], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_543485b1a87e5329], a0, a1.this$);
      }

      void AbstractRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      void AbstractRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_9d367e34fba0a5ea], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_f7b5db2ddda2ff4c], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_543485b1a87e5329], a0, a1.this$);
      }

      void AbstractRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_5cc0a3799fec1dc7], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_5a8a8185eb309db7], a0.this$));
      }

      ::java::lang::String AbstractRealMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::transpose() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_b2eebabce70526d8]));
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_5a884deb680e092c], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5a884deb680e092c], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_5a884deb680e092c], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data);
      static PyGetSetDef t_AbstractRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, data),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, square),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractRealMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractRealMatrix)[] = {
        { Py_tp_methods, t_AbstractRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractRealMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractRealMatrix, t_AbstractRealMatrix, AbstractRealMatrix);

      void t_AbstractRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractRealMatrix), &PY_TYPE_DEF(AbstractRealMatrix), module, "AbstractRealMatrix", 0);
      }

      void t_AbstractRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "class_", make_descriptor(AbstractRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "wrapfn_", make_descriptor(t_AbstractRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractRealMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractRealMatrix::wrap_Object(AbstractRealMatrix(((t_AbstractRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/FDOABuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *FDOABuilder::class$ = NULL;
          jmethodID *FDOABuilder::mids$ = NULL;
          bool FDOABuilder::live$ = false;

          jclass FDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/FDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_50641de72d6bab2b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_45e4383fdd533ef5] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/FDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FDOABuilder::FDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_50641de72d6bab2b, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

          ::org::orekit::estimation::measurements::FDOA FDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::FDOA(env->callObjectMethod(this$, mids$[mid_build_45e4383fdd533ef5], a0.this$, a1.this$));
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
          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args);
          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args);
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data);
          static PyGetSetDef t_FDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_FDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FDOABuilder__methods_[] = {
            DECLARE_METHOD(t_FDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_FDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FDOABuilder)[] = {
            { Py_tp_methods, t_FDOABuilder__methods_ },
            { Py_tp_init, (void *) t_FDOABuilder_init_ },
            { Py_tp_getset, t_FDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(FDOABuilder, t_FDOABuilder, FDOABuilder);
          PyObject *t_FDOABuilder::wrap_Object(const FDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(FDOABuilder), &PY_TYPE_DEF(FDOABuilder), module, "FDOABuilder", 0);
          }

          void t_FDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "class_", make_descriptor(FDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "wrapfn_", make_descriptor(t_FDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FDOABuilder::initializeClass, 1)))
              return NULL;
            return t_FDOABuilder::wrap_Object(FDOABuilder(((t_FDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            FDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = FDOABuilder(a0, a1, a2, a3, a4, a5, a6));
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

          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::FDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_FDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data)
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
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder.h"
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

        ::java::lang::Class *ClassicalRungeKuttaIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegratorBuilder::ClassicalRungeKuttaIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ClassicalRungeKuttaIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ClassicalRungeKuttaIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegratorBuilder, t_ClassicalRungeKuttaIntegratorBuilder, ClassicalRungeKuttaIntegratorBuilder);

        void t_ClassicalRungeKuttaIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaIntegratorBuilder), module, "ClassicalRungeKuttaIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegratorBuilder::wrap_Object(ClassicalRungeKuttaIntegratorBuilder(((t_ClassicalRungeKuttaIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *Opm::class$ = NULL;
              jmethodID *Opm::mids$ = NULL;
              bool Opm::live$ = false;
              ::java::lang::String *Opm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Opm::ROOT = NULL;

              jclass Opm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/Opm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f1d722872d5900a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_generateCartesianOrbit_9d4555873fac1cba] = env->getMethodID(cls, "generateCartesianOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
                  mids$[mid_generateKeplerianOrbit_05c9859fe4d10dff] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_8fbfa58855031235] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_getData_9ce668c51409a4b2] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmData;");
                  mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManeuver_20fdf787b4d48b4b] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_d751c1a57012b438] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_21307208c544fcb6] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;");
                  mids$[mid_getNbManeuvers_d6ab429752e7c267] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_hasManeuvers_eee3de00fe971136] = env->getMethodID(cls, "hasManeuvers", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Opm::Opm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_f1d722872d5900a5, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::orbits::CartesianOrbit Opm::generateCartesianOrbit() const
              {
                return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_generateCartesianOrbit_9d4555873fac1cba]));
              }

              ::org::orekit::orbits::KeplerianOrbit Opm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_05c9859fe4d10dff]));
              }

              ::org::orekit::propagation::SpacecraftState Opm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_8fbfa58855031235]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::OpmData Opm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::OpmData(env->callObjectMethod(this$, mids$[mid_getData_9ce668c51409a4b2]));
              }

              ::org::orekit::time::AbsoluteDate Opm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver Opm::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_20fdf787b4d48b4b], a0));
              }

              ::java::util::List Opm::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata Opm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_21307208c544fcb6]));
              }

              jint Opm::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_d6ab429752e7c267]);
              }

              ::org::orekit::utils::TimeStampedPVCoordinates Opm::getPVCoordinates() const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_674031698a428ce8]));
              }

              jboolean Opm::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_eee3de00fe971136]);
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
            namespace opm {
              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args);
              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self);
              static PyObject *t_Opm_getData(t_Opm *self);
              static PyObject *t_Opm_getDate(t_Opm *self);
              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg);
              static PyObject *t_Opm_getManeuvers(t_Opm *self);
              static PyObject *t_Opm_getMetadata(t_Opm *self);
              static PyObject *t_Opm_getNbManeuvers(t_Opm *self);
              static PyObject *t_Opm_getPVCoordinates(t_Opm *self);
              static PyObject *t_Opm_hasManeuvers(t_Opm *self);
              static PyObject *t_Opm_get__data(t_Opm *self, void *data);
              static PyObject *t_Opm_get__date(t_Opm *self, void *data);
              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data);
              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data);
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data);
              static PyGetSetDef t_Opm__fields_[] = {
                DECLARE_GET_FIELD(t_Opm, data),
                DECLARE_GET_FIELD(t_Opm, date),
                DECLARE_GET_FIELD(t_Opm, maneuvers),
                DECLARE_GET_FIELD(t_Opm, metadata),
                DECLARE_GET_FIELD(t_Opm, nbManeuvers),
                DECLARE_GET_FIELD(t_Opm, pVCoordinates),
                DECLARE_GET_FIELD(t_Opm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Opm__methods_[] = {
                DECLARE_METHOD(t_Opm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Opm, generateCartesianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getManeuver, METH_O),
                DECLARE_METHOD(t_Opm, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getPVCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_Opm, hasManeuvers, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Opm)[] = {
                { Py_tp_methods, t_Opm__methods_ },
                { Py_tp_init, (void *) t_Opm_init_ },
                { Py_tp_getset, t_Opm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Opm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Opm, t_Opm, Opm);
              PyObject *t_Opm::wrap_Object(const Opm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Opm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Opm::install(PyObject *module)
              {
                installType(&PY_TYPE(Opm), &PY_TYPE_DEF(Opm), module, "Opm", 0);
              }

              void t_Opm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "class_", make_descriptor(Opm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "wrapfn_", make_descriptor(t_Opm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Opm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Opm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "ROOT", make_descriptor(j2p(*Opm::ROOT)));
              }

              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Opm::initializeClass, 1)))
                  return NULL;
                return t_Opm::wrap_Object(Opm(((t_Opm *) arg)->object.this$));
              }
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Opm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Opm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Opm(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateCartesianOrbit());
                return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Opm_getData(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(result);
              }

              static PyObject *t_Opm_getDate(t_Opm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_Opm_getManeuvers(t_Opm *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_Opm_getMetadata(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(result);
              }

              static PyObject *t_Opm_getNbManeuvers(t_Opm *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Opm_getPVCoordinates(t_Opm *self)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }

              static PyObject *t_Opm_hasManeuvers(t_Opm *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Opm_get__data(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(value);
              }

              static PyObject *t_Opm_get__date(t_Opm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(value);
              }

              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
                OBJ_CALL(value = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
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
#include "org/hipparchus/analysis/integration/SimpsonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *SimpsonIntegrator::class$ = NULL;
        jmethodID *SimpsonIntegrator::mids$ = NULL;
        bool SimpsonIntegrator::live$ = false;
        jint SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass SimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/SimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_eb6adaa8ce308c89] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_9981f74b2d109da6] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpsonIntegrator::SimpsonIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        SimpsonIntegrator::SimpsonIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

        SimpsonIntegrator::SimpsonIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_eb6adaa8ce308c89, a0, a1, a2, a3)) {}
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
        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_SimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpsonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpsonIntegrator)[] = {
          { Py_tp_methods, t_SimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_SimpsonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(SimpsonIntegrator, t_SimpsonIntegrator, SimpsonIntegrator);

        void t_SimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpsonIntegrator), &PY_TYPE_DEF(SimpsonIntegrator), module, "SimpsonIntegrator", 0);
        }

        void t_SimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "class_", make_descriptor(SimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "wrapfn_", make_descriptor(t_SimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(SimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_SimpsonIntegrator::wrap_Object(SimpsonIntegrator(((t_SimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpsonIntegrator object((jobject) NULL);

              INT_CALL(object = SimpsonIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1, a2, a3));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region::class$ = NULL;
        jmethodID *Region::mids$ = NULL;
        bool Region::live$ = false;

        jclass Region::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildNew_2630aa1a312e22d6] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_checkPoint_f97c307d662f98c4] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_0c83c5cab31e7721] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_3069dff3a674defc] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getBarycenter_e843ca29d3ae6a7a] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_9981f74b2d109da6] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTree_1fb787d65f399ae6] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_f2a90cc714d34154] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_a99a68d4ebd480fd] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_eee3de00fe971136] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_a99a68d4ebd480fd] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_5e847af8c64bed2a] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region Region::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_buildNew_2630aa1a312e22d6], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location Region::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_f97c307d662f98c4], a0.this$));
        }

        jboolean Region::contains(const Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_0c83c5cab31e7721], a0.this$);
        }

        Region Region::copySelf() const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_copySelf_3069dff3a674defc]));
        }

        ::org::hipparchus::geometry::Point Region::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_e843ca29d3ae6a7a]));
        }

        jdouble Region::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_9981f74b2d109da6]);
        }

        jdouble Region::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree Region::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_1fb787d65f399ae6], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Region::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_f2a90cc714d34154], a0.this$));
        }

        jboolean Region::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
        }

        jboolean Region::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_a99a68d4ebd480fd], a0.this$);
        }

        jboolean Region::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_eee3de00fe971136]);
        }

        jboolean Region::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_a99a68d4ebd480fd], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection Region::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_5e847af8c64bed2a], a0.this$));
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
        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_of_(t_Region *self, PyObject *args);
        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg);
        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg);
        static PyObject *t_Region_contains(t_Region *self, PyObject *arg);
        static PyObject *t_Region_copySelf(t_Region *self);
        static PyObject *t_Region_getBarycenter(t_Region *self);
        static PyObject *t_Region_getBoundarySize(t_Region *self);
        static PyObject *t_Region_getSize(t_Region *self);
        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg);
        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg);
        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args);
        static PyObject *t_Region_isFull(t_Region *self, PyObject *args);
        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg);
        static PyObject *t_Region_get__barycenter(t_Region *self, void *data);
        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data);
        static PyObject *t_Region_get__empty(t_Region *self, void *data);
        static PyObject *t_Region_get__full(t_Region *self, void *data);
        static PyObject *t_Region_get__size(t_Region *self, void *data);
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data);
        static PyGetSetDef t_Region__fields_[] = {
          DECLARE_GET_FIELD(t_Region, barycenter),
          DECLARE_GET_FIELD(t_Region, boundarySize),
          DECLARE_GET_FIELD(t_Region, empty),
          DECLARE_GET_FIELD(t_Region, full),
          DECLARE_GET_FIELD(t_Region, size),
          DECLARE_GET_FIELD(t_Region, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region__methods_[] = {
          DECLARE_METHOD(t_Region, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region, buildNew, METH_O),
          DECLARE_METHOD(t_Region, checkPoint, METH_O),
          DECLARE_METHOD(t_Region, contains, METH_O),
          DECLARE_METHOD(t_Region, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getSize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getTree, METH_O),
          DECLARE_METHOD(t_Region, intersection, METH_O),
          DECLARE_METHOD(t_Region, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_Region, isFull, METH_VARARGS),
          DECLARE_METHOD(t_Region, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region)[] = {
          { Py_tp_methods, t_Region__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Region, t_Region, Region);
        PyObject *t_Region::wrap_Object(const Region& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region::install(PyObject *module)
        {
          installType(&PY_TYPE(Region), &PY_TYPE_DEF(Region), module, "Region", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "Location", make_descriptor(&PY_TYPE_DEF(Region$Location)));
        }

        void t_Region::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "class_", make_descriptor(Region::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "wrapfn_", make_descriptor(t_Region::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region::initializeClass, 1)))
            return NULL;
          return t_Region::wrap_Object(Region(((t_Region *) arg)->object.this$));
        }
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region_of_(t_Region *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.checkPoint(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
          return NULL;
        }

        static PyObject *t_Region_contains(t_Region *self, PyObject *arg)
        {
          Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Region::initializeClass, &a0, &p0, t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_Region_copySelf(t_Region *self)
        {
          Region result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBarycenter(t_Region *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBoundarySize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getSize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_Region_isFull(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Region_get__barycenter(t_Region *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Region_get__empty(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__full(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__size(t_Region *self, void *data)
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
#include "org/orekit/bodies/PythonCelestialBody.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBody::class$ = NULL;
      jmethodID *PythonCelestialBody::mids$ = NULL;
      bool PythonCelestialBody::live$ = false;

      jclass PythonCelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyOrientedFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_9981f74b2d109da6] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_toFieldPVCoordinatesProvider_36db2fb93843b2c3] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBody::PythonCelestialBody() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonCelestialBody::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonCelestialBody::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonCelestialBody::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self);
      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data);
      static PyGetSetDef t_PythonCelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBody, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBody__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBody, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBody)[] = {
        { Py_tp_methods, t_PythonCelestialBody__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBody_init_ },
        { Py_tp_getset, t_PythonCelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBody)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBody, t_PythonCelestialBody, PythonCelestialBody);

      void t_PythonCelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBody), &PY_TYPE_DEF(PythonCelestialBody), module, "PythonCelestialBody", 1);
      }

      void t_PythonCelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "class_", make_descriptor(PythonCelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "wrapfn_", make_descriptor(t_PythonCelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBody::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getBodyOrientedFrame0 },
          { "getGM", "()D", (void *) t_PythonCelestialBody_getGM1 },
          { "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getInertiallyOrientedFrame2 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonCelestialBody_getName3 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates4 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates5 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBody_pythonDecRef6 },
          { "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;", (void *) t_PythonCelestialBody_toFieldPVCoordinatesProvider7 },
        };
        env->registerNatives(cls, methods, 8);
      }

      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBody::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBody::wrap_Object(PythonCelestialBody(((t_PythonCelestialBody *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBody object((jobject) NULL);

        INT_CALL(object = PythonCelestialBody());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyOrientedFrame", result);
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

      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getGM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getGM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInertiallyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getInertiallyOrientedFrame", result);
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

      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "toFieldPVCoordinatesProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, &value))
        {
          throwTypeError("toFieldPVCoordinatesProvider", result);
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

      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data)
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
#include "org/orekit/data/PoissonSeriesParser.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "org/orekit/data/PoissonSeries.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeriesParser::class$ = NULL;
      jmethodID *PoissonSeriesParser::mids$ = NULL;
      bool PoissonSeriesParser::live$ = false;

      jclass PoissonSeriesParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeriesParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_parse_276cce9257997802] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Lorg/orekit/data/PoissonSeries;");
          mids$[mid_withDoodson_82b2677399174c90] = env->getMethodID(cls, "withDoodson", "(II)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstDelaunay_a4c7e7a5d2c091a4] = env->getMethodID(cls, "withFirstDelaunay", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstPlanetary_a4c7e7a5d2c091a4] = env->getMethodID(cls, "withFirstPlanetary", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withGamma_a4c7e7a5d2c091a4] = env->getMethodID(cls, "withGamma", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withOptionalColumn_a4c7e7a5d2c091a4] = env->getMethodID(cls, "withOptionalColumn", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withPolynomialPart_1528efaaea485f62] = env->getMethodID(cls, "withPolynomialPart", "(CLorg/orekit/data/PolynomialParser$Unit;)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withSinCos_4953f8b52df33eee] = env->getMethodID(cls, "withSinCos", "(IIDID)Lorg/orekit/data/PoissonSeriesParser;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeriesParser::PoissonSeriesParser(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      ::org::orekit::data::PoissonSeries PoissonSeriesParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::data::PoissonSeries(env->callObjectMethod(this$, mids$[mid_parse_276cce9257997802], a0.this$, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withDoodson(jint a0, jint a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withDoodson_82b2677399174c90], a0, a1));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstDelaunay(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstDelaunay_a4c7e7a5d2c091a4], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstPlanetary(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstPlanetary_a4c7e7a5d2c091a4], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withGamma(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withGamma_a4c7e7a5d2c091a4], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withOptionalColumn(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withOptionalColumn_a4c7e7a5d2c091a4], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withPolynomialPart(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withPolynomialPart_1528efaaea485f62], a0, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withSinCos(jint a0, jint a1, jdouble a2, jint a3, jdouble a4) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withSinCos_4953f8b52df33eee], a0, a1, a2, a3, a4));
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
      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args);

      static PyMethodDef t_PoissonSeriesParser__methods_[] = {
        DECLARE_METHOD(t_PoissonSeriesParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, parse, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withDoodson, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstDelaunay, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstPlanetary, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withGamma, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withOptionalColumn, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withPolynomialPart, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withSinCos, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeriesParser)[] = {
        { Py_tp_methods, t_PoissonSeriesParser__methods_ },
        { Py_tp_init, (void *) t_PoissonSeriesParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeriesParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeriesParser, t_PoissonSeriesParser, PoissonSeriesParser);

      void t_PoissonSeriesParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeriesParser), &PY_TYPE_DEF(PoissonSeriesParser), module, "PoissonSeriesParser", 0);
      }

      void t_PoissonSeriesParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "class_", make_descriptor(PoissonSeriesParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "wrapfn_", make_descriptor(t_PoissonSeriesParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeriesParser::initializeClass, 1)))
          return NULL;
        return t_PoissonSeriesParser::wrap_Object(PoissonSeriesParser(((t_PoissonSeriesParser *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeriesParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        PoissonSeriesParser object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = PoissonSeriesParser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::data::PoissonSeries result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::orekit::data::t_PoissonSeries::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.withDoodson(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withDoodson", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstDelaunay(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstDelaunay", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstPlanetary(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstPlanetary", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withGamma(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withGamma", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withOptionalColumn(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withOptionalColumn", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          OBJ_CALL(result = self->object.withPolynomialPart(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withPolynomialPart", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jint a3;
        jdouble a4;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "IIDID", &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.withSinCos(a0, a1, a2, a3, a4));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withSinCos", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefinedWriter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefinedWriter::class$ = NULL;
            jmethodID *UserDefinedWriter::mids$ = NULL;
            bool UserDefinedWriter::live$ = false;

            jclass UserDefinedWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefinedWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_22bf6791b643d8df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedWriter::UserDefinedWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_22bf6791b643d8df, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_UserDefinedWriter__methods_[] = {
              DECLARE_METHOD(t_UserDefinedWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedWriter)[] = {
              { Py_tp_methods, t_UserDefinedWriter__methods_ },
              { Py_tp_init, (void *) t_UserDefinedWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(UserDefinedWriter, t_UserDefinedWriter, UserDefinedWriter);

            void t_UserDefinedWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedWriter), &PY_TYPE_DEF(UserDefinedWriter), module, "UserDefinedWriter", 0);
            }

            void t_UserDefinedWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "class_", make_descriptor(UserDefinedWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "wrapfn_", make_descriptor(t_UserDefinedWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedWriter::initializeClass, 1)))
                return NULL;
              return t_UserDefinedWriter::wrap_Object(UserDefinedWriter(((t_UserDefinedWriter *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a2((jobject) NULL);
              UserDefinedWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UserDefinedWriter(a0, a1, a2));
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
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *DataUsed::class$ = NULL;
        jmethodID *DataUsed::mids$ = NULL;
        bool DataUsed::live$ = false;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = NULL;
        DataUsed *DataUsed::MIXED = NULL;
        DataUsed *DataUsed::ORBIT = NULL;
        DataUsed *DataUsed::SATELLITE_LASER_RANGING = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CODE_PHASE = NULL;

        jclass DataUsed::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/DataUsed");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_2208b35bd51502c9] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/lang/String;C)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_valueOf_cf2468990dd17c6f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_values_ba86313d643a1087] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/DataUsed;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            MIXED = new DataUsed(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/DataUsed;"));
            ORBIT = new DataUsed(env->getStaticObjectField(cls, "ORBIT", "Lorg/orekit/files/sp3/DataUsed;"));
            SATELLITE_LASER_RANGING = new DataUsed(env->getStaticObjectField(cls, "SATELLITE_LASER_RANGING", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String DataUsed::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_d2c8eb4129821f0e]));
        }

        DataUsed DataUsed::parse(const ::java::lang::String & a0, const ::java::lang::String & a1, jchar a2)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_parse_2208b35bd51502c9], a0.this$, a1.this$, a2));
        }

        DataUsed DataUsed::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cf2468990dd17c6f], a0.this$));
        }

        JArray< DataUsed > DataUsed::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< DataUsed >(env->callStaticObjectMethod(cls, mids$[mid_values_ba86313d643a1087]));
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
        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args);
        static PyObject *t_DataUsed_getKey(t_DataUsed *self);
        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_values(PyTypeObject *type);
        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data);
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data);
        static PyGetSetDef t_DataUsed__fields_[] = {
          DECLARE_GET_FIELD(t_DataUsed, key),
          DECLARE_GET_FIELD(t_DataUsed, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DataUsed__methods_[] = {
          DECLARE_METHOD(t_DataUsed, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, of_, METH_VARARGS),
          DECLARE_METHOD(t_DataUsed, getKey, METH_NOARGS),
          DECLARE_METHOD(t_DataUsed, parse, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DataUsed)[] = {
          { Py_tp_methods, t_DataUsed__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DataUsed__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DataUsed)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(DataUsed, t_DataUsed, DataUsed);
        PyObject *t_DataUsed::wrap_Object(const DataUsed& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DataUsed::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DataUsed::install(PyObject *module)
        {
          installType(&PY_TYPE(DataUsed), &PY_TYPE_DEF(DataUsed), module, "DataUsed", 0);
        }

        void t_DataUsed::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "class_", make_descriptor(DataUsed::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "wrapfn_", make_descriptor(t_DataUsed::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "boxfn_", make_descriptor(boxObject));
          env->getClass(DataUsed::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "MIXED", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "ORBIT", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::ORBIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "SATELLITE_LASER_RANGING", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::SATELLITE_LASER_RANGING)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CODE_PHASE)));
        }

        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DataUsed::initializeClass, 1)))
            return NULL;
          return t_DataUsed::wrap_Object(DataUsed(((t_DataUsed *) arg)->object.this$));
        }
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DataUsed::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DataUsed_getKey(t_DataUsed *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jchar a2;
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "ssC", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::parse(a0, a1, a2));
            return t_DataUsed::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", args);
          return NULL;
        }

        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::valueOf(a0));
            return t_DataUsed::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_DataUsed_values(PyTypeObject *type)
        {
          JArray< DataUsed > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::values());
          return JArray<jobject>(result.this$).wrap(t_DataUsed::wrap_jobject);
        }
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$MeteorologicalConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$MeteorologicalConfiguration::mids$ = NULL;
        bool CRDConfiguration$MeteorologicalConfiguration::live$ = false;

        jclass CRDConfiguration$MeteorologicalConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getHumiSensorManufacturer_d2c8eb4129821f0e] = env->getMethodID(cls, "getHumiSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getHumiSensorModel", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorSerialNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getHumiSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getMeteorologicalId_d2c8eb4129821f0e] = env->getMethodID(cls, "getMeteorologicalId", "()Ljava/lang/String;");
            mids$[mid_getPressSensorManufacturer_d2c8eb4129821f0e] = env->getMethodID(cls, "getPressSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getPressSensorModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getPressSensorModel", "()Ljava/lang/String;");
            mids$[mid_getPressSensorSerialNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getPressSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getTempSensorManufacturer_d2c8eb4129821f0e] = env->getMethodID(cls, "getTempSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getTempSensorModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getTempSensorModel", "()Ljava/lang/String;");
            mids$[mid_getTempSensorSerialNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getTempSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setHumiSensorManufacturer_105e1eadb709d9ac] = env->getMethodID(cls, "setHumiSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorModel_105e1eadb709d9ac] = env->getMethodID(cls, "setHumiSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorSerialNumber_105e1eadb709d9ac] = env->getMethodID(cls, "setHumiSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setMeteorologicalId_105e1eadb709d9ac] = env->getMethodID(cls, "setMeteorologicalId", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorManufacturer_105e1eadb709d9ac] = env->getMethodID(cls, "setPressSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorModel_105e1eadb709d9ac] = env->getMethodID(cls, "setPressSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorSerialNumber_105e1eadb709d9ac] = env->getMethodID(cls, "setPressSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorManufacturer_105e1eadb709d9ac] = env->getMethodID(cls, "setTempSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorModel_105e1eadb709d9ac] = env->getMethodID(cls, "setTempSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorSerialNumber_105e1eadb709d9ac] = env->getMethodID(cls, "setTempSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$MeteorologicalConfiguration::CRDConfiguration$MeteorologicalConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorManufacturer_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorModel_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorSerialNumber_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getMeteorologicalId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeteorologicalId_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorManufacturer_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorModel_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorSerialNumber_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorManufacturer_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorModel_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorSerialNumber_d2c8eb4129821f0e]));
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorManufacturer_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorModel_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorSerialNumber_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setMeteorologicalId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMeteorologicalId_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorManufacturer_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorModel_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorSerialNumber_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorManufacturer_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorModel_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorSerialNumber_105e1eadb709d9ac], a0.this$);
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$MeteorologicalConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, meteorologicalId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$MeteorologicalConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getMeteorologicalId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setMeteorologicalId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$MeteorologicalConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$MeteorologicalConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$MeteorologicalConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$MeteorologicalConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$MeteorologicalConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$MeteorologicalConfiguration, t_CRDConfiguration$MeteorologicalConfiguration, CRDConfiguration$MeteorologicalConfiguration);

        void t_CRDConfiguration$MeteorologicalConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), &PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration), module, "CRDConfiguration$MeteorologicalConfiguration", 0);
        }

        void t_CRDConfiguration$MeteorologicalConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "class_", make_descriptor(CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$MeteorologicalConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(CRDConfiguration$MeteorologicalConfiguration(((t_CRDConfiguration$MeteorologicalConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$MeteorologicalConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$MeteorologicalConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteorologicalId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setMeteorologicalId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMeteorologicalId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalId());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setMeteorologicalId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "meteorologicalId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogisticDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogisticDistribution::class$ = NULL;
        jmethodID *LogisticDistribution::mids$ = NULL;
        bool LogisticDistribution::live$ = false;

        jclass LogisticDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogisticDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_9981f74b2d109da6] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogisticDistribution::LogisticDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble LogisticDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble LogisticDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble LogisticDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_9981f74b2d109da6]);
        }

        jdouble LogisticDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble LogisticDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble LogisticDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble LogisticDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble LogisticDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble LogisticDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean LogisticDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
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
        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data);
        static PyGetSetDef t_LogisticDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogisticDistribution, location),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogisticDistribution, scale),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogisticDistribution__methods_[] = {
          DECLARE_METHOD(t_LogisticDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogisticDistribution)[] = {
          { Py_tp_methods, t_LogisticDistribution__methods_ },
          { Py_tp_init, (void *) t_LogisticDistribution_init_ },
          { Py_tp_getset, t_LogisticDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogisticDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogisticDistribution, t_LogisticDistribution, LogisticDistribution);

        void t_LogisticDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogisticDistribution), &PY_TYPE_DEF(LogisticDistribution), module, "LogisticDistribution", 0);
        }

        void t_LogisticDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "class_", make_descriptor(LogisticDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "wrapfn_", make_descriptor(t_LogisticDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogisticDistribution::initializeClass, 1)))
            return NULL;
          return t_LogisticDistribution::wrap_Object(LogisticDistribution(((t_LogisticDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogisticDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LogisticDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LogisticDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEStateAndDerivative::class$ = NULL;
      jmethodID *ComplexODEStateAndDerivative::mids$ = NULL;
      bool ComplexODEStateAndDerivative::live$ = false;

      jclass ComplexODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7b02893fc4ec5c2d] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_ac743bbff5834a67] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteDerivative_6bea1b718c2aa50b] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryDerivative_6bea1b718c2aa50b] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryDerivative_aeabb9821b423b35] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_7b02893fc4ec5c2d, a0, a1.this$, a2.this$)) {}

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a3, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a4) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_ac743bbff5834a67, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_6bea1b718c2aa50b]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_6bea1b718c2aa50b]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_aeabb9821b423b35], a0));
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
      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ComplexODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ComplexODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ComplexODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ComplexODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ComplexODEState),
        NULL
      };

      DEFINE_TYPE(ComplexODEStateAndDerivative, t_ComplexODEStateAndDerivative, ComplexODEStateAndDerivative);

      void t_ComplexODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEStateAndDerivative), &PY_TYPE_DEF(ComplexODEStateAndDerivative), module, "ComplexODEStateAndDerivative", 0);
      }

      void t_ComplexODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "class_", make_descriptor(ComplexODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "wrapfn_", make_descriptor(t_ComplexODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ComplexODEStateAndDerivative::wrap_Object(ComplexODEStateAndDerivative(((t_ComplexODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a3((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a4((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k[[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Ceil.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ceil::class$ = NULL;
        jmethodID *Ceil::mids$ = NULL;
        bool Ceil::live$ = false;

        jclass Ceil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ceil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ceil::Ceil() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Ceil::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Ceil::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args);

        static PyMethodDef t_Ceil__methods_[] = {
          DECLARE_METHOD(t_Ceil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ceil)[] = {
          { Py_tp_methods, t_Ceil__methods_ },
          { Py_tp_init, (void *) t_Ceil_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ceil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ceil, t_Ceil, Ceil);

        void t_Ceil::install(PyObject *module)
        {
          installType(&PY_TYPE(Ceil), &PY_TYPE_DEF(Ceil), module, "Ceil", 0);
        }

        void t_Ceil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "class_", make_descriptor(Ceil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "wrapfn_", make_descriptor(t_Ceil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ceil::initializeClass, 1)))
            return NULL;
          return t_Ceil::wrap_Object(Ceil(((t_Ceil *) arg)->object.this$));
        }
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ceil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds)
        {
          Ceil object((jobject) NULL);

          INT_CALL(object = Ceil());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args)
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
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegratorFactory::class$ = NULL;
          jmethodID *FieldGaussIntegratorFactory::mids$ = NULL;
          bool FieldGaussIntegratorFactory::live$ = false;

          jclass FieldGaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_hermite_c98fce3c046d6804] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator;");
              mids$[mid_laguerre_1191defc8dfe568c] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_1191defc8dfe568c] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_744dae72408eb0df] = env->getMethodID(cls, "legendre", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegratorFactory::FieldGaussIntegratorFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator FieldGaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_c98fce3c046d6804], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_1191defc8dfe568c], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_1191defc8dfe568c], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_744dae72408eb0df], a0, a1.this$, a2.this$));
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
          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data);
          static PyGetSetDef t_FieldGaussIntegratorFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegratorFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, legendre, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegratorFactory)[] = {
            { Py_tp_methods, t_FieldGaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegratorFactory_init_ },
            { Py_tp_getset, t_FieldGaussIntegratorFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegratorFactory, t_FieldGaussIntegratorFactory, FieldGaussIntegratorFactory);
          PyObject *t_FieldGaussIntegratorFactory::wrap_Object(const FieldGaussIntegratorFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegratorFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegratorFactory), &PY_TYPE_DEF(FieldGaussIntegratorFactory), module, "FieldGaussIntegratorFactory", 0);
          }

          void t_FieldGaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "class_", make_descriptor(FieldGaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "wrapfn_", make_descriptor(t_FieldGaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegratorFactory::wrap_Object(FieldGaussIntegratorFactory(((t_FieldGaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldGaussIntegratorFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldGaussIntegratorFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricFieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 3:
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data)
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
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorPreservingVisitor::class$ = NULL;
      jmethodID *FieldVectorPreservingVisitor::mids$ = NULL;
      bool FieldVectorPreservingVisitor::live$ = false;

      jclass FieldVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_f6328613456309a1] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_48ca1125d4856a74] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_9f3b43c70febfa9a] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_f6328613456309a1]));
      }

      void FieldVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_48ca1125d4856a74], a0, a1, a2);
      }

      void FieldVectorPreservingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_9f3b43c70febfa9a], a0, a1.this$);
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
      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self);
      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorPreservingVisitor, t_FieldVectorPreservingVisitor, FieldVectorPreservingVisitor);
      PyObject *t_FieldVectorPreservingVisitor::wrap_Object(const FieldVectorPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorPreservingVisitor), &PY_TYPE_DEF(FieldVectorPreservingVisitor), module, "FieldVectorPreservingVisitor", 0);
      }

      void t_FieldVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "class_", make_descriptor(FieldVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "wrapfn_", make_descriptor(t_FieldVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorPreservingVisitor::wrap_Object(FieldVectorPreservingVisitor(((t_FieldVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeTroposphericDelayModifier::live$ = false;

          jclass BaseRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorTroposphericModel_29b53a0d2fc3b115] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeErrorTroposphericModel_e648598eaaa5f94d] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_793e0852d1c6d57c] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          jdouble BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeErrorTroposphericModel_29b53a0d2fc3b115], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeErrorTroposphericModel_e648598eaaa5f94d], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, rangeErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeTroposphericDelayModifier, t_BaseRangeTroposphericDelayModifier, BaseRangeTroposphericDelayModifier);

          void t_BaseRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeTroposphericDelayModifier), module, "BaseRangeTroposphericDelayModifier", 0);
          }

          void t_BaseRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "class_", make_descriptor(BaseRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeTroposphericDelayModifier::wrap_Object(BaseRangeTroposphericDelayModifier(((t_BaseRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data)
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
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *PolynomialCurveFitter::class$ = NULL;
      jmethodID *PolynomialCurveFitter::mids$ = NULL;
      bool PolynomialCurveFitter::live$ = false;

      jclass PolynomialCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/PolynomialCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_2ff1e120c5825615] = env->getStaticMethodID(cls, "create", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withMaxIterations_2ff1e120c5825615] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withStartPoint_fab406be17471619] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_getProblem_51e01b60016ab388] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialCurveFitter PolynomialCurveFitter::create(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_2ff1e120c5825615], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withMaxIterations(jint a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_2ff1e120c5825615], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_fab406be17471619], a0.this$));
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
      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg);

      static PyMethodDef t_PolynomialCurveFitter__methods_[] = {
        DECLARE_METHOD(t_PolynomialCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_PolynomialCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialCurveFitter)[] = {
        { Py_tp_methods, t_PolynomialCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(PolynomialCurveFitter, t_PolynomialCurveFitter, PolynomialCurveFitter);

      void t_PolynomialCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialCurveFitter), &PY_TYPE_DEF(PolynomialCurveFitter), module, "PolynomialCurveFitter", 0);
      }

      void t_PolynomialCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "class_", make_descriptor(PolynomialCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "wrapfn_", make_descriptor(t_PolynomialCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialCurveFitter::initializeClass, 1)))
          return NULL;
        return t_PolynomialCurveFitter::wrap_Object(PolynomialCurveFitter(((t_PolynomialCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::PolynomialCurveFitter::create(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A0.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A0::class$ = NULL;
          jmethodID *SubFrame4A0::mids$ = NULL;
          bool SubFrame4A0::live$ = false;

          jclass SubFrame4A0::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A0");

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

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A0__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A0, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A0, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A0)[] = {
            { Py_tp_methods, t_SubFrame4A0__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A0)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A0, t_SubFrame4A0, SubFrame4A0);

          void t_SubFrame4A0::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A0), &PY_TYPE_DEF(SubFrame4A0), module, "SubFrame4A0", 0);
          }

          void t_SubFrame4A0::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "class_", make_descriptor(SubFrame4A0::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "wrapfn_", make_descriptor(t_SubFrame4A0::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A0::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A0::wrap_Object(SubFrame4A0(((t_SubFrame4A0 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A0::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
