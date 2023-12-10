#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *IntervalEventTrigger::class$ = NULL;
          jmethodID *IntervalEventTrigger::mids$ = NULL;
          bool IntervalEventTrigger::live$ = false;

          jclass IntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/IntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_958f8a74aa6ccd6d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFiringIntervalDetector_900a1fd995808d92] = env->getMethodID(cls, "getFiringIntervalDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_convertIntervalDetector_904dccaacafa0db1] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_isFiringOnInitialState_6501154ab0a356a8] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalEventTrigger::IntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_958f8a74aa6ccd6d, a0.this$)) {}

          ::java::util::stream::Stream IntervalEventTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
          }

          ::java::util::stream::Stream IntervalEventTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector IntervalEventTrigger::getFiringIntervalDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getFiringIntervalDetector_900a1fd995808d92]));
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
          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args);
          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self);
          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data);
          static PyGetSetDef t_IntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalEventTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, firingIntervalDetector),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_IntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFiringIntervalDetector, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalEventTrigger)[] = {
            { Py_tp_methods, t_IntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_IntervalEventTrigger_init_ },
            { Py_tp_getset, t_IntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(IntervalEventTrigger, t_IntervalEventTrigger, IntervalEventTrigger);
          PyObject *t_IntervalEventTrigger::wrap_Object(const IntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalEventTrigger), &PY_TYPE_DEF(IntervalEventTrigger), module, "IntervalEventTrigger", 0);
          }

          void t_IntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "class_", make_descriptor(IntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "wrapfn_", make_descriptor(t_IntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_IntervalEventTrigger::wrap_Object(IntervalEventTrigger(((t_IntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = IntervalEventTrigger(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getFiringIntervalDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getFiringIntervalDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FixedTransformProvider.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FixedTransformProvider::class$ = NULL;
      jmethodID *FixedTransformProvider::mids$ = NULL;
      bool FixedTransformProvider::live$ = false;

      jclass FixedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FixedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9bbe3b825fc9db52] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Transform;)V");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedTransformProvider::FixedTransformProvider(const ::org::orekit::frames::Transform & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9bbe3b825fc9db52, a0.this$)) {}

      ::org::orekit::frames::Transform FixedTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform FixedTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
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
      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args);

      static PyMethodDef t_FixedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_FixedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedTransformProvider)[] = {
        { Py_tp_methods, t_FixedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_FixedTransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedTransformProvider, t_FixedTransformProvider, FixedTransformProvider);

      void t_FixedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedTransformProvider), &PY_TYPE_DEF(FixedTransformProvider), module, "FixedTransformProvider", 0);
      }

      void t_FixedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "class_", make_descriptor(FixedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "wrapfn_", make_descriptor(t_FixedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_FixedTransformProvider::wrap_Object(FixedTransformProvider(((t_FixedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Transform a0((jobject) NULL);
        FixedTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Transform::initializeClass, &a0))
        {
          INT_CALL(object = FixedTransformProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *FrequencyPattern::class$ = NULL;
        jmethodID *FrequencyPattern::mids$ = NULL;
        bool FrequencyPattern::live$ = false;
        FrequencyPattern *FrequencyPattern::ZERO_CORRECTION = NULL;

        jclass FrequencyPattern::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/FrequencyPattern");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0f76d53776f1b12d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;)V");
            mids$[mid_getEccentricities_d52645e0d4c07563] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getPhaseCenterVariation_bf473e7c74e5ce2b] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getPhaseCenterVariationFunction_5e79c1f042c16192] = env->getMethodID(cls, "getPhaseCenterVariationFunction", "()Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ZERO_CORRECTION = new FrequencyPattern(env->getStaticObjectField(cls, "ZERO_CORRECTION", "Lorg/orekit/gnss/antenna/FrequencyPattern;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FrequencyPattern::FrequencyPattern(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::gnss::antenna::PhaseCenterVariationFunction & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f76d53776f1b12d, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FrequencyPattern::getEccentricities() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_d52645e0d4c07563]));
        }

        jdouble FrequencyPattern::getPhaseCenterVariation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_bf473e7c74e5ce2b], a0.this$);
        }

        ::org::orekit::gnss::antenna::PhaseCenterVariationFunction FrequencyPattern::getPhaseCenterVariationFunction() const
        {
          return ::org::orekit::gnss::antenna::PhaseCenterVariationFunction(env->callObjectMethod(this$, mids$[mid_getPhaseCenterVariationFunction_5e79c1f042c16192]));
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
      namespace antenna {
        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data);
        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data);
        static PyGetSetDef t_FrequencyPattern__fields_[] = {
          DECLARE_GET_FIELD(t_FrequencyPattern, eccentricities),
          DECLARE_GET_FIELD(t_FrequencyPattern, phaseCenterVariationFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FrequencyPattern__methods_[] = {
          DECLARE_METHOD(t_FrequencyPattern, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, getEccentricities, METH_NOARGS),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariation, METH_O),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariationFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FrequencyPattern)[] = {
          { Py_tp_methods, t_FrequencyPattern__methods_ },
          { Py_tp_init, (void *) t_FrequencyPattern_init_ },
          { Py_tp_getset, t_FrequencyPattern__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FrequencyPattern)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FrequencyPattern, t_FrequencyPattern, FrequencyPattern);

        void t_FrequencyPattern::install(PyObject *module)
        {
          installType(&PY_TYPE(FrequencyPattern), &PY_TYPE_DEF(FrequencyPattern), module, "FrequencyPattern", 0);
        }

        void t_FrequencyPattern::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "class_", make_descriptor(FrequencyPattern::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "wrapfn_", make_descriptor(t_FrequencyPattern::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "boxfn_", make_descriptor(boxObject));
          env->getClass(FrequencyPattern::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "ZERO_CORRECTION", make_descriptor(t_FrequencyPattern::wrap_Object(*FrequencyPattern::ZERO_CORRECTION)));
        }

        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FrequencyPattern::initializeClass, 1)))
            return NULL;
          return t_FrequencyPattern::wrap_Object(FrequencyPattern(((t_FrequencyPattern *) arg)->object.this$));
        }
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FrequencyPattern::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction a1((jobject) NULL);
          FrequencyPattern object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::gnss::antenna::PhaseCenterVariationFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FrequencyPattern(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", arg);
          return NULL;
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary::class$ = NULL;
      jmethodID *FieldArrayDictionary::mids$ = NULL;
      bool FieldArrayDictionary::live$ = false;

      jclass FieldArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_c5199de6167cff95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_b89190f186aaf539] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Map;)V");
          mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_f1183f1b2d548100] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getData_2afa36052df4765d] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_e9b4158c37f4fb83] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/FieldArrayDictionary$Entry;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_put_3468fcb7793f51a9] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_put_ed186b368c4c454c] = env->getMethodID(cls, "put", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_putAll_9f0edbbc591be0df] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_putAll_db8de8bc54857165] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_7edad2c2f64f4d68] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_6f5a75ccd8c04465] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_a7763b9cf85435a1] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/FieldArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5199de6167cff95, a0.this$, a1)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b89190f186aaf539, a0.this$, a1.this$)) {}

      void FieldArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_get_f1183f1b2d548100], a0.this$));
      }

      ::java::util::List FieldArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_2afa36052df4765d]));
      }

      ::org::orekit::utils::FieldArrayDictionary$Entry FieldArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::FieldArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_e9b4158c37f4fb83], a0.this$));
      }

      ::org::hipparchus::Field FieldArrayDictionary::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_3468fcb7793f51a9], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_ed186b368c4c454c], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::putAll(const FieldArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_9f0edbbc591be0df], a0.this$);
      }

      void FieldArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_db8de8bc54857165], a0.this$);
      }

      jboolean FieldArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_7edad2c2f64f4d68], a0.this$);
      }

      jint FieldArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
      }

      ::java::util::Map FieldArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_6f5a75ccd8c04465]));
      }

      ::java::lang::String FieldArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      FieldArrayDictionary FieldArrayDictionary::unmodifiableView() const
      {
        return FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_a7763b9cf85435a1]));
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
      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args);
      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary, data),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, field),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary)[] = {
        { Py_tp_methods, t_FieldArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_FieldArrayDictionary_init_ },
        { Py_tp_getset, t_FieldArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary, t_FieldArrayDictionary, FieldArrayDictionary);
      PyObject *t_FieldArrayDictionary::wrap_Object(const FieldArrayDictionary& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary), &PY_TYPE_DEF(FieldArrayDictionary), module, "FieldArrayDictionary", 0);
      }

      void t_FieldArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "class_", make_descriptor(FieldArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "wrapfn_", make_descriptor(t_FieldArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary::wrap_Object(FieldArrayDictionary(((t_FieldArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0));
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
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
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

      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::FieldArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_FieldArrayDictionary$Entry::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "s[D", &a0, &a1))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldArrayDictionary a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", FieldArrayDictionary::initializeClass, &a0, &p0, t_FieldArrayDictionary::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "putAll", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self)
      {
        FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialsUtils.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialsUtils::class$ = NULL;
        jmethodID *PolynomialsUtils::mids$ = NULL;
        bool PolynomialsUtils::live$ = false;

        jclass PolynomialsUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialsUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createChebyshevPolynomial_5bd8ce1674c86e4e] = env->getStaticMethodID(cls, "createChebyshevPolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createHermitePolynomial_5bd8ce1674c86e4e] = env->getStaticMethodID(cls, "createHermitePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createJacobiPolynomial_03ef4c1eb023d2c0] = env->getStaticMethodID(cls, "createJacobiPolynomial", "(III)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLaguerrePolynomial_5bd8ce1674c86e4e] = env->getStaticMethodID(cls, "createLaguerrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLegendrePolynomial_5bd8ce1674c86e4e] = env->getStaticMethodID(cls, "createLegendrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_shift_7c03fc65848ac490] = env->getStaticMethodID(cls, "shift", "([DD)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createChebyshevPolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createChebyshevPolynomial_5bd8ce1674c86e4e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createHermitePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createHermitePolynomial_5bd8ce1674c86e4e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createJacobiPolynomial(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createJacobiPolynomial_03ef4c1eb023d2c0], a0, a1, a2));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLaguerrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLaguerrePolynomial_5bd8ce1674c86e4e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLegendrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLegendrePolynomial_5bd8ce1674c86e4e], a0));
        }

        JArray< jdouble > PolynomialsUtils::shift(const JArray< jdouble > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_shift_7c03fc65848ac490], a0.this$, a1));
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
        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_PolynomialsUtils__methods_[] = {
          DECLARE_METHOD(t_PolynomialsUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createChebyshevPolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createHermitePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createJacobiPolynomial, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLaguerrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLegendrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, shift, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialsUtils)[] = {
          { Py_tp_methods, t_PolynomialsUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialsUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialsUtils, t_PolynomialsUtils, PolynomialsUtils);

        void t_PolynomialsUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialsUtils), &PY_TYPE_DEF(PolynomialsUtils), module, "PolynomialsUtils", 0);
        }

        void t_PolynomialsUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "class_", make_descriptor(PolynomialsUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "wrapfn_", make_descriptor(t_PolynomialsUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialsUtils::initializeClass, 1)))
            return NULL;
          return t_PolynomialsUtils::wrap_Object(PolynomialsUtils(((t_PolynomialsUtils *) arg)->object.this$));
        }
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialsUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createChebyshevPolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createChebyshevPolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createHermitePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createHermitePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createJacobiPolynomial(a0, a1, a2));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createJacobiPolynomial", args);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLaguerrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLaguerrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLegendrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLegendrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::shift(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "shift", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/RootsOfUnity.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *RootsOfUnity::class$ = NULL;
      jmethodID *RootsOfUnity::mids$ = NULL;
      bool RootsOfUnity::live$ = false;

      jclass RootsOfUnity::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/RootsOfUnity");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_computeRoots_99803b0791f320ff] = env->getMethodID(cls, "computeRoots", "(I)V");
          mids$[mid_getImaginary_46f85b53d9aedd96] = env->getMethodID(cls, "getImaginary", "(I)D");
          mids$[mid_getNumberOfRoots_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfRoots", "()I");
          mids$[mid_getReal_46f85b53d9aedd96] = env->getMethodID(cls, "getReal", "(I)D");
          mids$[mid_isCounterClockWise_b108b35ef48e27bd] = env->getMethodID(cls, "isCounterClockWise", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RootsOfUnity::RootsOfUnity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void RootsOfUnity::computeRoots(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_computeRoots_99803b0791f320ff], a0);
      }

      jdouble RootsOfUnity::getImaginary(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_46f85b53d9aedd96], a0);
      }

      jint RootsOfUnity::getNumberOfRoots() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfRoots_570ce0828f81a2c1]);
      }

      jdouble RootsOfUnity::getReal(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_46f85b53d9aedd96], a0);
      }

      jboolean RootsOfUnity::isCounterClockWise() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCounterClockWise_b108b35ef48e27bd]);
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
      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data);
      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data);
      static PyGetSetDef t_RootsOfUnity__fields_[] = {
        DECLARE_GET_FIELD(t_RootsOfUnity, counterClockWise),
        DECLARE_GET_FIELD(t_RootsOfUnity, numberOfRoots),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RootsOfUnity__methods_[] = {
        DECLARE_METHOD(t_RootsOfUnity, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, computeRoots, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getImaginary, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getNumberOfRoots, METH_NOARGS),
        DECLARE_METHOD(t_RootsOfUnity, getReal, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, isCounterClockWise, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RootsOfUnity)[] = {
        { Py_tp_methods, t_RootsOfUnity__methods_ },
        { Py_tp_init, (void *) t_RootsOfUnity_init_ },
        { Py_tp_getset, t_RootsOfUnity__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RootsOfUnity)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RootsOfUnity, t_RootsOfUnity, RootsOfUnity);

      void t_RootsOfUnity::install(PyObject *module)
      {
        installType(&PY_TYPE(RootsOfUnity), &PY_TYPE_DEF(RootsOfUnity), module, "RootsOfUnity", 0);
      }

      void t_RootsOfUnity::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "class_", make_descriptor(RootsOfUnity::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "wrapfn_", make_descriptor(t_RootsOfUnity::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RootsOfUnity::initializeClass, 1)))
          return NULL;
        return t_RootsOfUnity::wrap_Object(RootsOfUnity(((t_RootsOfUnity *) arg)->object.this$));
      }
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RootsOfUnity::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds)
      {
        RootsOfUnity object((jobject) NULL);

        INT_CALL(object = RootsOfUnity());
        self->object = object;

        return 0;
      }

      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.computeRoots(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "computeRoots", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getImaginary(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getReal(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isCounterClockWise());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isCounterClockWise());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Phase::class$ = NULL;
          jmethodID *Phase::mids$ = NULL;
          bool Phase::live$ = false;
          ::java::lang::String *Phase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *Phase::MEASUREMENT_TYPE = NULL;

          jclass Phase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Phase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ddde37795a589131] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_a25ed222178aa59f] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_dff5885c2c873297] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Phase::Phase(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_ddde37795a589131, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}

          ::org::orekit::utils::ParameterDriver Phase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_a25ed222178aa59f]));
          }

          jdouble Phase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_dff5885c2c873297]);
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
          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args);
          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self);
          static PyObject *t_Phase_getWavelength(t_Phase *self);
          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data);
          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data);
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data);
          static PyGetSetDef t_Phase__fields_[] = {
            DECLARE_GET_FIELD(t_Phase, ambiguityDriver),
            DECLARE_GET_FIELD(t_Phase, wavelength),
            DECLARE_GET_FIELD(t_Phase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Phase__methods_[] = {
            DECLARE_METHOD(t_Phase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, of_, METH_VARARGS),
            DECLARE_METHOD(t_Phase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_Phase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Phase)[] = {
            { Py_tp_methods, t_Phase__methods_ },
            { Py_tp_init, (void *) t_Phase_init_ },
            { Py_tp_getset, t_Phase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Phase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
            NULL
          };

          DEFINE_TYPE(Phase, t_Phase, Phase);
          PyObject *t_Phase::wrap_Object(const Phase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Phase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Phase::install(PyObject *module)
          {
            installType(&PY_TYPE(Phase), &PY_TYPE_DEF(Phase), module, "Phase", 0);
          }

          void t_Phase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "class_", make_descriptor(Phase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "wrapfn_", make_descriptor(t_Phase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "boxfn_", make_descriptor(boxObject));
            env->getClass(Phase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "AMBIGUITY_NAME", make_descriptor(j2p(*Phase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "MEASUREMENT_TYPE", make_descriptor(j2p(*Phase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Phase::initializeClass, 1)))
              return NULL;
            return t_Phase::wrap_Object(Phase(((t_Phase *) arg)->object.this$));
          }
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Phase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            Phase object((jobject) NULL);

            if (!parseArgs(args, "kkDDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = Phase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_Phase_getWavelength(t_Phase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_d0c7a8ec7803ff34] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_values_6573ef557f602b5b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_selectTransformer_acd432a4ec673606] = env->getMethodID(cls, "selectTransformer", "(Lorg/orekit/propagation/events/Transformer;DZ)Lorg/orekit/propagation/events/Transformer;");
            mids$[mid_getTriggeredIncreasing_b108b35ef48e27bd] = env->getMethodID(cls, "getTriggeredIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d0c7a8ec7803ff34], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_6573ef557f602b5b]));
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
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54FieldIntegrator::class$ = NULL;
        jmethodID *HighamHall54FieldIntegrator::mids$ = NULL;
        bool HighamHall54FieldIntegrator::live$ = false;

        jclass HighamHall54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a2c9513f4a7704d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_6d182549447f82d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_df2d3543cbdedc55] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54FieldStateInterpolator;");
            mids$[mid_estimateError_f7f77a3e7e765297] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4a2c9513f4a7704d, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6d182549447f82d8, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > HighamHall54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
        }

        jint HighamHall54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
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
        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegrator)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegrator_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegrator, t_HighamHall54FieldIntegrator, HighamHall54FieldIntegrator);
        PyObject *t_HighamHall54FieldIntegrator::wrap_Object(const HighamHall54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegrator), &PY_TYPE_DEF(HighamHall54FieldIntegrator), module, "HighamHall54FieldIntegrator", 0);
        }

        void t_HighamHall54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "class_", make_descriptor(HighamHall54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegrator::wrap_Object(HighamHall54FieldIntegrator(((t_HighamHall54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *SourceTable::class$ = NULL;
          jmethodID *SourceTable::mids$ = NULL;
          bool SourceTable::live$ = false;

          jclass SourceTable::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/SourceTable");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCasters_2afa36052df4765d] = env->getMethodID(cls, "getCasters", "()Ljava/util/List;");
              mids$[mid_getDataStreams_2afa36052df4765d] = env->getMethodID(cls, "getDataStreams", "()Ljava/util/List;");
              mids$[mid_getNetworks_2afa36052df4765d] = env->getMethodID(cls, "getNetworks", "()Ljava/util/List;");
              mids$[mid_getNtripFlags_11b109bd155ca898] = env->getMethodID(cls, "getNtripFlags", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List SourceTable::getCasters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCasters_2afa36052df4765d]));
          }

          ::java::util::List SourceTable::getDataStreams() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataStreams_2afa36052df4765d]));
          }

          ::java::util::List SourceTable::getNetworks() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNetworks_2afa36052df4765d]));
          }

          ::java::lang::String SourceTable::getNtripFlags() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNtripFlags_11b109bd155ca898]));
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
          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_getCasters(t_SourceTable *self);
          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self);
          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self);
          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self);
          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data);
          static PyGetSetDef t_SourceTable__fields_[] = {
            DECLARE_GET_FIELD(t_SourceTable, casters),
            DECLARE_GET_FIELD(t_SourceTable, dataStreams),
            DECLARE_GET_FIELD(t_SourceTable, networks),
            DECLARE_GET_FIELD(t_SourceTable, ntripFlags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SourceTable__methods_[] = {
            DECLARE_METHOD(t_SourceTable, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, getCasters, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getDataStreams, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNetworks, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNtripFlags, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SourceTable)[] = {
            { Py_tp_methods, t_SourceTable__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SourceTable__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SourceTable)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SourceTable, t_SourceTable, SourceTable);

          void t_SourceTable::install(PyObject *module)
          {
            installType(&PY_TYPE(SourceTable), &PY_TYPE_DEF(SourceTable), module, "SourceTable", 0);
          }

          void t_SourceTable::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "class_", make_descriptor(SourceTable::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "wrapfn_", make_descriptor(t_SourceTable::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SourceTable::initializeClass, 1)))
              return NULL;
            return t_SourceTable::wrap_Object(SourceTable(((t_SourceTable *) arg)->object.this$));
          }
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SourceTable::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SourceTable_getCasters(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(CasterRecord));
          }

          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(DataStreamRecord));
          }

          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NetworkRecord));
          }

          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNtripFlags());
            return j2p(result);
          }

          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNtripFlags());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEIntegrator::class$ = NULL;
      jmethodID *ODEIntegrator::mids$ = NULL;
      bool ODEIntegrator::live$ = false;

      jclass ODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_1acd9de872b3c9bd] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_ff5dc983cf5314d8] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_613136788c102fe1] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_dff5885c2c873297] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_2afa36052df4765d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_72cfc96c3e58d15e] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_3c1cc820e563e3e9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_f227297909eb6b1e] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_99803b0791f320ff] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_1acd9de872b3c9bd], a0.this$);
      }

      void ODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_ff5dc983cf5314d8], a0.this$);
      }

      void ODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_613136788c102fe1], a0.this$);
      }

      void ODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0fa09c18fee449d5]);
      }

      void ODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0fa09c18fee449d5]);
      }

      void ODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0fa09c18fee449d5]);
      }

      jdouble ODEIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_dff5885c2c873297]);
      }

      jint ODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
      }

      ::java::util::List ODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_2afa36052df4765d]));
      }

      jint ODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
      }

      ::java::lang::String ODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::java::util::List ODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_2afa36052df4765d]));
      }

      ::java::util::List ODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_2afa36052df4765d]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_72cfc96c3e58d15e]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3c1cc820e563e3e9], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_f227297909eb6b1e], a0.this$, a1.this$, a2));
      }

      void ODEIntegrator::setMaxEvaluations(jint a0) const
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
      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args);
      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data);
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data);
      static PyGetSetDef t_ODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_ODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_ODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_ODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, name),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_ODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_ODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEIntegrator)[] = {
        { Py_tp_methods, t_ODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEIntegrator, t_ODEIntegrator, ODEIntegrator);

      void t_ODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEIntegrator), &PY_TYPE_DEF(ODEIntegrator), module, "ODEIntegrator", 0);
      }

      void t_ODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "class_", make_descriptor(ODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "wrapfn_", make_descriptor(t_ODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_ODEIntegrator::wrap_Object(ODEIntegrator(((t_ODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2));
              return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2));
              return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg)
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

      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Header::class$ = NULL;
              jmethodID *SsrIgm06Header::mids$ = NULL;
              bool SsrIgm06Header::live$ = false;

              jclass SsrIgm06Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_isConsistencyMaintained_b108b35ef48e27bd] = env->getMethodID(cls, "isConsistencyMaintained", "()Z");
                  mids$[mid_isMelbourneWubbenaConsistencyMaintained_b108b35ef48e27bd] = env->getMethodID(cls, "isMelbourneWubbenaConsistencyMaintained", "()Z");
                  mids$[mid_setIsConsistencyMaintained_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsConsistencyMaintained", "(Z)V");
                  mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsMelbourneWubbenaConsistencyMaintained", "(Z)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Header::SsrIgm06Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jboolean SsrIgm06Header::isConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isConsistencyMaintained_b108b35ef48e27bd]);
              }

              jboolean SsrIgm06Header::isMelbourneWubbenaConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isMelbourneWubbenaConsistencyMaintained_b108b35ef48e27bd]);
              }

              void SsrIgm06Header::setIsConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsConsistencyMaintained_bd04c9335fb9e4cf], a0);
              }

              void SsrIgm06Header::setIsMelbourneWubbenaConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_bd04c9335fb9e4cf], a0);
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
              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyGetSetDef t_SsrIgm06Header__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06Header, consistencyMaintained),
                DECLARE_GET_FIELD(t_SsrIgm06Header, melbourneWubbenaConsistencyMaintained),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, isConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, isMelbourneWubbenaConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, setIsConsistencyMaintained, METH_O),
                DECLARE_METHOD(t_SsrIgm06Header, setIsMelbourneWubbenaConsistencyMaintained, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Header)[] = {
                { Py_tp_methods, t_SsrIgm06Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Header_init_ },
                { Py_tp_getset, t_SsrIgm06Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Header, t_SsrIgm06Header, SsrIgm06Header);

              void t_SsrIgm06Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Header), &PY_TYPE_DEF(SsrIgm06Header), module, "SsrIgm06Header", 0);
              }

              void t_SsrIgm06Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "class_", make_descriptor(SsrIgm06Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "wrapfn_", make_descriptor(t_SsrIgm06Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Header::wrap_Object(SsrIgm06Header(((t_SsrIgm06Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Header object((jobject) NULL);

                INT_CALL(object = SsrIgm06Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsMelbourneWubbenaConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsMelbourneWubbenaConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(value);
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
#include "org/orekit/files/sp3/SP3Utils.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Utils::class$ = NULL;
        jmethodID *SP3Utils::mids$ = NULL;
        bool SP3Utils::live$ = false;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_UNIT = NULL;
        jdouble SP3Utils::DEFAULT_CLOCK_RATE_VALUE = (jdouble) 0;
        jdouble SP3Utils::DEFAULT_CLOCK_VALUE = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_UNIT = NULL;
        jdouble SP3Utils::POS_VEL_BASE_ACCURACY = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_UNIT = NULL;

        jclass SP3Utils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Utils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_indexAccuracy_e35b4e41d0799f26] = env->getStaticMethodID(cls, "indexAccuracy", "(Lorg/orekit/utils/units/Unit;DD)I");
            mids$[mid_siAccuracy_32b37b360bc5030c] = env->getStaticMethodID(cls, "siAccuracy", "(Lorg/orekit/utils/units/Unit;DI)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_UNIT", "Lorg/orekit/utils/units/Unit;"));
            DEFAULT_CLOCK_RATE_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_RATE_VALUE");
            DEFAULT_CLOCK_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_VALUE");
            POSITION_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POSITION_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POS_VEL_BASE_ACCURACY = env->getStaticDoubleField(cls, "POS_VEL_BASE_ACCURACY");
            VELOCITY_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VELOCITY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint SP3Utils::indexAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticIntMethod(cls, mids$[mid_indexAccuracy_e35b4e41d0799f26], a0.this$, a1, a2);
        }

        jdouble SP3Utils::siAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_siAccuracy_32b37b360bc5030c], a0.this$, a1, a2);
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
        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_SP3Utils__methods_[] = {
          DECLARE_METHOD(t_SP3Utils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, indexAccuracy, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, siAccuracy, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Utils)[] = {
          { Py_tp_methods, t_SP3Utils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Utils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Utils, t_SP3Utils, SP3Utils);

        void t_SP3Utils::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Utils), &PY_TYPE_DEF(SP3Utils), module, "SP3Utils", 0);
        }

        void t_SP3Utils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "class_", make_descriptor(SP3Utils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "wrapfn_", make_descriptor(t_SP3Utils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Utils::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_RATE_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_RATE_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POS_VEL_BASE_ACCURACY", make_descriptor(SP3Utils::POS_VEL_BASE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_UNIT)));
        }

        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Utils::initializeClass, 1)))
            return NULL;
          return t_SP3Utils::wrap_Object(SP3Utils(((t_SP3Utils *) arg)->object.this$));
        }
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Utils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint result;

          if (!parseArgs(args, "kDD", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::indexAccuracy(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError(type, "indexAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "kDI", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::siAccuracy(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "siAccuracy", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodies.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodies::class$ = NULL;
      jmethodID *PythonCelestialBodies::mids$ = NULL;
      bool PythonCelestialBodies::live$ = false;

      jclass PythonCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBody_68e48076ef831536] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_624686a38a6b107c] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_624686a38a6b107c] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_624686a38a6b107c] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_624686a38a6b107c] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_624686a38a6b107c] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_624686a38a6b107c] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_624686a38a6b107c] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_624686a38a6b107c] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_624686a38a6b107c] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_624686a38a6b107c] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_624686a38a6b107c] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_624686a38a6b107c] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_624686a38a6b107c] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodies::PythonCelestialBodies() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonCelestialBodies::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonCelestialBodies::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonCelestialBodies::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self);
      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data);
      static PyGetSetDef t_PythonCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodies, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodies, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodies)[] = {
        { Py_tp_methods, t_PythonCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodies_init_ },
        { Py_tp_getset, t_PythonCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodies, t_PythonCelestialBodies, PythonCelestialBodies);

      void t_PythonCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodies), &PY_TYPE_DEF(PythonCelestialBodies), module, "PythonCelestialBodies", 1);
      }

      void t_PythonCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "class_", make_descriptor(PythonCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "wrapfn_", make_descriptor(t_PythonCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodies::initializeClass);
        JNINativeMethod methods[] = {
          { "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getBody0 },
          { "getEarth", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarth1 },
          { "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarthMoonBarycenter2 },
          { "getJupiter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getJupiter3 },
          { "getMars", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMars4 },
          { "getMercury", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMercury5 },
          { "getMoon", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMoon6 },
          { "getNeptune", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getNeptune7 },
          { "getPluto", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getPluto8 },
          { "getSaturn", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSaturn9 },
          { "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSolarSystemBarycenter10 },
          { "getSun", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSun11 },
          { "getUranus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getUranus12 },
          { "getVenus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getVenus13 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodies_pythonDecRef14 },
        };
        env->registerNatives(cls, methods, 15);
      }

      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodies::wrap_Object(PythonCelestialBodies(((t_PythonCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodies object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodies());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getBody", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarth", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarth", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarthMoonBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarthMoonBarycenter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJupiter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getJupiter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMars", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMars", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMercury", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMercury", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMoon", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMoon", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNeptune", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getNeptune", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPluto", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getPluto", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSaturn", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSaturn", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSolarSystemBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSolarSystemBarycenter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSun", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSun", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUranus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getUranus", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVenus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getVenus", result);
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

      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data)
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
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
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
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_36de6b722535732f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
          mids$[mid_addPVProviderAfter_a4e52086d3c578e4] = env->getMethodID(cls, "addPVProviderAfter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_addPVProviderBefore_a4e52086d3c578e4] = env->getMethodID(cls, "addPVProviderBefore", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_build_0bfa8135d82b8c5f] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/AggregatedPVCoordinatesProvider;");
          mids$[mid_invalidAfter_684b0f09aacac05d] = env->getMethodID(cls, "invalidAfter", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_invalidBefore_684b0f09aacac05d] = env->getMethodID(cls, "invalidBefore", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36de6b722535732f, a0.this$)) {}

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderAfter(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderAfter_a4e52086d3c578e4], a0.this$, a1.this$, a2));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderBefore(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderBefore_a4e52086d3c578e4], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::AggregatedPVCoordinatesProvider AggregatedPVCoordinatesProvider$Builder::build() const
      {
        return ::org::orekit::utils::AggregatedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_0bfa8135d82b8c5f]));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidAfter(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidAfter_684b0f09aacac05d], a0.this$));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidBefore(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidBefore_684b0f09aacac05d], a0.this$));
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
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeIndependentLOSTransform::class$ = NULL;
        jmethodID *TimeIndependentLOSTransform::mids$ = NULL;
        bool TimeIndependentLOSTransform::live$ = false;

        jclass TimeIndependentLOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeIndependentLOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_c5b4a35f45a6f61e] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_43c702ec4c12ce7d] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream TimeIndependentLOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_20f6d2b462aaef4b]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_c5b4a35f45a6f61e], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_43c702ec4c12ce7d], a0, a1.this$, a2.this$));
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
        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self);
        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args);
        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data);
        static PyGetSetDef t_TimeIndependentLOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_TimeIndependentLOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeIndependentLOSTransform__methods_[] = {
          DECLARE_METHOD(t_TimeIndependentLOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeIndependentLOSTransform)[] = {
          { Py_tp_methods, t_TimeIndependentLOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeIndependentLOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeIndependentLOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeIndependentLOSTransform, t_TimeIndependentLOSTransform, TimeIndependentLOSTransform);

        void t_TimeIndependentLOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeIndependentLOSTransform), &PY_TYPE_DEF(TimeIndependentLOSTransform), module, "TimeIndependentLOSTransform", 0);
        }

        void t_TimeIndependentLOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "class_", make_descriptor(TimeIndependentLOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "wrapfn_", make_descriptor(t_TimeIndependentLOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeIndependentLOSTransform::initializeClass, 1)))
            return NULL;
          return t_TimeIndependentLOSTransform::wrap_Object(TimeIndependentLOSTransform(((t_TimeIndependentLOSTransform *) arg)->object.this$));
        }
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeIndependentLOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParameters::class$ = NULL;
            jmethodID *SpacecraftParameters::mids$ = NULL;
            bool SpacecraftParameters::live$ = false;

            jclass SpacecraftParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDragArea_dff5885c2c873297] = env->getMethodID(cls, "getDragArea", "()D");
                mids$[mid_getDragCoeff_dff5885c2c873297] = env->getMethodID(cls, "getDragCoeff", "()D");
                mids$[mid_getMass_dff5885c2c873297] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getSolarRadArea_dff5885c2c873297] = env->getMethodID(cls, "getSolarRadArea", "()D");
                mids$[mid_getSolarRadCoeff_dff5885c2c873297] = env->getMethodID(cls, "getSolarRadCoeff", "()D");
                mids$[mid_setDragArea_17db3a65980d3441] = env->getMethodID(cls, "setDragArea", "(D)V");
                mids$[mid_setDragCoeff_17db3a65980d3441] = env->getMethodID(cls, "setDragCoeff", "(D)V");
                mids$[mid_setMass_17db3a65980d3441] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setSolarRadArea_17db3a65980d3441] = env->getMethodID(cls, "setSolarRadArea", "(D)V");
                mids$[mid_setSolarRadCoeff_17db3a65980d3441] = env->getMethodID(cls, "setSolarRadCoeff", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParameters::SpacecraftParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble SpacecraftParameters::getDragArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragArea_dff5885c2c873297]);
            }

            jdouble SpacecraftParameters::getDragCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragCoeff_dff5885c2c873297]);
            }

            jdouble SpacecraftParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_dff5885c2c873297]);
            }

            jdouble SpacecraftParameters::getSolarRadArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadArea_dff5885c2c873297]);
            }

            jdouble SpacecraftParameters::getSolarRadCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadCoeff_dff5885c2c873297]);
            }

            void SpacecraftParameters::setDragArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragArea_17db3a65980d3441], a0);
            }

            void SpacecraftParameters::setDragCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragCoeff_17db3a65980d3441], a0);
            }

            void SpacecraftParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_17db3a65980d3441], a0);
            }

            void SpacecraftParameters::setSolarRadArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadArea_17db3a65980d3441], a0);
            }

            void SpacecraftParameters::setSolarRadCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadCoeff_17db3a65980d3441], a0);
            }

            void SpacecraftParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args);
            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_SpacecraftParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragCoeff),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, mass),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadCoeff),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParameters__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, setDragArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setDragCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setMass, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParameters)[] = {
              { Py_tp_methods, t_SpacecraftParameters__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParameters_init_ },
              { Py_tp_getset, t_SpacecraftParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SpacecraftParameters, t_SpacecraftParameters, SpacecraftParameters);

            void t_SpacecraftParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParameters), &PY_TYPE_DEF(SpacecraftParameters), module, "SpacecraftParameters", 0);
            }

            void t_SpacecraftParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "class_", make_descriptor(SpacecraftParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "wrapfn_", make_descriptor(t_SpacecraftParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParameters::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParameters::wrap_Object(SpacecraftParameters(((t_SpacecraftParameters *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds)
            {
              SpacecraftParameters object((jobject) NULL);

              INT_CALL(object = SpacecraftParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMass", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SpacecraftParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragCoeff", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mass", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadCoeff", arg);
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
#include "org/orekit/propagation/PythonAbstractMatricesHarvester.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractMatricesHarvester::class$ = NULL;
      jmethodID *PythonAbstractMatricesHarvester::mids$ = NULL;
      bool PythonAbstractMatricesHarvester::live$ = false;

      jclass PythonAbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4eed9f37096d374b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_freezeColumnsNames_0fa09c18fee449d5] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMatricesHarvester::PythonAbstractMatricesHarvester(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::org::orekit::propagation::AbstractMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_4eed9f37096d374b, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAbstractMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAbstractMatricesHarvester::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self);
      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args);
      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonAbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonAbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonAbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMatricesHarvester, t_PythonAbstractMatricesHarvester, PythonAbstractMatricesHarvester);

      void t_PythonAbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMatricesHarvester), &PY_TYPE_DEF(PythonAbstractMatricesHarvester), module, "PythonAbstractMatricesHarvester", 1);
      }

      void t_PythonAbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "class_", make_descriptor(PythonAbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "freezeColumnsNames", "()V", (void *) t_PythonAbstractMatricesHarvester_freezeColumnsNames0 },
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonAbstractMatricesHarvester_getOrbitType2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonAbstractMatricesHarvester_getPositionAngleType3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMatricesHarvester_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMatricesHarvester::wrap_Object(PythonAbstractMatricesHarvester(((t_PythonAbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        PythonAbstractMatricesHarvester object((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractMatricesHarvester(a0, a1, a2));
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

      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "freezeColumnsNames", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
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

      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data)
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
#include "org/orekit/time/UTCTAIHistoryFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader::live$ = false;

      jclass UTCTAIHistoryFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_2ce23204880a56c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_2afa36052df4765d] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader(const ::org::orekit::data::DataProvidersManager & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2ce23204880a56c8, a0.this$)) {}

      ::java::util::List UTCTAIHistoryFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_2afa36052df4765d]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self);

      static PyMethodDef t_UTCTAIHistoryFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader, t_UTCTAIHistoryFilesLoader, UTCTAIHistoryFilesLoader);

      void t_UTCTAIHistoryFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader), module, "UTCTAIHistoryFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser)));
      }

      void t_UTCTAIHistoryFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "class_", make_descriptor(UTCTAIHistoryFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader::wrap_Object(UTCTAIHistoryFilesLoader(((t_UTCTAIHistoryFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            INT_CALL(object = UTCTAIHistoryFilesLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
            {
              INT_CALL(object = UTCTAIHistoryFilesLoader(a0));
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

      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frame::class$ = NULL;
      jmethodID *Frame::mids$ = NULL;
      bool Frame::live$ = false;

      jclass Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_03e04995a6531dd6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_96b1a690846f391d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;)V");
          mids$[mid_init$_066cbc733c0a5e57] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_init$_f331b5c2e1d602c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;Z)V");
          mids$[mid_getAncestor_6f93408d33c3a1aa] = env->getMethodID(cls, "getAncestor", "(I)Lorg/orekit/frames/Frame;");
          mids$[mid_getDepth_570ce0828f81a2c1] = env->getMethodID(cls, "getDepth", "()I");
          mids$[mid_getFrozenFrame_96ed7581df7a3e75] = env->getMethodID(cls, "getFrozenFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getParent_b86f9f61d97a7244] = env->getMethodID(cls, "getParent", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRoot_b86f9f61d97a7244] = env->getStaticMethodID(cls, "getRoot", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getStaticTransformTo_8048aebc71d12954] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransformTo_a413a039e46f1166] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransformProvider_b22bdbe9f9cd12d5] = env->getMethodID(cls, "getTransformProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getTransformTo_1ca8a058da89e769] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransformTo_5d0e5fed1e48b4f7] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_isChildOf_b6ce2293f1753032] = env->getMethodID(cls, "isChildOf", "(Lorg/orekit/frames/Frame;)Z");
          mids$[mid_isPseudoInertial_b108b35ef48e27bd] = env->getMethodID(cls, "isPseudoInertial", "()Z");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03e04995a6531dd6, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96b1a690846f391d, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_066cbc733c0a5e57, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f331b5c2e1d602c8, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame Frame::getAncestor(jint a0) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getAncestor_6f93408d33c3a1aa], a0));
      }

      jint Frame::getDepth() const
      {
        return env->callIntMethod(this$, mids$[mid_getDepth_570ce0828f81a2c1]);
      }

      Frame Frame::getFrozenFrame(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::java::lang::String & a2) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getFrozenFrame_96ed7581df7a3e75], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String Frame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      Frame Frame::getParent() const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getParent_b86f9f61d97a7244]));
      }

      Frame Frame::getRoot()
      {
        jclass cls = env->getClass(initializeClass);
        return Frame(env->callStaticObjectMethod(cls, mids$[mid_getRoot_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::StaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_8048aebc71d12954], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldStaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_a413a039e46f1166], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider Frame::getTransformProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getTransformProvider_b22bdbe9f9cd12d5]));
      }

      ::org::orekit::frames::Transform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransformTo_1ca8a058da89e769], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransformTo_5d0e5fed1e48b4f7], a0.this$, a1.this$));
      }

      jboolean Frame::isChildOf(const Frame & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isChildOf_b6ce2293f1753032], a0.this$);
      }

      jboolean Frame::isPseudoInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPseudoInertial_b108b35ef48e27bd]);
      }

      ::java::lang::String Frame::toString() const
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
    namespace frames {
      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_getDepth(t_Frame *self);
      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getName(t_Frame *self);
      static PyObject *t_Frame_getParent(t_Frame *self);
      static PyObject *t_Frame_getRoot(PyTypeObject *type);
      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getTransformProvider(t_Frame *self);
      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_isPseudoInertial(t_Frame *self);
      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_get__depth(t_Frame *self, void *data);
      static PyObject *t_Frame_get__name(t_Frame *self, void *data);
      static PyObject *t_Frame_get__parent(t_Frame *self, void *data);
      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data);
      static PyObject *t_Frame_get__root(t_Frame *self, void *data);
      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data);
      static PyGetSetDef t_Frame__fields_[] = {
        DECLARE_GET_FIELD(t_Frame, depth),
        DECLARE_GET_FIELD(t_Frame, name),
        DECLARE_GET_FIELD(t_Frame, parent),
        DECLARE_GET_FIELD(t_Frame, pseudoInertial),
        DECLARE_GET_FIELD(t_Frame, root),
        DECLARE_GET_FIELD(t_Frame, transformProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frame__methods_[] = {
        DECLARE_METHOD(t_Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, getAncestor, METH_O),
        DECLARE_METHOD(t_Frame, getDepth, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getFrozenFrame, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getParent, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getRoot, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Frame, getStaticTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getTransformProvider, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, isChildOf, METH_O),
        DECLARE_METHOD(t_Frame, isPseudoInertial, METH_NOARGS),
        DECLARE_METHOD(t_Frame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frame)[] = {
        { Py_tp_methods, t_Frame__methods_ },
        { Py_tp_init, (void *) t_Frame_init_ },
        { Py_tp_getset, t_Frame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frame, t_Frame, Frame);

      void t_Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(Frame), &PY_TYPE_DEF(Frame), module, "Frame", 0);
      }

      void t_Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "class_", make_descriptor(Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "wrapfn_", make_descriptor(t_Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frame::initializeClass, 1)))
          return NULL;
        return t_Frame::wrap_Object(Frame(((t_Frame *) arg)->object.this$));
      }
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
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

      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg)
      {
        jint a0;
        Frame result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getAncestor(a0));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAncestor", arg);
        return NULL;
      }

      static PyObject *t_Frame_getDepth(t_Frame *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDepth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args)
      {
        Frame a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        Frame result((jobject) NULL);

        if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getFrozenFrame(a0, a1, a2));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrozenFrame", args);
        return NULL;
      }

      static PyObject *t_Frame_getName(t_Frame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frame_getParent(t_Frame *self)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getParent());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getRoot(PyTypeObject *type)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Frame::getRoot());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_getTransformProvider(t_Frame *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg)
      {
        Frame a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isChildOf(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isChildOf", arg);
        return NULL;
      }

      static PyObject *t_Frame_isPseudoInertial(t_Frame *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPseudoInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frame_get__depth(t_Frame *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDepth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Frame_get__name(t_Frame *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frame_get__parent(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getParent());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPseudoInertial());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Frame_get__root(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoot());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/SynchronizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SynchronizedRandomGenerator::class$ = NULL;
      jmethodID *SynchronizedRandomGenerator::mids$ = NULL;
      bool SynchronizedRandomGenerator::live$ = false;

      jclass SynchronizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SynchronizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a351c1fd6920cdee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_20012b3010a39c05] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_d7af9aedcdd3845b] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_5adccb493ada08e8] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_dff5885c2c873297] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_2235cd056f5a882b] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_492808a339bfa35f] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_02b241598e254a3f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_99803b0791f320ff] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SynchronizedRandomGenerator::SynchronizedRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a351c1fd6920cdee, a0.this$)) {}

      jboolean SynchronizedRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_b108b35ef48e27bd]);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_20012b3010a39c05], a0.this$);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d7af9aedcdd3845b], a0.this$, a1, a2);
      }

      jdouble SynchronizedRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
      }

      jfloat SynchronizedRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_5adccb493ada08e8]);
      }

      jdouble SynchronizedRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_dff5885c2c873297]);
      }

      jint SynchronizedRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      jint SynchronizedRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_2235cd056f5a882b], a0);
      }

      jlong SynchronizedRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_492808a339bfa35f]);
      }

      jlong SynchronizedRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_02b241598e254a3f], a0);
      }

      void SynchronizedRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
      }

      void SynchronizedRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_99803b0791f320ff], a0);
      }

      void SynchronizedRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3a8e7649f31fdb20], a0);
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
      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args);
      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_SynchronizedRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_SynchronizedRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SynchronizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_SynchronizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SynchronizedRandomGenerator)[] = {
        { Py_tp_methods, t_SynchronizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_SynchronizedRandomGenerator_init_ },
        { Py_tp_getset, t_SynchronizedRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SynchronizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SynchronizedRandomGenerator, t_SynchronizedRandomGenerator, SynchronizedRandomGenerator);

      void t_SynchronizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SynchronizedRandomGenerator), &PY_TYPE_DEF(SynchronizedRandomGenerator), module, "SynchronizedRandomGenerator", 0);
      }

      void t_SynchronizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "class_", make_descriptor(SynchronizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "wrapfn_", make_descriptor(t_SynchronizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SynchronizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_SynchronizedRandomGenerator::wrap_Object(SynchronizedRandomGenerator(((t_SynchronizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SynchronizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        SynchronizedRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = SynchronizedRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine::class$ = NULL;
      jmethodID *OccultationEngine::mids$ = NULL;
      bool OccultationEngine::live$ = false;

      jclass OccultationEngine::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1718479cc62dba49] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_angles_a84eb778aaccfd81] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/utils/OccultationEngine$FieldOccultationAngles;");
          mids$[mid_angles_15d1ad0d8abc3fdb] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/OccultationEngine$OccultationAngles;");
          mids$[mid_getOcculted_6c6c680f468e3316] = env->getMethodID(cls, "getOcculted", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
          mids$[mid_getOccultedRadius_dff5885c2c873297] = env->getMethodID(cls, "getOccultedRadius", "()D");
          mids$[mid_getOcculting_000d48aad6c74b0a] = env->getMethodID(cls, "getOcculting", "()Lorg/orekit/bodies/OneAxisEllipsoid;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OccultationEngine::OccultationEngine(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1718479cc62dba49, a0.this$, a1, a2.this$)) {}

      ::org::orekit::utils::OccultationEngine$FieldOccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$FieldOccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_a84eb778aaccfd81], a0.this$));
      }

      ::org::orekit::utils::OccultationEngine$OccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$OccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_15d1ad0d8abc3fdb], a0.this$));
      }

      ::org::orekit::utils::ExtendedPVCoordinatesProvider OccultationEngine::getOcculted() const
      {
        return ::org::orekit::utils::ExtendedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getOcculted_6c6c680f468e3316]));
      }

      jdouble OccultationEngine::getOccultedRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedRadius_dff5885c2c873297]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid OccultationEngine::getOcculting() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getOcculting_000d48aad6c74b0a]));
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
      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args);
      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data);
      static PyGetSetDef t_OccultationEngine__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine, occulted),
        DECLARE_GET_FIELD(t_OccultationEngine, occultedRadius),
        DECLARE_GET_FIELD(t_OccultationEngine, occulting),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, angles, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculted, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOccultedRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculting, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine)[] = {
        { Py_tp_methods, t_OccultationEngine__methods_ },
        { Py_tp_init, (void *) t_OccultationEngine_init_ },
        { Py_tp_getset, t_OccultationEngine__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine, t_OccultationEngine, OccultationEngine);

      void t_OccultationEngine::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine), &PY_TYPE_DEF(OccultationEngine), module, "OccultationEngine", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "OccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$OccultationAngles)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "FieldOccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles)));
      }

      void t_OccultationEngine::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "class_", make_descriptor(OccultationEngine::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "wrapfn_", make_descriptor(t_OccultationEngine::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine::wrap_Object(OccultationEngine(((t_OccultationEngine *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
        OccultationEngine object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OccultationEngine(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::OccultationEngine$FieldOccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$FieldOccultationAngles::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::utils::OccultationEngine$OccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$OccultationAngles::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "angles", args);
        return NULL;
      }

      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/LutherIntegratorBuilder.h"
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
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegratorBuilder::LutherIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator LutherIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonalContext::class$ = NULL;
            jmethodID *DSSTZonalContext::mids$ = NULL;
            bool DSSTZonalContext::live$ = false;

            jclass DSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_dff5885c2c873297] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBoA_dff5885c2c873297] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_dff5885c2c873297] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getCXO2N2A2_dff5885c2c873297] = env->getMethodID(cls, "getCXO2N2A2", "()D");
                mids$[mid_getHK_dff5885c2c873297] = env->getMethodID(cls, "getHK", "()D");
                mids$[mid_getK2MH2_dff5885c2c873297] = env->getMethodID(cls, "getK2MH2", "()D");
                mids$[mid_getK2MH2O2_dff5885c2c873297] = env->getMethodID(cls, "getK2MH2O2", "()D");
                mids$[mid_getM2aoA_dff5885c2c873297] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_dff5885c2c873297] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoa_dff5885c2c873297] = env->getMethodID(cls, "getMuoa", "()D");
                mids$[mid_getOON2A2_dff5885c2c873297] = env->getMethodID(cls, "getOON2A2", "()D");
                mids$[mid_getOoAB_dff5885c2c873297] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getRoa_dff5885c2c873297] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getX2ON2A2XP1_dff5885c2c873297] = env->getMethodID(cls, "getX2ON2A2XP1", "()D");
                mids$[mid_getX3ON2A_dff5885c2c873297] = env->getMethodID(cls, "getX3ON2A", "()D");
                mids$[mid_getXON2A2_dff5885c2c873297] = env->getMethodID(cls, "getXON2A2", "()D");
                mids$[mid_getXX_dff5885c2c873297] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getXXX_dff5885c2c873297] = env->getMethodID(cls, "getXXX", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTZonalContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getCXO2N2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCXO2N2A2_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getHK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHK_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getK2MH2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getK2MH2O2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2O2_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getMuoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoa_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getOON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOON2A2_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getX2ON2A2XP1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX2ON2A2XP1_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getX3ON2A() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX3ON2A_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getXON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXON2A2_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_dff5885c2c873297]);
            }

            jdouble DSSTZonalContext::getXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXXX_dff5885c2c873297]);
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
            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data);
            static PyGetSetDef t_DSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xXX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_DSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonalContext)[] = {
              { Py_tp_methods, t_DSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTZonalContext, t_DSSTZonalContext, DSSTZonalContext);

            void t_DSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonalContext), &PY_TYPE_DEF(DSSTZonalContext), module, "DSSTZonalContext", 0);
            }

            void t_DSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "class_", make_descriptor(DSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "wrapfn_", make_descriptor(t_DSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_DSSTZonalContext::wrap_Object(DSSTZonalContext(((t_DSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXXX());
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
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *TimeStampedCacheException::class$ = NULL;
      jmethodID *TimeStampedCacheException::mids$ = NULL;
      bool TimeStampedCacheException::live$ = false;

      jclass TimeStampedCacheException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/TimeStampedCacheException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b82e021312358546] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_224a394c2fd91cdf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/errors/OrekitException;)V");
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_6ecc3fd6067c266c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_unwrap_98ab925763c8c570] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/TimeStampedCacheException;");
          mids$[mid_unwrap_3e62516228911b5b] = env->getStaticMethodID(cls, "unwrap", "(Lorg/orekit/errors/OrekitException;)Lorg/orekit/errors/TimeStampedCacheException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_b82e021312358546, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::orekit::errors::OrekitException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_224a394c2fd91cdf, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_6ecc3fd6067c266c, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_98ab925763c8c570], a0.this$));
      }

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::orekit::errors::OrekitException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_3e62516228911b5b], a0.this$));
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
      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_TimeStampedCacheException__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCacheException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, unwrap, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCacheException)[] = {
        { Py_tp_methods, t_TimeStampedCacheException__methods_ },
        { Py_tp_init, (void *) t_TimeStampedCacheException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCacheException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(TimeStampedCacheException, t_TimeStampedCacheException, TimeStampedCacheException);

      void t_TimeStampedCacheException::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCacheException), &PY_TYPE_DEF(TimeStampedCacheException), module, "TimeStampedCacheException", 0);
      }

      void t_TimeStampedCacheException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "class_", make_descriptor(TimeStampedCacheException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "wrapfn_", make_descriptor(t_TimeStampedCacheException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCacheException::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCacheException::wrap_Object(TimeStampedCacheException(((t_TimeStampedCacheException *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCacheException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1, a2));
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

      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
        }

        return callSuper(type, "unwrap", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonStateMapper.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonStateMapper::class$ = NULL;
        jmethodID *PythonStateMapper::mids$ = NULL;
        bool PythonStateMapper::live$ = false;

        jclass PythonStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10615b9bb182a8f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_618a7c03db72e57e] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapStateToArray_747d586861d6528b] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonStateMapper::PythonStateMapper(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::StateMapper(env->newObject(initializeClass, &mids$, mid_init$_10615b9bb182a8f3, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonStateMapper::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self);
        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data);
        static PyGetSetDef t_PythonStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonStateMapper, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonStateMapper)[] = {
          { Py_tp_methods, t_PythonStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonStateMapper_init_ },
          { Py_tp_getset, t_PythonStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::StateMapper),
          NULL
        };

        DEFINE_TYPE(PythonStateMapper, t_PythonStateMapper, PythonStateMapper);

        void t_PythonStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonStateMapper), &PY_TYPE_DEF(PythonStateMapper), module, "PythonStateMapper", 1);
        }

        void t_PythonStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "class_", make_descriptor(PythonStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "wrapfn_", make_descriptor(t_PythonStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonStateMapper::wrap_Object(PythonStateMapper(((t_PythonStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonStateMapper object((jobject) NULL);

          if (!parseArgs(args, "kDKKkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
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

        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodType::class$ = NULL;
          jmethodID *OdMethodType::mids$ = NULL;
          bool OdMethodType::live$ = false;
          OdMethodType *OdMethodType::BWLS = NULL;
          OdMethodType *OdMethodType::EKF = NULL;
          OdMethodType *OdMethodType::SF = NULL;
          OdMethodType *OdMethodType::SRIF = NULL;
          OdMethodType *OdMethodType::SSEM = NULL;

          jclass OdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_ec9c6576bd5472f8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_values_03c700257a25b5f6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BWLS = new OdMethodType(env->getStaticObjectField(cls, "BWLS", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              EKF = new OdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SF = new OdMethodType(env->getStaticObjectField(cls, "SF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SRIF = new OdMethodType(env->getStaticObjectField(cls, "SRIF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SSEM = new OdMethodType(env->getStaticObjectField(cls, "SSEM", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodType OdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec9c6576bd5472f8], a0.this$));
          }

          JArray< OdMethodType > OdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_03c700257a25b5f6]));
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
          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args);
          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OdMethodType_values(PyTypeObject *type);
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data);
          static PyGetSetDef t_OdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodType__methods_[] = {
            DECLARE_METHOD(t_OdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_OdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodType)[] = {
            { Py_tp_methods, t_OdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OdMethodType, t_OdMethodType, OdMethodType);
          PyObject *t_OdMethodType::wrap_Object(const OdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodType), &PY_TYPE_DEF(OdMethodType), module, "OdMethodType", 0);
          }

          void t_OdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "class_", make_descriptor(OdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "wrapfn_", make_descriptor(t_OdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(OdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "BWLS", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::BWLS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "EKF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SRIF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SRIF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SSEM", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SSEM)));
          }

          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodType::initializeClass, 1)))
              return NULL;
            return t_OdMethodType::wrap_Object(OdMethodType(((t_OdMethodType *) arg)->object.this$));
          }
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::valueOf(a0));
              return t_OdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OdMethodType_values(PyTypeObject *type)
          {
            JArray< OdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_OdMethodType::wrap_jobject);
          }
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data)
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
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractIntegrator::class$ = NULL;
      jmethodID *AbstractIntegrator::mids$ = NULL;
      bool AbstractIntegrator::live$ = false;

      jclass AbstractIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_1acd9de872b3c9bd] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_ff5dc983cf5314d8] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_613136788c102fe1] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_125ce48de7dbfde5] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getCurrentSignedStepsize_dff5885c2c873297] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_2afa36052df4765d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_72cfc96c3e58d15e] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_99803b0791f320ff] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_sanityChecks_9a885fd893969c04] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
          mids$[mid_initIntegration_3c1cc820e563e3e9] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setStepStart_250c80d95e429c01] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_getStepSize_dff5885c2c873297] = env->getMethodID(cls, "getStepSize", "()D");
          mids$[mid_setIsLastStep_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_acceptStep_2edfe476497dee0b] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_isLastStep_b108b35ef48e27bd] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_b108b35ef48e27bd] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_setStepSize_17db3a65980d3441] = env->getMethodID(cls, "setStepSize", "(D)V");
          mids$[mid_getEvaluationsCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getEquations_34621ba0fc499087] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/ExpandableODE;");
          mids$[mid_setStateInitialized_bd04c9335fb9e4cf] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_1acd9de872b3c9bd], a0.this$);
      }

      void AbstractIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_ff5dc983cf5314d8], a0.this$);
      }

      void AbstractIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_613136788c102fe1], a0.this$);
      }

      void AbstractIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0fa09c18fee449d5]);
      }

      void AbstractIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0fa09c18fee449d5]);
      }

      void AbstractIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0fa09c18fee449d5]);
      }

      JArray< jdouble > AbstractIntegrator::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_125ce48de7dbfde5], a0, a1.this$));
      }

      jdouble AbstractIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_dff5885c2c873297]);
      }

      jint AbstractIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
      }

      ::java::util::List AbstractIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_2afa36052df4765d]));
      }

      jint AbstractIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
      }

      ::java::lang::String AbstractIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::java::util::List AbstractIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_2afa36052df4765d]));
      }

      ::java::util::List AbstractIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_2afa36052df4765d]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative AbstractIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_72cfc96c3e58d15e]));
      }

      void AbstractIntegrator::setMaxEvaluations(jint a0) const
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
      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args);
      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data);
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data);
      static PyGetSetDef t_AbstractIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_AbstractIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractIntegrator)[] = {
        { Py_tp_methods, t_AbstractIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractIntegrator, t_AbstractIntegrator, AbstractIntegrator);

      void t_AbstractIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractIntegrator), &PY_TYPE_DEF(AbstractIntegrator), module, "AbstractIntegrator", 0);
      }

      void t_AbstractIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "class_", make_descriptor(AbstractIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "wrapfn_", make_descriptor(t_AbstractIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractIntegrator::wrap_Object(AbstractIntegrator(((t_AbstractIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args)
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

      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg)
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

      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessagesParser::class$ = NULL;
          jmethodID *IgsSsrMessagesParser::mids$ = NULL;
          bool IgsSsrMessagesParser::live$ = false;

          jclass IgsSsrMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_b909afe8923771a6] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_bbc828ae54845950] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessagesParser::IgsSsrMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}
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
          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IgsSsrMessagesParser__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessagesParser)[] = {
            { Py_tp_methods, t_IgsSsrMessagesParser__methods_ },
            { Py_tp_init, (void *) t_IgsSsrMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessagesParser, t_IgsSsrMessagesParser, IgsSsrMessagesParser);

          void t_IgsSsrMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessagesParser), &PY_TYPE_DEF(IgsSsrMessagesParser), module, "IgsSsrMessagesParser", 0);
          }

          void t_IgsSsrMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "class_", make_descriptor(IgsSsrMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "wrapfn_", make_descriptor(t_IgsSsrMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessagesParser::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessagesParser::wrap_Object(IgsSsrMessagesParser(((t_IgsSsrMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            IgsSsrMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = IgsSsrMessagesParser(a0));
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
