#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeIonosphericDelayModifier::mids$ = NULL;
          bool RangeIonosphericDelayModifier::live$ = false;

          jclass RangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3c7040adbf9e5f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeIonosphericDelayModifier::RangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_c3c7040adbf9e5f8, a0.this$, a1)) {}

          void RangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void RangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeIonosphericDelayModifier, t_RangeIonosphericDelayModifier, RangeIonosphericDelayModifier);

          void t_RangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeIonosphericDelayModifier), &PY_TYPE_DEF(RangeIonosphericDelayModifier), module, "RangeIonosphericDelayModifier", 0);
          }

          void t_RangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "class_", make_descriptor(RangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeIonosphericDelayModifier::wrap_Object(RangeIonosphericDelayModifier(((t_RangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            RangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *BooleanDetector::class$ = NULL;
        jmethodID *BooleanDetector::mids$ = NULL;
        bool BooleanDetector::live$ = false;

        jclass BooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/BooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_8625f04dc0369264] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_andCombine_b628a3dc9e91fa01] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetectors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_notCombine_0119b0d604ebe1fb] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/NegateDetector;");
            mids$[mid_orCombine_8625f04dc0369264] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_orCombine_b628a3dc9e91fa01] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_create_9018219b512ae905] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/BooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BooleanDetector BooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_8625f04dc0369264], a0.this$));
        }

        BooleanDetector BooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_b628a3dc9e91fa01], a0.this$));
        }

        jdouble BooleanDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::java::util::List BooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_e62d3bb06d56d7e3]));
        }

        void BooleanDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::NegateDetector BooleanDetector::notCombine(const ::org::orekit::propagation::events::EventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::NegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_0119b0d604ebe1fb], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_8625f04dc0369264], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_b628a3dc9e91fa01], a0.this$));
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
        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self);
        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data);
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data);
        static PyGetSetDef t_BooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_BooleanDetector, detectors),
          DECLARE_GET_FIELD(t_BooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BooleanDetector__methods_[] = {
          DECLARE_METHOD(t_BooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_BooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BooleanDetector)[] = {
          { Py_tp_methods, t_BooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(BooleanDetector, t_BooleanDetector, BooleanDetector);
        PyObject *t_BooleanDetector::wrap_Object(const BooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(BooleanDetector), &PY_TYPE_DEF(BooleanDetector), module, "BooleanDetector", 0);
        }

        void t_BooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "class_", make_descriptor(BooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "wrapfn_", make_descriptor(t_BooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BooleanDetector::initializeClass, 1)))
            return NULL;
          return t_BooleanDetector::wrap_Object(BooleanDetector(((t_BooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::NegateDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_NegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A1::class$ = NULL;
          jmethodID *SubFrame4A1::mids$ = NULL;
          bool SubFrame4A1::live$ = false;

          jclass SubFrame4A1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A1");

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
          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A1__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A1, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A1)[] = {
            { Py_tp_methods, t_SubFrame4A1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A1, t_SubFrame4A1, SubFrame4A1);

          void t_SubFrame4A1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A1), &PY_TYPE_DEF(SubFrame4A1), module, "SubFrame4A1", 0);
          }

          void t_SubFrame4A1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "class_", make_descriptor(SubFrame4A1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "wrapfn_", make_descriptor(t_SubFrame4A1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A1::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A1::wrap_Object(SubFrame4A1(((t_SubFrame4A1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A1::initializeClass, 0))
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
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/Blendable.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Vector::class$ = NULL;
      jmethodID *Vector::mids$ = NULL;
      bool Vector::live$ = false;

      jclass Vector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Vector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_3f686c47147ab48a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_add_56102f789d856c67] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_blendArithmeticallyWith_3b0c7c9516ccca41] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/Vector;D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_distance1_2f915fa9762130df] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceInf_2f915fa9762130df] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceSq_2f915fa9762130df] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_dotProduct_2f915fa9762130df] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getNorm1_b74f83833fdad017] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInf_b74f83833fdad017] = env->getMethodID(cls, "getNormInf", "()D");
          mids$[mid_getNormSq_b74f83833fdad017] = env->getMethodID(cls, "getNormSq", "()D");
          mids$[mid_getZero_5567482e203105d0] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_negate_5567482e203105d0] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_normalize_5567482e203105d0] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_scalarMultiply_69250424ea4f6edf] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_3f686c47147ab48a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_56102f789d856c67] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_toString_a9120cb5e83d0986] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Vector Vector::add(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_3f686c47147ab48a], a0.this$));
      }

      Vector Vector::add(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_56102f789d856c67], a0, a1.this$));
      }

      Vector Vector::blendArithmeticallyWith(const Vector & a0, jdouble a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_3b0c7c9516ccca41], a0.this$, a1));
      }

      jdouble Vector::distance1(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance1_2f915fa9762130df], a0.this$);
      }

      jdouble Vector::distanceInf(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceInf_2f915fa9762130df], a0.this$);
      }

      jdouble Vector::distanceSq(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceSq_2f915fa9762130df], a0.this$);
      }

      jdouble Vector::dotProduct(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_2f915fa9762130df], a0.this$);
      }

      jdouble Vector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
      }

      jdouble Vector::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_b74f83833fdad017]);
      }

      jdouble Vector::getNormInf() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInf_b74f83833fdad017]);
      }

      jdouble Vector::getNormSq() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormSq_b74f83833fdad017]);
      }

      Vector Vector::getZero() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_getZero_5567482e203105d0]));
      }

      jboolean Vector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      Vector Vector::negate() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_negate_5567482e203105d0]));
      }

      Vector Vector::normalize() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_normalize_5567482e203105d0]));
      }

      Vector Vector::scalarMultiply(jdouble a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_scalarMultiply_69250424ea4f6edf], a0));
      }

      Vector Vector::subtract(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_3f686c47147ab48a], a0.this$));
      }

      Vector Vector::subtract(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_56102f789d856c67], a0, a1.this$));
      }

      ::java::lang::String Vector::toString(const ::java::text::NumberFormat & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_a9120cb5e83d0986], a0.this$));
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
      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_add(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_getNorm(t_Vector *self);
      static PyObject *t_Vector_getNorm1(t_Vector *self);
      static PyObject *t_Vector_getNormInf(t_Vector *self);
      static PyObject *t_Vector_getNormSq(t_Vector *self);
      static PyObject *t_Vector_getZero(t_Vector *self);
      static PyObject *t_Vector_isInfinite(t_Vector *self);
      static PyObject *t_Vector_negate(t_Vector *self);
      static PyObject *t_Vector_normalize(t_Vector *self);
      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data);
      static PyObject *t_Vector_get__zero(t_Vector *self, void *data);
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data);
      static PyGetSetDef t_Vector__fields_[] = {
        DECLARE_GET_FIELD(t_Vector, infinite),
        DECLARE_GET_FIELD(t_Vector, norm),
        DECLARE_GET_FIELD(t_Vector, norm1),
        DECLARE_GET_FIELD(t_Vector, normInf),
        DECLARE_GET_FIELD(t_Vector, normSq),
        DECLARE_GET_FIELD(t_Vector, zero),
        DECLARE_GET_FIELD(t_Vector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Vector__methods_[] = {
        DECLARE_METHOD(t_Vector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, of_, METH_VARARGS),
        DECLARE_METHOD(t_Vector, add, METH_VARARGS),
        DECLARE_METHOD(t_Vector, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_Vector, distance1, METH_O),
        DECLARE_METHOD(t_Vector, distanceInf, METH_O),
        DECLARE_METHOD(t_Vector, distanceSq, METH_O),
        DECLARE_METHOD(t_Vector, dotProduct, METH_O),
        DECLARE_METHOD(t_Vector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormInf, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormSq, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Vector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Vector, negate, METH_NOARGS),
        DECLARE_METHOD(t_Vector, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Vector, scalarMultiply, METH_O),
        DECLARE_METHOD(t_Vector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Vector, toString, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Vector)[] = {
        { Py_tp_methods, t_Vector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Vector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Vector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::geometry::Point),
        NULL
      };

      DEFINE_TYPE(Vector, t_Vector, Vector);
      PyObject *t_Vector::wrap_Object(const Vector& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Vector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Vector::install(PyObject *module)
      {
        installType(&PY_TYPE(Vector), &PY_TYPE_DEF(Vector), module, "Vector", 0);
      }

      void t_Vector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "class_", make_descriptor(Vector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "wrapfn_", make_descriptor(t_Vector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Vector::initializeClass, 1)))
          return NULL;
        return t_Vector::wrap_Object(Vector(((t_Vector *) arg)->object.this$));
      }
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Vector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Vector_add(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        Vector result((jobject) NULL);

        if (!parseArgs(args, "KD", Vector::initializeClass, &a0, &p0, t_Vector::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distance1(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance1", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceInf(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceSq(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
        return NULL;
      }

      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Vector_getNorm(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNorm1(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormInf(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInf());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormSq(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormSq());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getZero(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_isInfinite(t_Vector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Vector_negate(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_normalize(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg)
      {
        jdouble a0;
        Vector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg)
      {
        ::java::text::NumberFormat a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::text::NumberFormat::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toString", arg);
        return NULL;
      }
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Vector_get__norm(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInf());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormSq());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__zero(t_Vector *self, void *data)
      {
        Vector value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Vector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator$Parametric::class$ = NULL;
        jmethodID *HarmonicOscillator$Parametric::mids$ = NULL;
        bool HarmonicOscillator$Parametric::live$ = false;

        jclass HarmonicOscillator$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_91fbb4072ae7ce9a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_e45651f63bcd931a] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator$Parametric::HarmonicOscillator$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        JArray< jdouble > HarmonicOscillator$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_91fbb4072ae7ce9a], a0, a1.this$));
        }

        jdouble HarmonicOscillator$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
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
        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args);
        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator$Parametric__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator$Parametric)[] = {
          { Py_tp_methods, t_HarmonicOscillator$Parametric__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator$Parametric, t_HarmonicOscillator$Parametric, HarmonicOscillator$Parametric);

        void t_HarmonicOscillator$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator$Parametric), &PY_TYPE_DEF(HarmonicOscillator$Parametric), module, "HarmonicOscillator$Parametric", 0);
        }

        void t_HarmonicOscillator$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "class_", make_descriptor(HarmonicOscillator$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "wrapfn_", make_descriptor(t_HarmonicOscillator$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator$Parametric::wrap_Object(HarmonicOscillator$Parametric(((t_HarmonicOscillator$Parametric *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds)
        {
          HarmonicOscillator$Parametric object((jobject) NULL);

          INT_CALL(object = HarmonicOscillator$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args)
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

        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args)
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_1f0d8489caf82ae8] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fitting/WeightedObservedPoint;)V");
          mids$[mid_add_369b4c97255d5afa] = env->getMethodID(cls, "add", "(DD)V");
          mids$[mid_add_b5167f35b2521627] = env->getMethodID(cls, "add", "(DDD)V");
          mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_toList_e62d3bb06d56d7e3] = env->getMethodID(cls, "toList", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoints::WeightedObservedPoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void WeightedObservedPoints::add(const ::org::hipparchus::fitting::WeightedObservedPoint & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_1f0d8489caf82ae8], a0.this$);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_add_369b4c97255d5afa], a0, a1);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_add_b5167f35b2521627], a0, a1, a2);
      }

      void WeightedObservedPoints::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
      }

      ::java::util::List WeightedObservedPoints::toList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_toList_e62d3bb06d56d7e3]));
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
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateFunction::mids$ = NULL;
      bool CalculusFieldMultivariateFunction::live$ = false;

      jclass CalculusFieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_ba5ea64a789ad864] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_ba5ea64a789ad864], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateFunction, t_CalculusFieldMultivariateFunction, CalculusFieldMultivariateFunction);
      PyObject *t_CalculusFieldMultivariateFunction::wrap_Object(const CalculusFieldMultivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateFunction), &PY_TYPE_DEF(CalculusFieldMultivariateFunction), module, "CalculusFieldMultivariateFunction", 0);
      }

      void t_CalculusFieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "class_", make_descriptor(CalculusFieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateFunction::wrap_Object(CalculusFieldMultivariateFunction(((t_CalculusFieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemerisSegment::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemerisSegment::mids$ = NULL;
        bool STKEphemerisFile$STKEphemerisSegment::live$ = false;

        jclass STKEphemerisFile$STKEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e30f26dea5e0c0aa] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;)V");
            mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemerisSegment::STKEphemerisFile$STKEphemerisSegment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e30f26dea5e0c0aa, a0, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter STKEphemerisFile$STKEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
        }

        ::java::util::List STKEphemerisFile$STKEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
        }

        ::org::orekit::frames::Frame STKEphemerisFile$STKEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        jint STKEphemerisFile$STKEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        jdouble STKEphemerisFile$STKEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemerisSegment)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemerisSegment_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemerisSegment, t_STKEphemerisFile$STKEphemerisSegment, STKEphemerisFile$STKEphemerisSegment);

        void t_STKEphemerisFile$STKEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemerisSegment), &PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment), module, "STKEphemerisFile$STKEphemerisSegment", 0);
        }

        void t_STKEphemerisFile$STKEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "class_", make_descriptor(STKEphemerisFile$STKEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemerisSegment::wrap_Object(STKEphemerisFile$STKEphemerisSegment(((t_STKEphemerisFile$STKEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          STKEphemerisFile$STKEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "DkIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *AbstractEncounterLOF::class$ = NULL;
        jmethodID *AbstractEncounterLOF::mids$ = NULL;
        bool AbstractEncounterLOF::live$ = false;

        jclass AbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/AbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldOther_dac7b66b757e9da0] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_180fb117720acb76] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_rotationFromInertial_7e9d52385b0ba3f0] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_80cbd49af33092b8] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::FieldPVCoordinates AbstractEncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_dac7b66b757e9da0], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates AbstractEncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_180fb117720acb76]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation AbstractEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_7e9d52385b0ba3f0], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation AbstractEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_80cbd49af33092b8], a0.this$, a1.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self);
        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args);
        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_AbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractEncounterLOF, other),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_AbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_AbstractEncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_AbstractEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractEncounterLOF)[] = {
          { Py_tp_methods, t_AbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractEncounterLOF, t_AbstractEncounterLOF, AbstractEncounterLOF);

        void t_AbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractEncounterLOF), &PY_TYPE_DEF(AbstractEncounterLOF), module, "AbstractEncounterLOF", 0);
        }

        void t_AbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "class_", make_descriptor(AbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "wrapfn_", make_descriptor(t_AbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_AbstractEncounterLOF::wrap_Object(AbstractEncounterLOF(((t_AbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
          mids$[mid_getNbParametersDriversValue_55546ef6a647f39b] = env->getMethodID(cls, "getNbParametersDriversValue", "()I");
          mids$[mid_getParameterDriver_1ab2f25935933fb2] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_27b701db396ade01] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getParameters_5286daa2a5b3d227] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParameters_364812530234ae59] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersAllValues_25e1757a36c4dde2] = env->getMethodID(cls, "getParametersAllValues", "()[D");
          mids$[mid_getParametersAllValues_5286daa2a5b3d227] = env->getMethodID(cls, "getParametersAllValues", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_isSupported_cde6b28e15c96b75] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ParameterDriversProvider::getNbParametersDriversValue() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParametersDriversValue_55546ef6a647f39b]);
      }

      ::org::orekit::utils::ParameterDriver ParameterDriversProvider::getParameterDriver(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getParameterDriver_1ab2f25935933fb2], a0.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_25e1757a36c4dde2]));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_27b701db396ade01], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_5286daa2a5b3d227], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_364812530234ae59], a0.this$, a1.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParametersAllValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_25e1757a36c4dde2]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParametersAllValues(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_5286daa2a5b3d227], a0.this$));
      }

      ::java::util::List ParameterDriversProvider::getParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
      }

      jboolean ParameterDriversProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_cde6b28e15c96b75], a0.this$);
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
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationModifier::class$ = NULL;
        jmethodID *EstimationModifier::mids$ = NULL;
        bool EstimationModifier::live$ = false;

        jclass EstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EstimationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
        }

        void EstimationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args);
        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data);
        static PyGetSetDef t_EstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationModifier__methods_[] = {
          DECLARE_METHOD(t_EstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimationModifier, modify, METH_O),
          DECLARE_METHOD(t_EstimationModifier, modifyWithoutDerivatives, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationModifier)[] = {
          { Py_tp_methods, t_EstimationModifier__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationModifier)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(EstimationModifier, t_EstimationModifier, EstimationModifier);
        PyObject *t_EstimationModifier::wrap_Object(const EstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationModifier), &PY_TYPE_DEF(EstimationModifier), module, "EstimationModifier", 0);
        }

        void t_EstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "class_", make_descriptor(EstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "wrapfn_", make_descriptor(t_EstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationModifier::initializeClass, 1)))
            return NULL;
          return t_EstimationModifier::wrap_Object(EstimationModifier(((t_EstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg)
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

        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg)
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
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataContext.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataContext::class$ = NULL;
      jmethodID *PythonDataContext::mids$ = NULL;
      bool PythonDataContext::live$ = false;

      jclass PythonDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCelestialBodies_379576bb08948576] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_19f184be91611afc] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_78e2356802c487c4] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_045bd2a3a054f1f1] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_d1a571f8b033e2d3] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataContext::PythonDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonDataContext::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonDataContext::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonDataContext::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self);
      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args);
      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data);
      static PyGetSetDef t_PythonDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataContext, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataContext__methods_[] = {
        DECLARE_METHOD(t_PythonDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataContext, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataContext)[] = {
        { Py_tp_methods, t_PythonDataContext__methods_ },
        { Py_tp_init, (void *) t_PythonDataContext_init_ },
        { Py_tp_getset, t_PythonDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataContext, t_PythonDataContext, PythonDataContext);

      void t_PythonDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataContext), &PY_TYPE_DEF(PythonDataContext), module, "PythonDataContext", 1);
      }

      void t_PythonDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "class_", make_descriptor(PythonDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "wrapfn_", make_descriptor(t_PythonDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataContext::initializeClass);
        JNINativeMethod methods[] = {
          { "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;", (void *) t_PythonDataContext_getCelestialBodies0 },
          { "getFrames", "()Lorg/orekit/frames/Frames;", (void *) t_PythonDataContext_getFrames1 },
          { "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;", (void *) t_PythonDataContext_getGeoMagneticFields2 },
          { "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;", (void *) t_PythonDataContext_getGravityFields3 },
          { "getTimeScales", "()Lorg/orekit/time/TimeScales;", (void *) t_PythonDataContext_getTimeScales4 },
          { "pythonDecRef", "()V", (void *) t_PythonDataContext_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataContext::initializeClass, 1)))
          return NULL;
        return t_PythonDataContext::wrap_Object(PythonDataContext(((t_PythonDataContext *) arg)->object.this$));
      }
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds)
      {
        PythonDataContext object((jobject) NULL);

        INT_CALL(object = PythonDataContext());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCelestialBodies", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &value))
        {
          throwTypeError("getCelestialBodies", result);
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

      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frames value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frames::initializeClass, &value))
        {
          throwTypeError("getFrames", result);
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

      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeoMagneticFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &value))
        {
          throwTypeError("getGeoMagneticFields", result);
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

      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGravityFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &value))
        {
          throwTypeError("getGravityFields", result);
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

      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeScales value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTimeScales", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeScales::initializeClass, &value))
        {
          throwTypeError("getTimeScales", result);
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

      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data)
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
#include "org/orekit/rugged/raster/SimpleTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTileFactory::class$ = NULL;
        jmethodID *SimpleTileFactory::mids$ = NULL;
        bool SimpleTileFactory::live$ = false;

        jclass SimpleTileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createTile_669e0c011750e305] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/SimpleTile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleTileFactory::SimpleTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::rugged::raster::SimpleTile SimpleTileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::SimpleTile(env->callObjectMethod(this$, mids$[mid_createTile_669e0c011750e305]));
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
        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self);

        static PyMethodDef t_SimpleTileFactory__methods_[] = {
          DECLARE_METHOD(t_SimpleTileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTileFactory)[] = {
          { Py_tp_methods, t_SimpleTileFactory__methods_ },
          { Py_tp_init, (void *) t_SimpleTileFactory_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTileFactory, t_SimpleTileFactory, SimpleTileFactory);

        void t_SimpleTileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTileFactory), &PY_TYPE_DEF(SimpleTileFactory), module, "SimpleTileFactory", 0);
        }

        void t_SimpleTileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "class_", make_descriptor(SimpleTileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "wrapfn_", make_descriptor(t_SimpleTileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTileFactory::initializeClass, 1)))
            return NULL;
          return t_SimpleTileFactory::wrap_Object(SimpleTileFactory(((t_SimpleTileFactory *) arg)->object.this$));
        }
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds)
        {
          SimpleTileFactory object((jobject) NULL);

          INT_CALL(object = SimpleTileFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self)
        {
          ::org::orekit::rugged::raster::SimpleTile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return ::org::orekit::rugged::raster::t_SimpleTile::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractSelfFeedingLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *PythonAbstractSelfFeedingLoader::mids$ = NULL;
      bool PythonAbstractSelfFeedingLoader::live$ = false;

      jclass PythonAbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractSelfFeedingLoader::PythonAbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PythonAbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_PythonAbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(PythonAbstractSelfFeedingLoader, t_PythonAbstractSelfFeedingLoader, PythonAbstractSelfFeedingLoader);

      void t_PythonAbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractSelfFeedingLoader), &PY_TYPE_DEF(PythonAbstractSelfFeedingLoader), module, "PythonAbstractSelfFeedingLoader", 0);
      }

      void t_PythonAbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "class_", make_descriptor(PythonAbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_PythonAbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractSelfFeedingLoader::wrap_Object(PythonAbstractSelfFeedingLoader(((t_PythonAbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        PythonAbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonAbstractSelfFeedingLoader(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationOrder::class$ = NULL;
          jmethodID *RotationOrder::mids$ = NULL;
          bool RotationOrder::live$ = false;
          RotationOrder *RotationOrder::XYX = NULL;
          RotationOrder *RotationOrder::XYZ = NULL;
          RotationOrder *RotationOrder::XZX = NULL;
          RotationOrder *RotationOrder::XZY = NULL;
          RotationOrder *RotationOrder::YXY = NULL;
          RotationOrder *RotationOrder::YXZ = NULL;
          RotationOrder *RotationOrder::YZX = NULL;
          RotationOrder *RotationOrder::YZY = NULL;
          RotationOrder *RotationOrder::ZXY = NULL;
          RotationOrder *RotationOrder::ZXZ = NULL;
          RotationOrder *RotationOrder::ZYX = NULL;
          RotationOrder *RotationOrder::ZYZ = NULL;

          jclass RotationOrder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationOrder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA1_8b724f8b4fdad1a2] = env->getMethodID(cls, "getA1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA2_8b724f8b4fdad1a2] = env->getMethodID(cls, "getA2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA3_8b724f8b4fdad1a2] = env->getMethodID(cls, "getA3", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getRotationOrder_c58ffe7d0f427750] = env->getStaticMethodID(cls, "getRotationOrder", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_c58ffe7d0f427750] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_values_e32bcf1fa8ee5bf1] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              XYX = new RotationOrder(env->getStaticObjectField(cls, "XYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XYZ = new RotationOrder(env->getStaticObjectField(cls, "XYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZX = new RotationOrder(env->getStaticObjectField(cls, "XZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZY = new RotationOrder(env->getStaticObjectField(cls, "XZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXY = new RotationOrder(env->getStaticObjectField(cls, "YXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXZ = new RotationOrder(env->getStaticObjectField(cls, "YXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZX = new RotationOrder(env->getStaticObjectField(cls, "YZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZY = new RotationOrder(env->getStaticObjectField(cls, "YZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXY = new RotationOrder(env->getStaticObjectField(cls, "ZXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXZ = new RotationOrder(env->getStaticObjectField(cls, "ZXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYX = new RotationOrder(env->getStaticObjectField(cls, "ZYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYZ = new RotationOrder(env->getStaticObjectField(cls, "ZYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA1() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA1_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA2() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA2_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA3() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA3_8b724f8b4fdad1a2]));
          }

          RotationOrder RotationOrder::getRotationOrder(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_getRotationOrder_c58ffe7d0f427750], a0.this$));
          }

          ::java::lang::String RotationOrder::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          RotationOrder RotationOrder::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c58ffe7d0f427750], a0.this$));
          }

          JArray< RotationOrder > RotationOrder::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationOrder >(env->callStaticObjectMethod(cls, mids$[mid_values_e32bcf1fa8ee5bf1]));
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
          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationOrder_values(PyTypeObject *type);
          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data);
          static PyGetSetDef t_RotationOrder__fields_[] = {
            DECLARE_GET_FIELD(t_RotationOrder, a1),
            DECLARE_GET_FIELD(t_RotationOrder, a2),
            DECLARE_GET_FIELD(t_RotationOrder, a3),
            DECLARE_GET_FIELD(t_RotationOrder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationOrder__methods_[] = {
            DECLARE_METHOD(t_RotationOrder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, getA1, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA2, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA3, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getRotationOrder, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, toString, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationOrder)[] = {
            { Py_tp_methods, t_RotationOrder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationOrder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationOrder)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationOrder, t_RotationOrder, RotationOrder);
          PyObject *t_RotationOrder::wrap_Object(const RotationOrder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationOrder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationOrder::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationOrder), &PY_TYPE_DEF(RotationOrder), module, "RotationOrder", 0);
          }

          void t_RotationOrder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "class_", make_descriptor(RotationOrder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "wrapfn_", make_descriptor(t_RotationOrder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationOrder::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYZ)));
          }

          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationOrder::initializeClass, 1)))
              return NULL;
            return t_RotationOrder::wrap_Object(RotationOrder(((t_RotationOrder *) arg)->object.this$));
          }
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationOrder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::getRotationOrder(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getRotationOrder", arg);
            return NULL;
          }

          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RotationOrder), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::valueOf(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationOrder_values(PyTypeObject *type)
          {
            JArray< RotationOrder > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::values());
            return JArray<jobject>(result.this$).wrap(t_RotationOrder::wrap_jobject);
          }
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCombination::class$ = NULL;
          jmethodID *PhaseMinusCodeCombination::mids$ = NULL;
          bool PhaseMinusCodeCombination::live$ = false;

          jclass PhaseMinusCodeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_99e3200dafc19573] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PhaseMinusCodeCombination__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCombination)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCombination, t_PhaseMinusCodeCombination, PhaseMinusCodeCombination);

          void t_PhaseMinusCodeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCombination), &PY_TYPE_DEF(PhaseMinusCodeCombination), module, "PhaseMinusCodeCombination", 0);
          }

          void t_PhaseMinusCodeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "class_", make_descriptor(PhaseMinusCodeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "wrapfn_", make_descriptor(t_PhaseMinusCodeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCombination::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCombination::wrap_Object(PhaseMinusCodeCombination(((t_PhaseMinusCodeCombination *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCombination::initializeClass, 0))
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
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader$LineParameters::class$ = NULL;
            jmethodID *DtcDataLoader$LineParameters::mids$ = NULL;
            bool DtcDataLoader$LineParameters::live$ = false;

            jclass DtcDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3dd4638451e09a7f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getDSTDTC_b74f83833fdad017] = env->getMethodID(cls, "getDSTDTC", "()D");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader$LineParameters::DtcDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3dd4638451e09a7f, a0.this$, a1)) {}

            jdouble DtcDataLoader$LineParameters::getDSTDTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_b74f83833fdad017]);
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
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
            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data);
            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_DtcDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, dSTDTC),
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, date),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDSTDTC, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_DtcDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_DtcDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader$LineParameters, t_DtcDataLoader$LineParameters, DtcDataLoader$LineParameters);

            void t_DtcDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader$LineParameters), &PY_TYPE_DEF(DtcDataLoader$LineParameters), module, "DtcDataLoader$LineParameters", 0);
            }

            void t_DtcDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "class_", make_descriptor(DtcDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "wrapfn_", make_descriptor(t_DtcDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader$LineParameters::wrap_Object(DtcDataLoader$LineParameters(((t_DtcDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              DtcDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DtcDataLoader$LineParameters(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
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
#include "org/hipparchus/analysis/solvers/RiddersSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RiddersSolver::class$ = NULL;
        jmethodID *RiddersSolver::mids$ = NULL;
        bool RiddersSolver::live$ = false;

        jclass RiddersSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RiddersSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RiddersSolver::RiddersSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        RiddersSolver::RiddersSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        RiddersSolver::RiddersSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}
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
        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args);
        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data);
        static PyGetSetDef t_RiddersSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RiddersSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RiddersSolver__methods_[] = {
          DECLARE_METHOD(t_RiddersSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RiddersSolver)[] = {
          { Py_tp_methods, t_RiddersSolver__methods_ },
          { Py_tp_init, (void *) t_RiddersSolver_init_ },
          { Py_tp_getset, t_RiddersSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RiddersSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(RiddersSolver, t_RiddersSolver, RiddersSolver);
        PyObject *t_RiddersSolver::wrap_Object(const RiddersSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RiddersSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RiddersSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RiddersSolver), &PY_TYPE_DEF(RiddersSolver), module, "RiddersSolver", 0);
        }

        void t_RiddersSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "class_", make_descriptor(RiddersSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "wrapfn_", make_descriptor(t_RiddersSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RiddersSolver::initializeClass, 1)))
            return NULL;
          return t_RiddersSolver::wrap_Object(RiddersSolver(((t_RiddersSolver *) arg)->object.this$));
        }
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RiddersSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RiddersSolver object((jobject) NULL);

              INT_CALL(object = RiddersSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RiddersSolver(a0));
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
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RiddersSolver(a0, a1));
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
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MaxSelector::class$ = NULL;
        jmethodID *MaxSelector::mids$ = NULL;
        bool MaxSelector::live$ = false;

        jclass MaxSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MaxSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_b6c6419d1173ee4c] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MaxSelector;");
            mids$[mid_selectFirst_cd8da52a7e84190c] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MaxSelector MaxSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MaxSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_b6c6419d1173ee4c]));
        }

        jboolean MaxSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_cd8da52a7e84190c], a0, a1);
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
        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args);
        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data);
        static PyGetSetDef t_MaxSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MaxSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MaxSelector__methods_[] = {
          DECLARE_METHOD(t_MaxSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MaxSelector)[] = {
          { Py_tp_methods, t_MaxSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MaxSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MaxSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MaxSelector, t_MaxSelector, MaxSelector);

        void t_MaxSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MaxSelector), &PY_TYPE_DEF(MaxSelector), module, "MaxSelector", 0);
        }

        void t_MaxSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "class_", make_descriptor(MaxSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "wrapfn_", make_descriptor(t_MaxSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MaxSelector::initializeClass, 1)))
            return NULL;
          return t_MaxSelector::wrap_Object(MaxSelector(((t_MaxSelector *) arg)->object.this$));
        }
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MaxSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type)
        {
          MaxSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MaxSelector::getInstance());
          return t_MaxSelector::wrap_Object(result);
        }

        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MaxSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data)
        {
          MaxSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MaxSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEPropagator::class$ = NULL;
          jmethodID *TLEPropagator::mids$ = NULL;
          bool TLEPropagator::live$ = false;

          jclass TLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDefaultTleGenerationAlgorithm_1f0630c6113a1d80] = env->getStaticMethodID(cls, "getDefaultTleGenerationAlgorithm", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_b74f83833fdad017] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_686d17b8cfdd0634] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_getTLE_1c01e307dcced049] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_selectExtrapolator_8e5c34b68876efbd] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_b42917e401257604] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_dda8bfa153af0848] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_ce23a66dff2504a4] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_sxpInitialize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_8ba9fe7a847cecad] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm TLEPropagator::getDefaultTleGenerationAlgorithm(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm(env->callStaticObjectMethod(cls, mids$[mid_getDefaultTleGenerationAlgorithm_1f0630c6113a1d80], a0.this$, a1.this$));
          }

          ::org::orekit::frames::Frame TLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          jdouble TLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_b74f83833fdad017]);
          }

          ::org::orekit::utils::PVCoordinates TLEPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_686d17b8cfdd0634], a0.this$));
          }

          ::org::orekit::propagation::analytical::tle::TLE TLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTLE_1c01e307dcced049]));
          }

          void TLEPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_8e5c34b68876efbd], a0.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_b42917e401257604], a0.this$, a1.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_dda8bfa153af0848], a0.this$, a1.this$, a2));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_ce23a66dff2504a4], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self);
          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data);
          static PyGetSetDef t_TLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_TLEPropagator, frame),
            DECLARE_GET_FIELD(t_TLEPropagator, mU),
            DECLARE_GET_FIELD(t_TLEPropagator, tLE),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLEPropagator__methods_[] = {
            DECLARE_METHOD(t_TLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getDefaultTleGenerationAlgorithm, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_TLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEPropagator)[] = {
            { Py_tp_methods, t_TLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(TLEPropagator, t_TLEPropagator, TLEPropagator);

          void t_TLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEPropagator), &PY_TYPE_DEF(TLEPropagator), module, "TLEPropagator", 0);
          }

          void t_TLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "class_", make_descriptor(TLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "wrapfn_", make_descriptor(t_TLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEPropagator::initializeClass, 1)))
              return NULL;
            return t_TLEPropagator::wrap_Object(TLEPropagator(((t_TLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getDefaultTleGenerationAlgorithm(a0, a1));
              return ::org::orekit::propagation::analytical::tle::generation::t_TleGenerationAlgorithm::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDefaultTleGenerationAlgorithm", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }

          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldMaxGapInterpolationGrid::class$ = NULL;
            jmethodID *FieldMaxGapInterpolationGrid::mids$ = NULL;
            bool FieldMaxGapInterpolationGrid::live$ = false;

            jclass FieldMaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2a6f45ac0878ab87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGridPoints_396bc2ac62d7d47a] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldMaxGapInterpolationGrid::FieldMaxGapInterpolationGrid(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a6f45ac0878ab87, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldMaxGapInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_396bc2ac62d7d47a], a0.this$, a1.this$));
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
            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldMaxGapInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldMaxGapInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldMaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldMaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldMaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldMaxGapInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldMaxGapInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldMaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldMaxGapInterpolationGrid, t_FieldMaxGapInterpolationGrid, FieldMaxGapInterpolationGrid);
            PyObject *t_FieldMaxGapInterpolationGrid::wrap_Object(const FieldMaxGapInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldMaxGapInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldMaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldMaxGapInterpolationGrid), &PY_TYPE_DEF(FieldMaxGapInterpolationGrid), module, "FieldMaxGapInterpolationGrid", 0);
            }

            void t_FieldMaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "class_", make_descriptor(FieldMaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_FieldMaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldMaxGapInterpolationGrid::wrap_Object(FieldMaxGapInterpolationGrid(((t_FieldMaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldMaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldMaxGapInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data)
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
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$Builder::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$Builder::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$Builder::live$ = false;

      jclass AggregatedPVCoordinatesProvider$Builder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$Builder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d5a0feed7c9d2c33] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
          mids$[mid_addPVProviderAfter_5ee9810a7b70e76b] = env->getMethodID(cls, "addPVProviderAfter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_addPVProviderBefore_5ee9810a7b70e76b] = env->getMethodID(cls, "addPVProviderBefore", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_build_19d57e29865e7504] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/AggregatedPVCoordinatesProvider;");
          mids$[mid_invalidAfter_b136003bbc44e0bf] = env->getMethodID(cls, "invalidAfter", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_invalidBefore_b136003bbc44e0bf] = env->getMethodID(cls, "invalidBefore", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5a0feed7c9d2c33, a0.this$)) {}

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderAfter(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderAfter_5ee9810a7b70e76b], a0.this$, a1.this$, a2));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderBefore(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderBefore_5ee9810a7b70e76b], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::AggregatedPVCoordinatesProvider AggregatedPVCoordinatesProvider$Builder::build() const
      {
        return ::org::orekit::utils::AggregatedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_19d57e29865e7504]));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidAfter(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidAfter_b136003bbc44e0bf], a0.this$));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidBefore(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidBefore_b136003bbc44e0bf], a0.this$));
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
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$Builder__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderAfter, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderBefore, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, build, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidAfter, METH_O),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidBefore, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$Builder)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$Builder__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$Builder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$Builder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$Builder, t_AggregatedPVCoordinatesProvider$Builder, AggregatedPVCoordinatesProvider$Builder);

      void t_AggregatedPVCoordinatesProvider$Builder::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$Builder), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder), module, "AggregatedPVCoordinatesProvider$Builder", 0);
      }

      void t_AggregatedPVCoordinatesProvider$Builder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "class_", make_descriptor(AggregatedPVCoordinatesProvider$Builder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$Builder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(AggregatedPVCoordinatesProvider$Builder(((t_AggregatedPVCoordinatesProvider$Builder *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            INT_CALL(object = AggregatedPVCoordinatesProvider$Builder());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider$Builder(a0));
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

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderAfter(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderAfter", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderBefore(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderBefore", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self)
      {
        ::org::orekit::utils::AggregatedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_AggregatedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidAfter(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidAfter", arg);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidBefore(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidBefore", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CelestialBodyFrame::class$ = NULL;
          jmethodID *CelestialBodyFrame::mids$ = NULL;
          bool CelestialBodyFrame::live$ = false;
          CelestialBodyFrame *CelestialBodyFrame::EME2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GCRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GRC = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GTOD = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ICRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1988 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1989 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1990 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1991 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1992 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1993 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1994 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1996 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1997 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2005 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2008 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2014 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2020 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::J2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::MCI = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TDR = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TEME = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TOD = NULL;

          jclass CelestialBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CelestialBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_585ac99dc61d3871] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;)Lorg/orekit/frames/Frame;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_guessFrame_e2e1dd08ff42c311] = env->getStaticMethodID(cls, "guessFrame", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_d54827376d276157] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_parse_04f54e6de2e14bec] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_valueOf_04f54e6de2e14bec] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_values_a9d376871d4e60d5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EME2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GCRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GRC = new CelestialBodyFrame(env->getStaticObjectField(cls, "GRC", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GTOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ICRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1988 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1988", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1989 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1989", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1990 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1990", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1991 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1991", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1992 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1992", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1993 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1993", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1994 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1994", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1996 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1996", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1997 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1997", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2005 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2005", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2008 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2008", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2014 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2014", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2020 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2020", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              J2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              MCI = new CelestialBodyFrame(env->getStaticObjectField(cls, "MCI", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TDR = new CelestialBodyFrame(env->getStaticObjectField(cls, "TDR", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TEME = new CelestialBodyFrame(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame CelestialBodyFrame::getFrame(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::data::DataContext & a2) const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_585ac99dc61d3871], a0.this$, a1, a2.this$));
          }

          ::java::lang::String CelestialBodyFrame::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String CelestialBodyFrame::guessFrame(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessFrame_e2e1dd08ff42c311], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_map_d54827376d276157], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_04f54e6de2e14bec], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_04f54e6de2e14bec], a0.this$));
          }

          JArray< CelestialBodyFrame > CelestialBodyFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CelestialBodyFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_a9d376871d4e60d5]));
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
          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self);
          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type);
          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data);
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data);
          static PyGetSetDef t_CelestialBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_CelestialBodyFrame, name),
            DECLARE_GET_FIELD(t_CelestialBodyFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CelestialBodyFrame__methods_[] = {
            DECLARE_METHOD(t_CelestialBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getName, METH_NOARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, guessFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFrame)[] = {
            { Py_tp_methods, t_CelestialBodyFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CelestialBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CelestialBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CelestialBodyFrame, t_CelestialBodyFrame, CelestialBodyFrame);
          PyObject *t_CelestialBodyFrame::wrap_Object(const CelestialBodyFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CelestialBodyFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CelestialBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(CelestialBodyFrame), &PY_TYPE_DEF(CelestialBodyFrame), module, "CelestialBodyFrame", 0);
          }

          void t_CelestialBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "class_", make_descriptor(CelestialBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "wrapfn_", make_descriptor(t_CelestialBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(CelestialBodyFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "EME2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::EME2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GCRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GCRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GRC", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GRC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GTOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GTOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ICRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ICRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1988", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1988)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1989", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1989)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1990", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1990)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1991", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1991)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1992", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1993", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1993)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1994", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1994)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1996", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1997", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2005", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2008", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2014", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2020", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "J2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::J2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "MCI", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::MCI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TDR", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TDR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TEME", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TEME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TOD)));
          }

          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CelestialBodyFrame::initializeClass, 1)))
              return NULL;
            return t_CelestialBodyFrame::wrap_Object(CelestialBodyFrame(((t_CelestialBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CelestialBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::data::DataContext a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getFrame(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFrame", args);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::guessFrame(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessFrame", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::map(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::parse(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::valueOf(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type)
          {
            JArray< CelestialBodyFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::values());
            return JArray<jobject>(result.this$).wrap(t_CelestialBodyFrame::wrap_jobject);
          }
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet$BRep::class$ = NULL;
          jmethodID *PolyhedronsSet$BRep::mids$ = NULL;
          bool PolyhedronsSet$BRep::live$ = false;

          jclass PolyhedronsSet$BRep::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_29c3e061cbeaa98b] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getFacets_e62d3bb06d56d7e3] = env->getMethodID(cls, "getFacets", "()Ljava/util/List;");
              mids$[mid_getVertices_e62d3bb06d56d7e3] = env->getMethodID(cls, "getVertices", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet$BRep::PolyhedronsSet$BRep(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_29c3e061cbeaa98b, a0.this$, a1.this$)) {}

          ::java::util::List PolyhedronsSet$BRep::getFacets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFacets_e62d3bb06d56d7e3]));
          }

          ::java::util::List PolyhedronsSet$BRep::getVertices() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getVertices_e62d3bb06d56d7e3]));
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
          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args);
          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data);
          static PyGetSetDef t_PolyhedronsSet$BRep__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, facets),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, vertices),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet$BRep__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet$BRep, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getFacets, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet$BRep)[] = {
            { Py_tp_methods, t_PolyhedronsSet$BRep__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet$BRep_init_ },
            { Py_tp_getset, t_PolyhedronsSet$BRep__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet$BRep)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet$BRep, t_PolyhedronsSet$BRep, PolyhedronsSet$BRep);
          PyObject *t_PolyhedronsSet$BRep::wrap_Object(const PolyhedronsSet$BRep& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet$BRep::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet$BRep::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet$BRep), &PY_TYPE_DEF(PolyhedronsSet$BRep), module, "PolyhedronsSet$BRep", 0);
          }

          void t_PolyhedronsSet$BRep::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "class_", make_descriptor(PolyhedronsSet$BRep::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "wrapfn_", make_descriptor(t_PolyhedronsSet$BRep::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet$BRep::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet$BRep::wrap_Object(PolyhedronsSet$BRep(((t_PolyhedronsSet$BRep *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet$BRep::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            PolyhedronsSet$BRep object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PolyhedronsSet$BRep(a0, a1));
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

          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
          }
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder.h"
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

        ::java::lang::Class *AdamsMoultonIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonIntegratorBuilder::live$ = false;

        jclass AdamsMoultonIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegratorBuilder::AdamsMoultonIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsMoultonIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsMoultonIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegratorBuilder, t_AdamsMoultonIntegratorBuilder, AdamsMoultonIntegratorBuilder);

        void t_AdamsMoultonIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonIntegratorBuilder), module, "AdamsMoultonIntegratorBuilder", 0);
        }

        void t_AdamsMoultonIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "class_", make_descriptor(AdamsMoultonIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegratorBuilder::wrap_Object(AdamsMoultonIntegratorBuilder(((t_AdamsMoultonIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/frames/TransformGenerator.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformGenerator::class$ = NULL;
      jmethodID *TransformGenerator::mids$ = NULL;
      bool TransformGenerator::live$ = false;

      jclass TransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e7e56f3940bcbfd1] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_50850a0bb1306a34] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TransformGenerator::TransformGenerator(jint a0, const ::org::orekit::frames::TransformProvider & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e7e56f3940bcbfd1, a0, a1.this$, a2)) {}

      ::java::util::List TransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_50850a0bb1306a34], a0.this$, a1.this$));
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
      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args);

      static PyMethodDef t_TransformGenerator__methods_[] = {
        DECLARE_METHOD(t_TransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformGenerator)[] = {
        { Py_tp_methods, t_TransformGenerator__methods_ },
        { Py_tp_init, (void *) t_TransformGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformGenerator, t_TransformGenerator, TransformGenerator);

      void t_TransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformGenerator), &PY_TYPE_DEF(TransformGenerator), module, "TransformGenerator", 0);
      }

      void t_TransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "class_", make_descriptor(TransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "wrapfn_", make_descriptor(t_TransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformGenerator::initializeClass, 1)))
          return NULL;
        return t_TransformGenerator::wrap_Object(TransformGenerator(((t_TransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jdouble a2;
        TransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "IkD", ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TransformGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(Transform));
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationClassicalConvention.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationClassicalConvention::class$ = NULL;
        jmethodID *IsotropicRadiationClassicalConvention::mids$ = NULL;
        bool IsotropicRadiationClassicalConvention::live$ = false;

        jclass IsotropicRadiationClassicalConvention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationClassicalConvention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_a230d7bdb943f733] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationClassicalConvention::IsotropicRadiationClassicalConvention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationClassicalConvention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a230d7bdb943f733], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self);
        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationClassicalConvention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationClassicalConvention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationClassicalConvention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationClassicalConvention)[] = {
          { Py_tp_methods, t_IsotropicRadiationClassicalConvention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationClassicalConvention_init_ },
          { Py_tp_getset, t_IsotropicRadiationClassicalConvention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationClassicalConvention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationClassicalConvention, t_IsotropicRadiationClassicalConvention, IsotropicRadiationClassicalConvention);

        void t_IsotropicRadiationClassicalConvention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationClassicalConvention), &PY_TYPE_DEF(IsotropicRadiationClassicalConvention), module, "IsotropicRadiationClassicalConvention", 0);
        }

        void t_IsotropicRadiationClassicalConvention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "class_", make_descriptor(IsotropicRadiationClassicalConvention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "wrapfn_", make_descriptor(t_IsotropicRadiationClassicalConvention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationClassicalConvention::wrap_Object(IsotropicRadiationClassicalConvention(((t_IsotropicRadiationClassicalConvention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationClassicalConvention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationClassicalConvention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianOrbit::class$ = NULL;
      jmethodID *KeplerianOrbit::mids$ = NULL;
      bool KeplerianOrbit::live$ = false;

      jclass KeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_69b47a274eed440d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_18124f64d7fce8bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_bc81b5d0c2baa99c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_5fc5d1b0e40c2d5b] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_3058e51cfd00310e] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_2a5649bc1625306e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAnomaly_68608c097e66b295] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAnomalyDot_68608c097e66b295] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getCachedPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_b74f83833fdad017] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEccentricAnomaly_b74f83833fdad017] = env->getMethodID(cls, "getEccentricAnomaly", "()D");
          mids$[mid_getEccentricAnomalyDot_b74f83833fdad017] = env->getMethodID(cls, "getEccentricAnomalyDot", "()D");
          mids$[mid_getEquinoctialEx_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_b74f83833fdad017] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_b74f83833fdad017] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_b74f83833fdad017] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_b74f83833fdad017] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_b74f83833fdad017] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_b74f83833fdad017] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_b74f83833fdad017] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomaly_b74f83833fdad017] = env->getMethodID(cls, "getMeanAnomaly", "()D");
          mids$[mid_getMeanAnomalyDot_b74f83833fdad017] = env->getMethodID(cls, "getMeanAnomalyDot", "()D");
          mids$[mid_getPerigeeArgument_b74f83833fdad017] = env->getMethodID(cls, "getPerigeeArgument", "()D");
          mids$[mid_getPerigeeArgumentDot_b74f83833fdad017] = env->getMethodID(cls, "getPerigeeArgumentDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_b74f83833fdad017] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_b74f83833fdad017] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getTrueAnomaly_b74f83833fdad017] = env->getMethodID(cls, "getTrueAnomaly", "()D");
          mids$[mid_getTrueAnomalyDot_b74f83833fdad017] = env->getMethodID(cls, "getTrueAnomalyDot", "()D");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_f50f1bbccaeb207e] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_shiftedBy_6dd0dbbaeda67047] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_69b47a274eed440d, a0.this$)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_18124f64d7fce8bd, a0.this$, a1.this$, a2)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_bc81b5d0c2baa99c, a0.this$, a1.this$, a2.this$, a3)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5fc5d1b0e40c2d5b, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_3058e51cfd00310e, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void KeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_2a5649bc1625306e], a0.this$, a1, a2.this$);
      }

      jdouble KeplerianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomaly_68608c097e66b295], a0.this$);
      }

      jdouble KeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomalyDot_68608c097e66b295], a0.this$);
      }

      ::org::orekit::orbits::PositionAngleType KeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_c25055891f180348]));
      }

      jdouble KeplerianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getEccentricAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomaly_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getEccentricAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomalyDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getMeanAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getMeanAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getPerigeeArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getPerigeeArgumentDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgumentDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getTrueAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomaly_b74f83833fdad017]);
      }

      jdouble KeplerianOrbit::getTrueAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomalyDot_b74f83833fdad017]);
      }

      ::org::orekit::orbits::OrbitType KeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean KeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
      }

      KeplerianOrbit KeplerianOrbit::removeRates() const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_f50f1bbccaeb207e]));
      }

      KeplerianOrbit KeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_6dd0dbbaeda67047], a0));
      }

      ::java::lang::String KeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data);
      static PyGetSetDef t_KeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_KeplerianOrbit, a),
        DECLARE_GET_FIELD(t_KeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_KeplerianOrbit, e),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, i),
        DECLARE_GET_FIELD(t_KeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_KeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianOrbit)[] = {
        { Py_tp_methods, t_KeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_KeplerianOrbit_init_ },
        { Py_tp_getset, t_KeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(KeplerianOrbit, t_KeplerianOrbit, KeplerianOrbit);

      void t_KeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianOrbit), &PY_TYPE_DEF(KeplerianOrbit), module, "KeplerianOrbit", 0);
      }

      void t_KeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "class_", make_descriptor(KeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "wrapfn_", make_descriptor(t_KeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_KeplerianOrbit::wrap_Object(KeplerianOrbit(((t_KeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = KeplerianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self)
      {
        KeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_KeplerianOrbit::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble a0;
        KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencyHatchFilter::class$ = NULL;
          jmethodID *DualFrequencyHatchFilter::mids$ = NULL;
          bool DualFrequencyHatchFilter::live$ = false;

          jclass DualFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_97f95739029128c6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;DDDI)V");
              mids$[mid_filterData_cd95911c206f8ad1] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_getFirstFrequencyPhaseHistory_664cae6eaa0e211a] = env->getMethodID(cls, "getFirstFrequencyPhaseHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSecondFrequencyPhaseHistory_664cae6eaa0e211a] = env->getMethodID(cls, "getSecondFrequencyPhaseHistory", "()Ljava/util/ArrayList;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencyHatchFilter::DualFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, jdouble a3, jdouble a4, jdouble a5, jint a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_97f95739029128c6, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_cd95911c206f8ad1], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getFirstFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getFirstFrequencyPhaseHistory_664cae6eaa0e211a]));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getSecondFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSecondFrequencyPhaseHistory_664cae6eaa0e211a]));
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
          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args);
          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyGetSetDef t_DualFrequencyHatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, firstFrequencyPhaseHistory),
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, secondFrequencyPhaseHistory),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_DualFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, filterData, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getFirstFrequencyPhaseHistory, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getSecondFrequencyPhaseHistory, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_DualFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_DualFrequencyHatchFilter_init_ },
            { Py_tp_getset, t_DualFrequencyHatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(DualFrequencyHatchFilter, t_DualFrequencyHatchFilter, DualFrequencyHatchFilter);

          void t_DualFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencyHatchFilter), &PY_TYPE_DEF(DualFrequencyHatchFilter), module, "DualFrequencyHatchFilter", 0);
          }

          void t_DualFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "class_", make_descriptor(DualFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "wrapfn_", make_descriptor(t_DualFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_DualFrequencyHatchFilter::wrap_Object(DualFrequencyHatchFilter(((t_DualFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jint a6;
            DualFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDI", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = DualFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1, a2));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }

          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *ClockCorrectionsProvider::class$ = NULL;
          jmethodID *ClockCorrectionsProvider::mids$ = NULL;
          bool ClockCorrectionsProvider::live$ = false;
          ::java::lang::String *ClockCorrectionsProvider::CLOCK_CORRECTIONS = NULL;

          jclass ClockCorrectionsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_362abc6838ec54fa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSClockElements;)V");
              mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLOCK_CORRECTIONS = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_CORRECTIONS", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ClockCorrectionsProvider::ClockCorrectionsProvider(const ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_362abc6838ec54fa, a0.this$)) {}

          JArray< jdouble > ClockCorrectionsProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f227e5f48720b798], a0.this$));
          }

          ::java::lang::String ClockCorrectionsProvider::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
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
          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self);
          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data);
          static PyGetSetDef t_ClockCorrectionsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ClockCorrectionsProvider, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ClockCorrectionsProvider__methods_[] = {
            DECLARE_METHOD(t_ClockCorrectionsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getAdditionalState, METH_O),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ClockCorrectionsProvider)[] = {
            { Py_tp_methods, t_ClockCorrectionsProvider__methods_ },
            { Py_tp_init, (void *) t_ClockCorrectionsProvider_init_ },
            { Py_tp_getset, t_ClockCorrectionsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ClockCorrectionsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ClockCorrectionsProvider, t_ClockCorrectionsProvider, ClockCorrectionsProvider);

          void t_ClockCorrectionsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ClockCorrectionsProvider), &PY_TYPE_DEF(ClockCorrectionsProvider), module, "ClockCorrectionsProvider", 0);
          }

          void t_ClockCorrectionsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "class_", make_descriptor(ClockCorrectionsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "wrapfn_", make_descriptor(t_ClockCorrectionsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "boxfn_", make_descriptor(boxObject));
            env->getClass(ClockCorrectionsProvider::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "CLOCK_CORRECTIONS", make_descriptor(j2p(*ClockCorrectionsProvider::CLOCK_CORRECTIONS)));
          }

          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ClockCorrectionsProvider::initializeClass, 1)))
              return NULL;
            return t_ClockCorrectionsProvider::wrap_Object(ClockCorrectionsProvider(((t_ClockCorrectionsProvider *) arg)->object.this$));
          }
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ClockCorrectionsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements a0((jobject) NULL);
            ClockCorrectionsProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements::initializeClass, &a0))
            {
              INT_CALL(object = ClockCorrectionsProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg)
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

          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Authentication::class$ = NULL;
          jmethodID *Authentication::mids$ = NULL;
          bool Authentication::live$ = false;
          Authentication *Authentication::BASIC = NULL;
          Authentication *Authentication::DIGEST = NULL;
          Authentication *Authentication::NONE = NULL;

          jclass Authentication::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Authentication");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAuthentication_8094c921fde19441] = env->getStaticMethodID(cls, "getAuthentication", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_valueOf_8094c921fde19441] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_values_681a9ac7b396cda5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Authentication;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BASIC = new Authentication(env->getStaticObjectField(cls, "BASIC", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              DIGEST = new Authentication(env->getStaticObjectField(cls, "DIGEST", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              NONE = new Authentication(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Authentication Authentication::getAuthentication(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_getAuthentication_8094c921fde19441], a0.this$));
          }

          Authentication Authentication::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8094c921fde19441], a0.this$));
          }

          JArray< Authentication > Authentication::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Authentication >(env->callStaticObjectMethod(cls, mids$[mid_values_681a9ac7b396cda5]));
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
          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args);
          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Authentication_values(PyTypeObject *type);
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data);
          static PyGetSetDef t_Authentication__fields_[] = {
            DECLARE_GET_FIELD(t_Authentication, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Authentication__methods_[] = {
            DECLARE_METHOD(t_Authentication, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, of_, METH_VARARGS),
            DECLARE_METHOD(t_Authentication, getAuthentication, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Authentication, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Authentication)[] = {
            { Py_tp_methods, t_Authentication__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Authentication__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Authentication)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Authentication, t_Authentication, Authentication);
          PyObject *t_Authentication::wrap_Object(const Authentication& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Authentication::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Authentication::install(PyObject *module)
          {
            installType(&PY_TYPE(Authentication), &PY_TYPE_DEF(Authentication), module, "Authentication", 0);
          }

          void t_Authentication::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "class_", make_descriptor(Authentication::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "wrapfn_", make_descriptor(t_Authentication::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "boxfn_", make_descriptor(boxObject));
            env->getClass(Authentication::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "BASIC", make_descriptor(t_Authentication::wrap_Object(*Authentication::BASIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "DIGEST", make_descriptor(t_Authentication::wrap_Object(*Authentication::DIGEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "NONE", make_descriptor(t_Authentication::wrap_Object(*Authentication::NONE)));
          }

          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Authentication::initializeClass, 1)))
              return NULL;
            return t_Authentication::wrap_Object(Authentication(((t_Authentication *) arg)->object.this$));
          }
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Authentication::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::getAuthentication(a0));
              return t_Authentication::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getAuthentication", arg);
            return NULL;
          }

          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::valueOf(a0));
              return t_Authentication::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Authentication_values(PyTypeObject *type)
          {
            JArray< Authentication > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::values());
            return JArray<jobject>(result.this$).wrap(t_Authentication::wrap_jobject);
          }
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data)
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
#include "org/hipparchus/geometry/hull/ConvexHullGenerator.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHullGenerator::class$ = NULL;
        jmethodID *ConvexHullGenerator::mids$ = NULL;
        bool ConvexHullGenerator::live$ = false;

        jclass ConvexHullGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHullGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_generate_9887d48e452c3401] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/hull/ConvexHull;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::hull::ConvexHull ConvexHullGenerator::generate(const ::java::util::Collection & a0) const
        {
          return ::org::hipparchus::geometry::hull::ConvexHull(env->callObjectMethod(this$, mids$[mid_generate_9887d48e452c3401], a0.this$));
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
      namespace hull {
        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args);
        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data);
        static PyGetSetDef t_ConvexHullGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHullGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHullGenerator__methods_[] = {
          DECLARE_METHOD(t_ConvexHullGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHullGenerator, generate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator)[] = {
          { Py_tp_methods, t_ConvexHullGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHullGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConvexHullGenerator, t_ConvexHullGenerator, ConvexHullGenerator);
        PyObject *t_ConvexHullGenerator::wrap_Object(const ConvexHullGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHullGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHullGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHullGenerator), &PY_TYPE_DEF(ConvexHullGenerator), module, "ConvexHullGenerator", 0);
        }

        void t_ConvexHullGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "class_", make_descriptor(ConvexHullGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "wrapfn_", make_descriptor(t_ConvexHullGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHullGenerator::initializeClass, 1)))
            return NULL;
          return t_ConvexHullGenerator::wrap_Object(ConvexHullGenerator(((t_ConvexHullGenerator *) arg)->object.this$));
        }
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHullGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::hull::ConvexHull result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.generate(a0));
            return ::org::hipparchus::geometry::hull::t_ConvexHull::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "generate", arg);
          return NULL;
        }
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
