#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularAzEl::class$ = NULL;
        jmethodID *AngularAzEl::mids$ = NULL;
        bool AngularAzEl::live$ = false;
        ::java::lang::String *AngularAzEl::MEASUREMENT_TYPE = NULL;

        jclass AngularAzEl::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularAzEl");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8a2b2ceb747ef74a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_b070efa02e5e2595] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularAzEl::AngularAzEl(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_8a2b2ceb747ef74a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularAzEl::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_b070efa02e5e2595], a0.this$));
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
        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args);
        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg);
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data);
        static PyGetSetDef t_AngularAzEl__fields_[] = {
          DECLARE_GET_FIELD(t_AngularAzEl, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularAzEl__methods_[] = {
          DECLARE_METHOD(t_AngularAzEl, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularAzEl, getObservedLineOfSight, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularAzEl)[] = {
          { Py_tp_methods, t_AngularAzEl__methods_ },
          { Py_tp_init, (void *) t_AngularAzEl_init_ },
          { Py_tp_getset, t_AngularAzEl__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularAzEl)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularAzEl, t_AngularAzEl, AngularAzEl);
        PyObject *t_AngularAzEl::wrap_Object(const AngularAzEl& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularAzEl::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularAzEl::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularAzEl), &PY_TYPE_DEF(AngularAzEl), module, "AngularAzEl", 0);
        }

        void t_AngularAzEl::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "class_", make_descriptor(AngularAzEl::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "wrapfn_", make_descriptor(t_AngularAzEl::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularAzEl::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularAzEl::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularAzEl::initializeClass, 1)))
            return NULL;
          return t_AngularAzEl::wrap_Object(AngularAzEl(((t_AngularAzEl *) arg)->object.this$));
        }
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularAzEl::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
          AngularAzEl object((jobject) NULL);

          if (!parseArgs(args, "kk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = AngularAzEl(a0, a1, a2, a3, a4, a5));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *Action::class$ = NULL;
        jmethodID *Action::mids$ = NULL;
        bool Action::live$ = false;
        Action *Action::CONTINUE = NULL;
        Action *Action::RESET_DERIVATIVES = NULL;
        Action *Action::RESET_EVENTS = NULL;
        Action *Action::RESET_STATE = NULL;
        Action *Action::STOP = NULL;

        jclass Action::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/Action");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_2039bb96ded53a45] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_values_ac8f7160b7e3c449] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CONTINUE = new Action(env->getStaticObjectField(cls, "CONTINUE", "Lorg/hipparchus/ode/events/Action;"));
            RESET_DERIVATIVES = new Action(env->getStaticObjectField(cls, "RESET_DERIVATIVES", "Lorg/hipparchus/ode/events/Action;"));
            RESET_EVENTS = new Action(env->getStaticObjectField(cls, "RESET_EVENTS", "Lorg/hipparchus/ode/events/Action;"));
            RESET_STATE = new Action(env->getStaticObjectField(cls, "RESET_STATE", "Lorg/hipparchus/ode/events/Action;"));
            STOP = new Action(env->getStaticObjectField(cls, "STOP", "Lorg/hipparchus/ode/events/Action;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Action Action::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Action(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2039bb96ded53a45], a0.this$));
        }

        JArray< Action > Action::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Action >(env->callStaticObjectMethod(cls, mids$[mid_values_ac8f7160b7e3c449]));
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
        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_of_(t_Action *self, PyObject *args);
        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Action_values(PyTypeObject *type);
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data);
        static PyGetSetDef t_Action__fields_[] = {
          DECLARE_GET_FIELD(t_Action, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Action__methods_[] = {
          DECLARE_METHOD(t_Action, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, of_, METH_VARARGS),
          DECLARE_METHOD(t_Action, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Action, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Action)[] = {
          { Py_tp_methods, t_Action__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Action__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Action)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Action, t_Action, Action);
        PyObject *t_Action::wrap_Object(const Action& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Action::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Action::install(PyObject *module)
        {
          installType(&PY_TYPE(Action), &PY_TYPE_DEF(Action), module, "Action", 0);
        }

        void t_Action::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "class_", make_descriptor(Action::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "wrapfn_", make_descriptor(t_Action::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "boxfn_", make_descriptor(boxObject));
          env->getClass(Action::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "CONTINUE", make_descriptor(t_Action::wrap_Object(*Action::CONTINUE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_DERIVATIVES", make_descriptor(t_Action::wrap_Object(*Action::RESET_DERIVATIVES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_EVENTS", make_descriptor(t_Action::wrap_Object(*Action::RESET_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_STATE", make_descriptor(t_Action::wrap_Object(*Action::RESET_STATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "STOP", make_descriptor(t_Action::wrap_Object(*Action::STOP)));
        }

        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Action::initializeClass, 1)))
            return NULL;
          return t_Action::wrap_Object(Action(((t_Action *) arg)->object.this$));
        }
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Action::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Action_of_(t_Action *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Action result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::Action::valueOf(a0));
            return t_Action::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Action_values(PyTypeObject *type)
        {
          JArray< Action > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::Action::values());
          return JArray<jobject>(result.this$).wrap(t_Action::wrap_jobject);
        }
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader::class$ = NULL;
      jmethodID *JPLEphemeridesLoader::mids$ = NULL;
      bool JPLEphemeridesLoader::live$ = false;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES = NULL;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES = NULL;

      jclass JPLEphemeridesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44eca415a49a98bf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)V");
          mids$[mid_init$_48fed0a5cee98633] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getLoadedAstronomicalUnit_456d9a2f64d6b28d] = env->getMethodID(cls, "getLoadedAstronomicalUnit", "()D");
          mids$[mid_getLoadedConstant_b5319ff45c2cd537] = env->getMethodID(cls, "getLoadedConstant", "([Ljava/lang/String;)D");
          mids$[mid_getLoadedEarthMoonMassRatio_456d9a2f64d6b28d] = env->getMethodID(cls, "getLoadedEarthMoonMassRatio", "()D");
          mids$[mid_getLoadedGravitationalCoefficient_01677f18df5d5496] = env->getMethodID(cls, "getLoadedGravitationalCoefficient", "(Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)D");
          mids$[mid_getMaxChunksDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxChunksDuration", "()D");
          mids$[mid_loadCelestialBody_29f199e59c05cc68] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DE_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_DE_SUPPORTED_NAMES", "Ljava/lang/String;"));
          DEFAULT_INPOP_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INPOP_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_44eca415a49a98bf, a0.this$, a1.this$)) {}

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_48fed0a5cee98633, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      jdouble JPLEphemeridesLoader::getLoadedAstronomicalUnit() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedAstronomicalUnit_456d9a2f64d6b28d]);
      }

      jdouble JPLEphemeridesLoader::getLoadedConstant(const JArray< ::java::lang::String > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedConstant_b5319ff45c2cd537], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getLoadedEarthMoonMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedEarthMoonMassRatio_456d9a2f64d6b28d]);
      }

      jdouble JPLEphemeridesLoader::getLoadedGravitationalCoefficient(const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedGravitationalCoefficient_01677f18df5d5496], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getMaxChunksDuration() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxChunksDuration_456d9a2f64d6b28d]);
      }

      ::org::orekit::bodies::CelestialBody JPLEphemeridesLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_29f199e59c05cc68], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedAstronomicalUnit),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedEarthMoonMassRatio),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, maxChunksDuration),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedAstronomicalUnit, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedConstant, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedEarthMoonMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedGravitationalCoefficient, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getMaxChunksDuration, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader__methods_ },
        { Py_tp_init, (void *) t_JPLEphemeridesLoader_init_ },
        { Py_tp_getset, t_JPLEphemeridesLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader, t_JPLEphemeridesLoader, JPLEphemeridesLoader);

      void t_JPLEphemeridesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader), &PY_TYPE_DEF(JPLEphemeridesLoader), module, "JPLEphemeridesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "RawPVProvider", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "EphemerisType", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType)));
      }

      void t_JPLEphemeridesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "class_", make_descriptor(JPLEphemeridesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_DE_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_INPOP_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES)));
      }

      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader::wrap_Object(JPLEphemeridesLoader(((t_JPLEphemeridesLoader *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            ::org::orekit::frames::Frame a4((jobject) NULL);
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sKkkk", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_, &a2, &a3, &a4))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1, a2, a3, a4));
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

      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        JArray< ::java::lang::String > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[s", &a0))
        {
          OBJ_CALL(result = self->object.getLoadedConstant(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedConstant", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &p0, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
        {
          OBJ_CALL(result = self->object.getLoadedGravitationalCoefficient(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedGravitationalCoefficient", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeInterpolator::class$ = NULL;
      jmethodID *AttitudeInterpolator::mids$ = NULL;
      bool AttitudeInterpolator::live$ = false;

      jclass AttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_dcb9f1b6fb413a61] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_c8e4b57f7805ef06] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_f9957124dd7f719f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudeInterpolator::AttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_dcb9f1b6fb413a61, a0.this$, a1.this$)) {}

      ::org::orekit::time::TimeInterpolator AttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_c8e4b57f7805ef06]));
      }

      ::org::orekit::frames::Frame AttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
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
      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args);
      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data);
      static PyGetSetDef t_AttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeInterpolator)[] = {
        { Py_tp_methods, t_AttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AttitudeInterpolator_init_ },
        { Py_tp_getset, t_AttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AttitudeInterpolator, t_AttitudeInterpolator, AttitudeInterpolator);
      PyObject *t_AttitudeInterpolator::wrap_Object(const AttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeInterpolator), &PY_TYPE_DEF(AttitudeInterpolator), module, "AttitudeInterpolator", 0);
      }

      void t_AttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "class_", make_descriptor(AttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "wrapfn_", make_descriptor(t_AttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AttitudeInterpolator::wrap_Object(AttitudeInterpolator(((t_AttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        AttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
        {
          INT_CALL(object = AttitudeInterpolator(a0, a1));
          self->object = object;
          self->parameters[0] = ::org::orekit::attitudes::PY_TYPE(Attitude);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
      }

      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesReader::class$ = NULL;
          jmethodID *OceanTidesReader::mids$ = NULL;
          bool OceanTidesReader::live$ = false;

          jclass OceanTidesReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canAdd_638a6e940edd0ad7] = env->getMethodID(cls, "canAdd", "(II)Z");
              mids$[mid_getMaxParseDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getWaves_a6156df500549a58] = env->getMethodID(cls, "getWaves", "()Ljava/util/List;");
              mids$[mid_setMaxParseDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_addWaveCoefficients_38819d7d75f86e45] = env->getMethodID(cls, "addWaveCoefficients", "(IIIDDDDILjava/lang/String;)V");
              mids$[mid_endParse_7ae3461a92a43152] = env->getMethodID(cls, "endParse", "()V");
              mids$[mid_startParse_e939c6558ae8d313] = env->getMethodID(cls, "startParse", "(Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesReader::OceanTidesReader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          jboolean OceanTidesReader::canAdd(jint a0, jint a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_canAdd_638a6e940edd0ad7], a0, a1);
          }

          jint OceanTidesReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_f2f64475e4580546]);
          }

          jint OceanTidesReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_f2f64475e4580546]);
          }

          ::java::lang::String OceanTidesReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
          }

          ::java::util::List OceanTidesReader::getWaves() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getWaves_a6156df500549a58]));
          }

          void OceanTidesReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_0a2a1ac2721c0336], a0);
          }

          void OceanTidesReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_0a2a1ac2721c0336], a0);
          }

          jboolean OceanTidesReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args);
          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data);
          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data);
          static PyGetSetDef t_OceanTidesReader__fields_[] = {
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseOrder),
            DECLARE_GET_FIELD(t_OceanTidesReader, supportedNames),
            DECLARE_GET_FIELD(t_OceanTidesReader, waves),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesReader__methods_[] = {
            DECLARE_METHOD(t_OceanTidesReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, canAdd, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getWaves, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesReader)[] = {
            { Py_tp_methods, t_OceanTidesReader__methods_ },
            { Py_tp_init, (void *) t_OceanTidesReader_init_ },
            { Py_tp_getset, t_OceanTidesReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesReader, t_OceanTidesReader, OceanTidesReader);

          void t_OceanTidesReader::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesReader), &PY_TYPE_DEF(OceanTidesReader), module, "OceanTidesReader", 0);
          }

          void t_OceanTidesReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "class_", make_descriptor(OceanTidesReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "wrapfn_", make_descriptor(t_OceanTidesReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesReader::initializeClass, 1)))
              return NULL;
            return t_OceanTidesReader::wrap_Object(OceanTidesReader(((t_OceanTidesReader *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanTidesReader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = OceanTidesReader(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.canAdd(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "canAdd", args);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
          }

          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseIonosphericDelayModifier::class$ = NULL;
          jmethodID *PhaseIonosphericDelayModifier::mids$ = NULL;
          bool PhaseIonosphericDelayModifier::live$ = false;

          jclass PhaseIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70ec985998eac326] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseIonosphericDelayModifier::PhaseIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70ec985998eac326, a0.this$, a1)) {}

          ::java::util::List PhaseIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void PhaseIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void PhaseIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self);
          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseIonosphericDelayModifier, t_PhaseIonosphericDelayModifier, PhaseIonosphericDelayModifier);

          void t_PhaseIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseIonosphericDelayModifier), &PY_TYPE_DEF(PhaseIonosphericDelayModifier), module, "PhaseIonosphericDelayModifier", 0);
          }

          void t_PhaseIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "class_", make_descriptor(PhaseIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseIonosphericDelayModifier::wrap_Object(PhaseIonosphericDelayModifier(((t_PhaseIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            PhaseIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/data/PythonReaderOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/Reader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonReaderOpener::class$ = NULL;
      jmethodID *PythonReaderOpener::mids$ = NULL;
      bool PythonReaderOpener::live$ = false;

      jclass PythonReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_8476c88b3f0eb61c] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonReaderOpener::PythonReaderOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonReaderOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonReaderOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonReaderOpener::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self);
      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args);
      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data);
      static PyGetSetDef t_PythonReaderOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonReaderOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonReaderOpener__methods_[] = {
        DECLARE_METHOD(t_PythonReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonReaderOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonReaderOpener)[] = {
        { Py_tp_methods, t_PythonReaderOpener__methods_ },
        { Py_tp_init, (void *) t_PythonReaderOpener_init_ },
        { Py_tp_getset, t_PythonReaderOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonReaderOpener, t_PythonReaderOpener, PythonReaderOpener);

      void t_PythonReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonReaderOpener), &PY_TYPE_DEF(PythonReaderOpener), module, "PythonReaderOpener", 1);
      }

      void t_PythonReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "class_", make_descriptor(PythonReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "wrapfn_", make_descriptor(t_PythonReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonReaderOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/Reader;", (void *) t_PythonReaderOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonReaderOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonReaderOpener::initializeClass, 1)))
          return NULL;
        return t_PythonReaderOpener::wrap_Object(PythonReaderOpener(((t_PythonReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonReaderOpener object((jobject) NULL);

        INT_CALL(object = PythonReaderOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::Reader value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::Reader::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data)
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
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *VisibilityTrigger::class$ = NULL;
        jmethodID *VisibilityTrigger::mids$ = NULL;
        bool VisibilityTrigger::live$ = false;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = NULL;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV = NULL;

        jclass VisibilityTrigger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/VisibilityTrigger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_radiusCorrection_0ba5fed9597b693e] = env->getMethodID(cls, "radiusCorrection", "(D)D");
            mids$[mid_valueOf_18a6a01ed4582881] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/VisibilityTrigger;");
            mids$[mid_values_6d4fcad74b42991e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/VisibilityTrigger;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            VISIBLE_ONLY_WHEN_FULLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble VisibilityTrigger::radiusCorrection(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_radiusCorrection_0ba5fed9597b693e], a0);
        }

        VisibilityTrigger VisibilityTrigger::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return VisibilityTrigger(env->callStaticObjectMethod(cls, mids$[mid_valueOf_18a6a01ed4582881], a0.this$));
        }

        JArray< VisibilityTrigger > VisibilityTrigger::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< VisibilityTrigger >(env->callStaticObjectMethod(cls, mids$[mid_values_6d4fcad74b42991e]));
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
        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args);
        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg);
        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type);
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data);
        static PyGetSetDef t_VisibilityTrigger__fields_[] = {
          DECLARE_GET_FIELD(t_VisibilityTrigger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_VisibilityTrigger__methods_[] = {
          DECLARE_METHOD(t_VisibilityTrigger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, of_, METH_VARARGS),
          DECLARE_METHOD(t_VisibilityTrigger, radiusCorrection, METH_O),
          DECLARE_METHOD(t_VisibilityTrigger, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(VisibilityTrigger)[] = {
          { Py_tp_methods, t_VisibilityTrigger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_VisibilityTrigger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(VisibilityTrigger)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(VisibilityTrigger, t_VisibilityTrigger, VisibilityTrigger);
        PyObject *t_VisibilityTrigger::wrap_Object(const VisibilityTrigger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_VisibilityTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_VisibilityTrigger::install(PyObject *module)
        {
          installType(&PY_TYPE(VisibilityTrigger), &PY_TYPE_DEF(VisibilityTrigger), module, "VisibilityTrigger", 0);
        }

        void t_VisibilityTrigger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "class_", make_descriptor(VisibilityTrigger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "wrapfn_", make_descriptor(t_VisibilityTrigger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "boxfn_", make_descriptor(boxObject));
          env->getClass(VisibilityTrigger::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV)));
        }

        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, VisibilityTrigger::initializeClass, 1)))
            return NULL;
          return t_VisibilityTrigger::wrap_Object(VisibilityTrigger(((t_VisibilityTrigger *) arg)->object.this$));
        }
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, VisibilityTrigger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.radiusCorrection(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "radiusCorrection", arg);
          return NULL;
        }

        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          VisibilityTrigger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::valueOf(a0));
            return t_VisibilityTrigger::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type)
        {
          JArray< VisibilityTrigger > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::values());
          return JArray<jobject>(result.this$).wrap(t_VisibilityTrigger::wrap_jobject);
        }
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/PythonGeoMagneticFields.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getField_391592e224573f6b] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_e74dfaa8c09512d5] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_e74dfaa8c09512d5] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGeoMagneticFields::PythonGeoMagneticFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonGeoMagneticFields::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonGeoMagneticFields::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonGeoMagneticFields::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1060::class$ = NULL;
              jmethodID *Rtcm1060::mids$ = NULL;
              bool Rtcm1060::live$ = false;

              jclass Rtcm1060::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_68ffe0e149823d38] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1060::Rtcm1060(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_68ffe0e149823d38, a0, a1.this$, a2.this$)) {}
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
          namespace rtcm {
            namespace correction {
              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args);
              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data);
              static PyGetSetDef t_Rtcm1060__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1060, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1060__methods_[] = {
                DECLARE_METHOD(t_Rtcm1060, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1060)[] = {
                { Py_tp_methods, t_Rtcm1060__methods_ },
                { Py_tp_init, (void *) t_Rtcm1060_init_ },
                { Py_tp_getset, t_Rtcm1060__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1060)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1060, t_Rtcm1060, Rtcm1060);
              PyObject *t_Rtcm1060::wrap_Object(const Rtcm1060& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1060::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1060::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1060), &PY_TYPE_DEF(Rtcm1060), module, "Rtcm1060", 0);
              }

              void t_Rtcm1060::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "class_", make_descriptor(Rtcm1060::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "wrapfn_", make_descriptor(t_Rtcm1060::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1060::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1060::wrap_Object(Rtcm1060(((t_Rtcm1060 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1060::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1060 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1060(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data)
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
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthShape::class$ = NULL;
        jmethodID *EarthShape::mids$ = NULL;
        bool EarthShape::live$ = false;

        jclass EarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEllipsoid_1eef7b7a6c58a550] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::ReferenceEllipsoid EarthShape::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_1eef7b7a6c58a550]));
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
        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self);
        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data);
        static PyGetSetDef t_EarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_EarthShape, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthShape__methods_[] = {
          DECLARE_METHOD(t_EarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, getEllipsoid, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthShape)[] = {
          { Py_tp_methods, t_EarthShape__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthShape)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::BodyShape),
          NULL
        };

        DEFINE_TYPE(EarthShape, t_EarthShape, EarthShape);

        void t_EarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthShape), &PY_TYPE_DEF(EarthShape), module, "EarthShape", 0);
        }

        void t_EarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "class_", make_descriptor(EarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "wrapfn_", make_descriptor(t_EarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthShape::initializeClass, 1)))
            return NULL;
          return t_EarthShape::wrap_Object(EarthShape(((t_EarthShape *) arg)->object.this$));
        }
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Byte.h"
#include "java/lang/Byte.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Byte::class$ = NULL;
    jmethodID *Byte::mids$ = NULL;
    bool Byte::live$ = false;
    jint Byte::BYTES = (jint) 0;
    jbyte Byte::MAX_VALUE = (jbyte) 0;
    jbyte Byte::MIN_VALUE = (jbyte) 0;
    jint Byte::SIZE = (jint) 0;
    ::java::lang::Class *Byte::TYPE = NULL;

    jclass Byte::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Byte");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_4b32f73c96e6d9ca] = env->getMethodID(cls, "<init>", "(B)V");
        mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_6eb7a84e3f305bdd] = env->getStaticMethodID(cls, "compare", "(BB)I");
        mids$[mid_compareTo_8b33e201affb0d43] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Byte;)I");
        mids$[mid_compareUnsigned_6eb7a84e3f305bdd] = env->getStaticMethodID(cls, "compareUnsigned", "(BB)I");
        mids$[mid_decode_1bf9b0afcfdc6b2c] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_1ad9bb2e063e2c13] = env->getStaticMethodID(cls, "hashCode", "(B)I");
        mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseByte_6779063f5581c081] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;)B");
        mids$[mid_parseByte_7a0decc209a90dc0] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;I)B");
        mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_807d3a3b51bfd2ae] = env->getStaticMethodID(cls, "toString", "(B)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_1ad9bb2e063e2c13] = env->getStaticMethodID(cls, "toUnsignedInt", "(B)I");
        mids$[mid_toUnsignedLong_af453fced9e74b01] = env->getStaticMethodID(cls, "toUnsignedLong", "(B)J");
        mids$[mid_valueOf_1bf9b0afcfdc6b2c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_valueOf_1c6aa8e9f862b561] = env->getStaticMethodID(cls, "valueOf", "(B)Ljava/lang/Byte;");
        mids$[mid_valueOf_0896f1755b6a6480] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Byte;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticByteField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticByteField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Byte::Byte(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Byte::Byte(jbyte a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_4b32f73c96e6d9ca, a0)) {}

    jbyte Byte::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
    }

    jint Byte::compare(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_6eb7a84e3f305bdd], a0, a1);
    }

    jint Byte::compareTo(const Byte & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_8b33e201affb0d43], a0.this$);
    }

    jint Byte::compareUnsigned(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_6eb7a84e3f305bdd], a0, a1);
    }

    Byte Byte::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_decode_1bf9b0afcfdc6b2c], a0.this$));
    }

    jdouble Byte::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
    }

    jboolean Byte::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jfloat Byte::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
    }

    jint Byte::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Byte::hashCode(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_1ad9bb2e063e2c13], a0);
    }

    jint Byte::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
    }

    jlong Byte::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_6779063f5581c081], a0.this$);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_7a0decc209a90dc0], a0.this$, a1);
    }

    jshort Byte::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
    }

    ::java::lang::String Byte::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Byte::toString(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_807d3a3b51bfd2ae], a0));
    }

    jint Byte::toUnsignedInt(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_1ad9bb2e063e2c13], a0);
    }

    jlong Byte::toUnsignedLong(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_af453fced9e74b01], a0);
    }

    Byte Byte::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1bf9b0afcfdc6b2c], a0.this$));
    }

    Byte Byte::valueOf(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1c6aa8e9f862b561], a0));
    }

    Byte Byte::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0896f1755b6a6480], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg);
    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Byte__methods_[] = {
      DECLARE_METHOD(t_Byte, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, compareTo, METH_O),
      DECLARE_METHOD(t_Byte, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, equals, METH_VARARGS),
      DECLARE_METHOD(t_Byte, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, parseByte, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Byte)[] = {
      { Py_tp_methods, t_Byte__methods_ },
      { Py_tp_init, (void *) t_Byte_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Byte)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Byte, t_Byte, Byte);

    void t_Byte::install(PyObject *module)
    {
      installType(&PY_TYPE(Byte), &PY_TYPE_DEF(Byte), module, "Byte", 0);
    }

    void t_Byte::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "class_", make_descriptor(Byte::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "wrapfn_", make_descriptor(unboxByte));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "boxfn_", make_descriptor(boxByte));
      env->getClass(Byte::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "BYTES", make_descriptor(Byte::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MAX_VALUE", make_descriptor(Byte::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MIN_VALUE", make_descriptor(Byte::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "SIZE", make_descriptor(Byte::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Byte::TYPE)));
    }

    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Byte::initializeClass, 1)))
        return NULL;
      return t_Byte::wrap_Object(Byte(((t_Byte *) arg)->object.this$));
    }
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Byte::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Byte(a0));
            self->object = object;
            break;
          }
        }
        {
          jbyte a0;
          Byte object((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            INT_CALL(object = Byte(a0));
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

    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg)
    {
      Byte a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Byte), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Byte result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::decode(a0));
        return t_Byte::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jint result;

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jbyte result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseByte", args);
      return NULL;
    }

    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jint result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jlong result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        {
          jbyte a0;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0, a1));
            return t_Byte::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BrentSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BrentSolver::class$ = NULL;
        jmethodID *BrentSolver::mids$ = NULL;
        bool BrentSolver::live$ = false;

        jclass BrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentSolver::BrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        BrentSolver::BrentSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}
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
        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args);
        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data);
        static PyGetSetDef t_BrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentSolver__methods_[] = {
          DECLARE_METHOD(t_BrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentSolver)[] = {
          { Py_tp_methods, t_BrentSolver__methods_ },
          { Py_tp_init, (void *) t_BrentSolver_init_ },
          { Py_tp_getset, t_BrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BrentSolver, t_BrentSolver, BrentSolver);
        PyObject *t_BrentSolver::wrap_Object(const BrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentSolver), &PY_TYPE_DEF(BrentSolver), module, "BrentSolver", 0);
        }

        void t_BrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "class_", make_descriptor(BrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "wrapfn_", make_descriptor(t_BrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentSolver::initializeClass, 1)))
            return NULL;
          return t_BrentSolver::wrap_Object(BrentSolver(((t_BrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BrentSolver object((jobject) NULL);

              INT_CALL(object = BrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BrentSolver(a0));
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
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentSolver(a0, a1));
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
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BrentSolver(a0, a1, a2));
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
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolverUtils.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolverUtils::class$ = NULL;
        jmethodID *UnivariateSolverUtils::mids$ = NULL;
        bool UnivariateSolverUtils::live$ = false;

        jclass UnivariateSolverUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolverUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_bracket_0bf261f4799c8aa5] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)[D");
            mids$[mid_bracket_27ea5dab28f50cf5] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_d63e4b4284454f95] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_96142a24a6019c04] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDI)[D");
            mids$[mid_bracket_2dfd1b59f21ce481] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDDDI)[D");
            mids$[mid_bracket_70f142d93ed41d85] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_forceSide_dced817eae0dbc88] = env->getStaticMethodID(cls, "forceSide", "(ILorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_isBracketing_b04e7cb9d40d5124] = env->getStaticMethodID(cls, "isBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)Z");
            mids$[mid_isSequence_15ea3a7b52896f96] = env->getStaticMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_midpoint_824133ce4aec3505] = env->getStaticMethodID(cls, "midpoint", "(DD)D");
            mids$[mid_solve_73f058e6f77a8c39] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_33d916265311f585] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_verifyBracketing_05bcfaa39902e6f0] = env->getStaticMethodID(cls, "verifyBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)V");
            mids$[mid_verifyInterval_1d715fa3b7b756e1] = env->getStaticMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_verifySequence_d0d6094fbd7015c5] = env->getStaticMethodID(cls, "verifySequence", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_0bf261f4799c8aa5], a0.this$, a1, a2, a3));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_27ea5dab28f50cf5], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_d63e4b4284454f95], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_96142a24a6019c04], a0.this$, a1, a2, a3, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_2dfd1b59f21ce481], a0.this$, a1, a2, a3, a4, a5, a6));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_70f142d93ed41d85], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
        }

        jdouble UnivariateSolverUtils::forceSide(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::hipparchus::analysis::solvers::AllowedSolution & a6)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_forceSide_dced817eae0dbc88], a0, a1.this$, a2.this$, a3, a4, a5, a6.this$);
        }

        jboolean UnivariateSolverUtils::isBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isBracketing_b04e7cb9d40d5124], a0.this$, a1, a2);
        }

        jboolean UnivariateSolverUtils::isSequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isSequence_15ea3a7b52896f96], a0, a1, a2);
        }

        jdouble UnivariateSolverUtils::midpoint(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_midpoint_824133ce4aec3505], a0, a1);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_73f058e6f77a8c39], a0.this$, a1, a2);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_33d916265311f585], a0.this$, a1, a2, a3);
        }

        void UnivariateSolverUtils::verifyBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyBracketing_05bcfaa39902e6f0], a0.this$, a1, a2);
        }

        void UnivariateSolverUtils::verifyInterval(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyInterval_1d715fa3b7b756e1], a0, a1);
        }

        void UnivariateSolverUtils::verifySequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifySequence_d0d6094fbd7015c5], a0, a1, a2);
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
        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_UnivariateSolverUtils__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolverUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, bracket, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, forceSide, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isSequence, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, midpoint, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, solve, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifySequence, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolverUtils)[] = {
          { Py_tp_methods, t_UnivariateSolverUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolverUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateSolverUtils, t_UnivariateSolverUtils, UnivariateSolverUtils);

        void t_UnivariateSolverUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolverUtils), &PY_TYPE_DEF(UnivariateSolverUtils), module, "UnivariateSolverUtils", 0);
        }

        void t_UnivariateSolverUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "class_", make_descriptor(UnivariateSolverUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "wrapfn_", make_descriptor(t_UnivariateSolverUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolverUtils::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolverUtils::wrap_Object(UnivariateSolverUtils(((t_UnivariateSolverUtils *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolverUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return result.wrap();
              }
            }
            break;
           case 5:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            break;
           case 7:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
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
              jint a6;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jint a6;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError(type, "bracket", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::hipparchus::analysis::solvers::AllowedSolution a6((jobject) NULL);
          PyTypeObject **p6;
          jdouble result;

          if (!parseArgs(args, "IkKDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_, &a3, &a4, &a5, &a6, &p6, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::forceSide(a0, a1, a2, a3, a4, a5, a6));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "forceSide", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isBracketing(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isSequence(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isSequence", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::midpoint(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "midpoint", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "solve", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyBracketing(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyInterval(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyInterval", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifySequence(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifySequence", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TimetagReference::class$ = NULL;
            jmethodID *TimetagReference::mids$ = NULL;
            bool TimetagReference::live$ = false;
            TimetagReference *TimetagReference::RECEIVE = NULL;
            TimetagReference *TimetagReference::TRANSMIT = NULL;

            jclass TimetagReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TimetagReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_92031bf67c0d1fee] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_values_ca8837e2399d996c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RECEIVE = new TimetagReference(env->getStaticObjectField(cls, "RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                TRANSMIT = new TimetagReference(env->getStaticObjectField(cls, "TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TimetagReference TimetagReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TimetagReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_92031bf67c0d1fee], a0.this$));
            }

            JArray< TimetagReference > TimetagReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TimetagReference >(env->callStaticObjectMethod(cls, mids$[mid_values_ca8837e2399d996c]));
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
            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args);
            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TimetagReference_values(PyTypeObject *type);
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data);
            static PyGetSetDef t_TimetagReference__fields_[] = {
              DECLARE_GET_FIELD(t_TimetagReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TimetagReference__methods_[] = {
              DECLARE_METHOD(t_TimetagReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_TimetagReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TimetagReference)[] = {
              { Py_tp_methods, t_TimetagReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TimetagReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TimetagReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TimetagReference, t_TimetagReference, TimetagReference);
            PyObject *t_TimetagReference::wrap_Object(const TimetagReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TimetagReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TimetagReference::install(PyObject *module)
            {
              installType(&PY_TYPE(TimetagReference), &PY_TYPE_DEF(TimetagReference), module, "TimetagReference", 0);
            }

            void t_TimetagReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "class_", make_descriptor(TimetagReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "wrapfn_", make_descriptor(t_TimetagReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(TimetagReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "RECEIVE", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "TRANSMIT", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::TRANSMIT)));
            }

            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TimetagReference::initializeClass, 1)))
                return NULL;
              return t_TimetagReference::wrap_Object(TimetagReference(((t_TimetagReference *) arg)->object.this$));
            }
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TimetagReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TimetagReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::valueOf(a0));
                return t_TimetagReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TimetagReference_values(PyTypeObject *type)
            {
              JArray< TimetagReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::values());
              return JArray<jobject>(result.this$).wrap(t_TimetagReference::wrap_jobject);
            }
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data)
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
#include "org/orekit/utils/PythonExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonExtendedPVCoordinatesProvider::mids$ = NULL;
      bool PythonExtendedPVCoordinatesProvider::live$ = false;

      jclass PythonExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonExtendedPVCoordinatesProvider::PythonExtendedPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonExtendedPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonExtendedPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonExtendedPVCoordinatesProvider::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonExtendedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonExtendedPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonExtendedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonExtendedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonExtendedPVCoordinatesProvider, t_PythonExtendedPVCoordinatesProvider, PythonExtendedPVCoordinatesProvider);

      void t_PythonExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonExtendedPVCoordinatesProvider), &PY_TYPE_DEF(PythonExtendedPVCoordinatesProvider), module, "PythonExtendedPVCoordinatesProvider", 1);
      }

      void t_PythonExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "class_", make_descriptor(PythonExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonExtendedPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1 },
          { "pythonDecRef", "()V", (void *) t_PythonExtendedPVCoordinatesProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonExtendedPVCoordinatesProvider::wrap_Object(PythonExtendedPVCoordinatesProvider(((t_PythonExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonExtendedPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonExtendedPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data)
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
#include "org/hipparchus/ode/Parameterizable.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *Parameterizable::class$ = NULL;
      jmethodID *Parameterizable::mids$ = NULL;
      bool Parameterizable::live$ = false;

      jclass Parameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/Parameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParametersNames_a6156df500549a58] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_6b161f495ea569b8] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List Parameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_a6156df500549a58]));
      }

      jboolean Parameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_6b161f495ea569b8], a0.this$);
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
      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self);
      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg);
      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data);
      static PyGetSetDef t_Parameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_Parameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Parameterizable__methods_[] = {
        DECLARE_METHOD(t_Parameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_Parameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Parameterizable)[] = {
        { Py_tp_methods, t_Parameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Parameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Parameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Parameterizable, t_Parameterizable, Parameterizable);

      void t_Parameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Parameterizable), &PY_TYPE_DEF(Parameterizable), module, "Parameterizable", 0);
      }

      void t_Parameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "class_", make_descriptor(Parameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "wrapfn_", make_descriptor(t_Parameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Parameterizable::initializeClass, 1)))
          return NULL;
        return t_Parameterizable::wrap_Object(Parameterizable(((t_Parameterizable *) arg)->object.this$));
      }
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Parameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg)
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

      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/Format.h"
#include "java/lang/StringBuffer.h"
#include "java/io/Serializable.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *Format::class$ = NULL;
    jmethodID *Format::mids$ = NULL;
    bool Format::live$ = false;

    jclass Format::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/Format");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_format_d5950e748b97110b] = env->getMethodID(cls, "format", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_e231795b026d93db] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_dfeef7e12027ce3a] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_parseObject_f3d00a864d7248c7] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_parseObject_04377a8fddc7cede] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object Format::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    ::java::lang::String Format::format(const ::java::lang::Object & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_d5950e748b97110b], a0.this$));
    }

    ::java::lang::StringBuffer Format::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_e231795b026d93db], a0.this$, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator Format::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_dfeef7e12027ce3a], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_f3d00a864d7248c7], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_04377a8fddc7cede], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_clone(t_Format *self);
    static PyObject *t_Format_format(t_Format *self, PyObject *args);
    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg);
    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args);

    static PyMethodDef t_Format__methods_[] = {
      DECLARE_METHOD(t_Format, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, clone, METH_NOARGS),
      DECLARE_METHOD(t_Format, format, METH_VARARGS),
      DECLARE_METHOD(t_Format, formatToCharacterIterator, METH_O),
      DECLARE_METHOD(t_Format, parseObject, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Format)[] = {
      { Py_tp_methods, t_Format__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Format)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Format, t_Format, Format);

    void t_Format::install(PyObject *module)
    {
      installType(&PY_TYPE(Format), &PY_TYPE_DEF(Format), module, "Format", 0);
    }

    void t_Format::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "class_", make_descriptor(Format::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "wrapfn_", make_descriptor(t_Format::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Format::initializeClass, 1)))
        return NULL;
      return t_Format::wrap_Object(Format(((t_Format *) arg)->object.this$));
    }
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Format::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Format_clone(t_Format *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Format_format(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
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

    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "formatToCharacterIterator", arg);
      return NULL;
    }

    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parseObject(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parseObject(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parseObject", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorWriter.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f48479c2fcc7550c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVectorWriter::StateVectorWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2, const ::org::orekit::files::ccsds::definitions::TimeConverter & a3) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_f48479c2fcc7550c, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) t_StateVectorWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a3((jobject) NULL);
              StateVectorWriter object((jobject) NULL);

              if (!parseArgs(args, "sskk", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StateVectorWriter(a0, a1, a2, a3));
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
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSPhase::class$ = NULL;
          jmethodID *OneWayGNSSPhase::mids$ = NULL;
          bool OneWayGNSSPhase::live$ = false;
          ::java::lang::String *OneWayGNSSPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *OneWayGNSSPhase::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ed3fbe05289df408] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_456d9a2f64d6b28d] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhase::OneWayGNSSPhase(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_ed3fbe05289df408, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

          ::org::orekit::utils::ParameterDriver OneWayGNSSPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_ac0e5f8f2fa86f4f]));
          }

          jdouble OneWayGNSSPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_456d9a2f64d6b28d]);
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
          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args);
          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhase__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, wavelength),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhase__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhase)[] = {
            { Py_tp_methods, t_OneWayGNSSPhase__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhase_init_ },
            { Py_tp_getset, t_OneWayGNSSPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhase, t_OneWayGNSSPhase, OneWayGNSSPhase);
          PyObject *t_OneWayGNSSPhase::wrap_Object(const OneWayGNSSPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhase), &PY_TYPE_DEF(OneWayGNSSPhase), module, "OneWayGNSSPhase", 0);
          }

          void t_OneWayGNSSPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "class_", make_descriptor(OneWayGNSSPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "wrapfn_", make_descriptor(t_OneWayGNSSPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*OneWayGNSSPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhase::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhase::wrap_Object(OneWayGNSSPhase(((t_OneWayGNSSPhase *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
            OneWayGNSSPhase object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = OneWayGNSSPhase(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data)
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
#include "org/hipparchus/optim/univariate/SimpleUnivariateValueChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SimpleUnivariateValueChecker::class$ = NULL;
        jmethodID *SimpleUnivariateValueChecker::mids$ = NULL;
        bool SimpleUnivariateValueChecker::live$ = false;

        jclass SimpleUnivariateValueChecker::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SimpleUnivariateValueChecker");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_converged_22326eb759d18612] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/univariate/UnivariatePointValuePair;Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

        jboolean SimpleUnivariateValueChecker::converged(jint a0, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a1, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_converged_22326eb759d18612], a0, a1.this$, a2.this$);
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
      namespace univariate {
        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data);
        static PyGetSetDef t_SimpleUnivariateValueChecker__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleUnivariateValueChecker, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleUnivariateValueChecker__methods_[] = {
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, converged, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleUnivariateValueChecker)[] = {
          { Py_tp_methods, t_SimpleUnivariateValueChecker__methods_ },
          { Py_tp_init, (void *) t_SimpleUnivariateValueChecker_init_ },
          { Py_tp_getset, t_SimpleUnivariateValueChecker__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleUnivariateValueChecker)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
          NULL
        };

        DEFINE_TYPE(SimpleUnivariateValueChecker, t_SimpleUnivariateValueChecker, SimpleUnivariateValueChecker);
        PyObject *t_SimpleUnivariateValueChecker::wrap_Object(const SimpleUnivariateValueChecker& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimpleUnivariateValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimpleUnivariateValueChecker::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleUnivariateValueChecker), &PY_TYPE_DEF(SimpleUnivariateValueChecker), module, "SimpleUnivariateValueChecker", 0);
        }

        void t_SimpleUnivariateValueChecker::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "class_", make_descriptor(SimpleUnivariateValueChecker::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "wrapfn_", make_descriptor(t_SimpleUnivariateValueChecker::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 1)))
            return NULL;
          return t_SimpleUnivariateValueChecker::wrap_Object(SimpleUnivariateValueChecker(((t_SimpleUnivariateValueChecker *) arg)->object.this$));
        }
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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

        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a1((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.converged(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SimpleUnivariateValueChecker), (PyObject *) self, "converged", args, 2);
        }
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataLoader::class$ = NULL;
      jmethodID *DataLoader::mids$ = NULL;
      bool DataLoader::live$ = false;

      jclass DataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
      }

      jboolean DataLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args);
      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self);

      static PyMethodDef t_DataLoader__methods_[] = {
        DECLARE_METHOD(t_DataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_DataLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataLoader)[] = {
        { Py_tp_methods, t_DataLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataLoader, t_DataLoader, DataLoader);

      void t_DataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(DataLoader), &PY_TYPE_DEF(DataLoader), module, "DataLoader", 0);
      }

      void t_DataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "class_", make_descriptor(DataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "wrapfn_", make_descriptor(t_DataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataLoader::initializeClass, 1)))
          return NULL;
        return t_DataLoader::wrap_Object(DataLoader(((t_DataLoader *) arg)->object.this$));
      }
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.loadData(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileFactory::class$ = NULL;
        jmethodID *TileFactory::mids$ = NULL;
        bool TileFactory::live$ = false;

        jclass TileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createTile_6458069ddbe36553] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::raster::Tile TileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_createTile_6458069ddbe36553]));
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
        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args);
        static PyObject *t_TileFactory_createTile(t_TileFactory *self);
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data);
        static PyGetSetDef t_TileFactory__fields_[] = {
          DECLARE_GET_FIELD(t_TileFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TileFactory__methods_[] = {
          DECLARE_METHOD(t_TileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_TileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileFactory)[] = {
          { Py_tp_methods, t_TileFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TileFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileFactory, t_TileFactory, TileFactory);
        PyObject *t_TileFactory::wrap_Object(const TileFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TileFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(TileFactory), &PY_TYPE_DEF(TileFactory), module, "TileFactory", 0);
        }

        void t_TileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "class_", make_descriptor(TileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "wrapfn_", make_descriptor(t_TileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileFactory::initializeClass, 1)))
            return NULL;
          return t_TileFactory::wrap_Object(TileFactory(((t_TileFactory *) arg)->object.this$));
        }
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TileFactory_createTile(t_TileFactory *self)
        {
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
        }
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrMessage::class$ = NULL;
            jmethodID *SsrMessage::mids$ = NULL;
            bool SsrMessage::live$ = false;

            jclass SsrMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8523fc65a54deefc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/SsrHeader;Ljava/util/List;)V");
                mids$[mid_getData_a6156df500549a58] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
                mids$[mid_getHeader_7f684bfcebe2080f] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/ssr/SsrHeader;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrMessage::SsrMessage(jint a0, const ::org::orekit::gnss::metric::messages::ssr::SsrHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_8523fc65a54deefc, a0, a1.this$, a2.this$)) {}

            ::java::util::List SsrMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_a6156df500549a58]));
            }

            ::org::orekit::gnss::metric::messages::ssr::SsrHeader SsrMessage::getHeader() const
            {
              return ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->callObjectMethod(this$, mids$[mid_getHeader_7f684bfcebe2080f]));
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
            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args);
            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrMessage_getData(t_SsrMessage *self);
            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self);
            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data);
            static PyGetSetDef t_SsrMessage__fields_[] = {
              DECLARE_GET_FIELD(t_SsrMessage, data),
              DECLARE_GET_FIELD(t_SsrMessage, header),
              DECLARE_GET_FIELD(t_SsrMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrMessage__methods_[] = {
              DECLARE_METHOD(t_SsrMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_SsrMessage, getData, METH_NOARGS),
              DECLARE_METHOD(t_SsrMessage, getHeader, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrMessage)[] = {
              { Py_tp_methods, t_SsrMessage__methods_ },
              { Py_tp_init, (void *) t_SsrMessage_init_ },
              { Py_tp_getset, t_SsrMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(SsrMessage, t_SsrMessage, SsrMessage);
            PyObject *t_SsrMessage::wrap_Object(const SsrMessage& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_SsrMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_SsrMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrMessage), &PY_TYPE_DEF(SsrMessage), module, "SsrMessage", 0);
            }

            void t_SsrMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "class_", make_descriptor(SsrMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "wrapfn_", make_descriptor(t_SsrMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrMessage::initializeClass, 1)))
                return NULL;
              return t_SsrMessage::wrap_Object(SsrMessage(((t_SsrMessage *) arg)->object.this$));
            }
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader a1((jobject) NULL);
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              SsrMessage object((jobject) NULL);

              if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::SsrHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SsrMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrMessage_getData(t_SsrMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(result);
            }
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame3.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame3::class$ = NULL;
          jmethodID *SubFrame3::mids$ = NULL;
          bool SubFrame3::live$ = false;

          jclass SubFrame3::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame3");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCic_456d9a2f64d6b28d] = env->getMethodID(cls, "getCic", "()D");
              mids$[mid_getCis_456d9a2f64d6b28d] = env->getMethodID(cls, "getCis", "()D");
              mids$[mid_getCrc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrc", "()D");
              mids$[mid_getI0_456d9a2f64d6b28d] = env->getMethodID(cls, "getI0", "()D");
              mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
              mids$[mid_getIODE_f2f64475e4580546] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getLowercaseOmega_456d9a2f64d6b28d] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getOmegaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getUppercaseOmega0_456d9a2f64d6b28d] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame3::getCic() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCic_456d9a2f64d6b28d]);
          }

          jdouble SubFrame3::getCis() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCis_456d9a2f64d6b28d]);
          }

          jdouble SubFrame3::getCrc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrc_456d9a2f64d6b28d]);
          }

          jdouble SubFrame3::getI0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI0_456d9a2f64d6b28d]);
          }

          jdouble SubFrame3::getIDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
          }

          jint SubFrame3::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_f2f64475e4580546]);
          }

          jdouble SubFrame3::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_456d9a2f64d6b28d]);
          }

          jdouble SubFrame3::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_456d9a2f64d6b28d]);
          }

          jdouble SubFrame3::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_456d9a2f64d6b28d]);
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
          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data);
          static PyGetSetDef t_SubFrame3__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame3, cic),
            DECLARE_GET_FIELD(t_SubFrame3, cis),
            DECLARE_GET_FIELD(t_SubFrame3, crc),
            DECLARE_GET_FIELD(t_SubFrame3, i0),
            DECLARE_GET_FIELD(t_SubFrame3, iDot),
            DECLARE_GET_FIELD(t_SubFrame3, iODE),
            DECLARE_GET_FIELD(t_SubFrame3, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrame3, omegaDot),
            DECLARE_GET_FIELD(t_SubFrame3, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame3__methods_[] = {
            DECLARE_METHOD(t_SubFrame3, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, getCic, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCis, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCrc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getI0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame3)[] = {
            { Py_tp_methods, t_SubFrame3__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame3__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame3)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame3, t_SubFrame3, SubFrame3);

          void t_SubFrame3::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame3), &PY_TYPE_DEF(SubFrame3), module, "SubFrame3", 0);
          }

          void t_SubFrame3::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "class_", make_descriptor(SubFrame3::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "wrapfn_", make_descriptor(t_SubFrame3::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame3::initializeClass, 1)))
              return NULL;
            return t_SubFrame3::wrap_Object(SubFrame3(((t_SubFrame3 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame3::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCic());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getIDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCic());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCis());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Ceil.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ceil::Ceil() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Ceil::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Ceil::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *NumericalPropagator::class$ = NULL;
        jmethodID *NumericalPropagator::mids$ = NULL;
        bool NumericalPropagator::live$ = false;

        jclass NumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/NumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8b1272a4b400cfb6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
            mids$[mid_init$_c465532ab551a8d9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_beaeb16a38eea9d3] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_a6156df500549a58] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_7ae3461a92a43152] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_50a2e0b139e80a58] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_2b88003f931f70a7] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setMu_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setOrbitType_bbd02639b41d4055] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_07350e8db766ef51] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_9aec8b8a0c23a281] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/utils/AbsolutePVCoordinates;)[[D");
            mids$[mid_tolerances_cd8f761b7b3ebe3a] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_d6ab85fc066957e5] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createHarvester_d3d4ea925a699046] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_setUpStmAndJacobianGenerators_7ae3461a92a43152] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
            mids$[mid_beforeIntegration_3d13474d79f5e7bc] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_createMapper_083e2bc1612e9def] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_9c7da9606951e4f0] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_8b1272a4b400cfb6, a0.this$)) {}

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_c465532ab551a8d9, a0.this$, a1.this$)) {}

        void NumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_beaeb16a38eea9d3], a0.this$);
        }

        ::java::util::List NumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_a6156df500549a58]));
        }

        ::org::orekit::orbits::OrbitType NumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates NumericalPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType NumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        void NumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_7ae3461a92a43152]);
        }

        void NumericalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
        }

        void NumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_50a2e0b139e80a58], a0);
        }

        void NumericalPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_2b88003f931f70a7], a0.this$);
        }

        void NumericalPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_77e0f9a1f260e2e5], a0);
        }

        void NumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_bbd02639b41d4055], a0.this$);
        }

        void NumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_07350e8db766ef51], a0.this$);
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::utils::AbsolutePVCoordinates & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_9aec8b8a0c23a281], a0, a1.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_cd8f761b7b3ebe3a], a0, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_d6ab85fc066957e5], a0, a1, a2.this$, a3.this$));
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
        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_NumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_NumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_NumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, positionAngleType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagator)[] = {
          { Py_tp_methods, t_NumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagator_init_ },
          { Py_tp_getset, t_NumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(NumericalPropagator, t_NumericalPropagator, NumericalPropagator);

        void t_NumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagator), &PY_TYPE_DEF(NumericalPropagator), module, "NumericalPropagator", 0);
        }

        void t_NumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "class_", make_descriptor(NumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "wrapfn_", make_descriptor(t_NumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagator::wrap_Object(NumericalPropagator(((t_NumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
              {
                INT_CALL(object = NumericalPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NumericalPropagator(a0, a1));
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

        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args)
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::utils::AbsolutePVCoordinates a1((jobject) NULL);
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::Orbit a2((jobject) NULL);
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator::live$ = false;

        jclass FieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_9a993a9a36b8e365] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/FieldAdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_1843b26af41f9c8e] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_f2f64475e4580546] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_f2f64475e4580546] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_a9ea70419e870eb4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_0090f7797e403f43] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_e6d4d3215c30992a] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPropagationType_cb6f177f3e3f8613] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_e470b6d9e0d979db] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_85b5a3e9101d7c1f] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagate_195e701ebc75aca3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_03a16642f77779e7] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setResetAtEnd_50a2e0b139e80a58] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_setPositionAngleType_07350e8db766ef51] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_beforeIntegration_acdd8180a5dc1a8d] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_afterIntegration_7ae3461a92a43152] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getInitialIntegrationState_a553824829fc2514] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_createMapper_b12e4020688f2d3a] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_9199626b9ad748bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpEventDetector_90a65ad4a4031020] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_initMapper_205c34b8e33cf33f] = env->getMethodID(cls, "initMapper", "(Lorg/hipparchus/Field;)V");
            mids$[mid_setOrbitType_bbd02639b41d4055] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_getIntegrator_b792653519a95a45] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
            mids$[mid_setUpUserEventDetectors_7ae3461a92a43152] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");
            mids$[mid_isMeanOrbit_cb6f177f3e3f8613] = env->getMethodID(cls, "isMeanOrbit", "()Lorg/orekit/propagation/PropagationType;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_9a993a9a36b8e365], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_1843b26af41f9c8e], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_7ae3461a92a43152]);
        }

        ::java::util::List FieldAbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_a6156df500549a58]));
        }

        jint FieldAbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_f2f64475e4580546]);
        }

        jint FieldAbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_f2f64475e4580546]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_a9ea70419e870eb4]));
        }

        ::java::util::Collection FieldAbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cfcfd130f9013e3e]));
        }

        ::java::lang::String FieldAbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_0090f7797e403f43]));
        }

        JArray< ::java::lang::String > FieldAbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924]));
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractIntegratedPropagator::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_e6d4d3215c30992a]));
        }

        ::org::orekit::propagation::PropagationType FieldAbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_cb6f177f3e3f8613]));
        }

        jboolean FieldAbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_e470b6d9e0d979db]);
        }

        jboolean FieldAbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_6b161f495ea569b8], a0.this$);
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_85b5a3e9101d7c1f], a0.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_195e701ebc75aca3], a0.this$, a1.this$));
        }

        void FieldAbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_03a16642f77779e7], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_50a2e0b139e80a58], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_FieldAbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, resetAtEnd),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator, t_FieldAbstractIntegratedPropagator, FieldAbstractIntegratedPropagator);
        PyObject *t_FieldAbstractIntegratedPropagator::wrap_Object(const FieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator), module, "FieldAbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_FieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "class_", make_descriptor(FieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator::wrap_Object(FieldAbstractIntegratedPropagator(((t_FieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::integration::t_FieldAdditionalDerivativesProvider::parameters_))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeStamped.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeStamped::class$ = NULL;
      jmethodID *PythonTimeStamped::mids$ = NULL;
      bool PythonTimeStamped::live$ = false;

      jclass PythonTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStamped::PythonTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeStamped::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self);
      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data);
      static PyGetSetDef t_PythonTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStamped, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStamped)[] = {
        { Py_tp_methods, t_PythonTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStamped_init_ },
        { Py_tp_getset, t_PythonTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStamped, t_PythonTimeStamped, PythonTimeStamped);

      void t_PythonTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStamped), &PY_TYPE_DEF(PythonTimeStamped), module, "PythonTimeStamped", 1);
      }

      void t_PythonTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "class_", make_descriptor(PythonTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "wrapfn_", make_descriptor(t_PythonTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStamped::wrap_Object(PythonTimeStamped(((t_PythonTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data)
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
