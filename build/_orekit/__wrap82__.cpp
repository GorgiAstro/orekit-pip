#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *GraggBulirschStoerIntegratorBuilder::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegratorBuilder::mids$ = NULL;
        bool GraggBulirschStoerIntegratorBuilder::live$ = false;

        jclass GraggBulirschStoerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegratorBuilder::GraggBulirschStoerIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator GraggBulirschStoerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegratorBuilder)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegratorBuilder, t_GraggBulirschStoerIntegratorBuilder, GraggBulirschStoerIntegratorBuilder);

        void t_GraggBulirschStoerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegratorBuilder), &PY_TYPE_DEF(GraggBulirschStoerIntegratorBuilder), module, "GraggBulirschStoerIntegratorBuilder", 0);
        }

        void t_GraggBulirschStoerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "class_", make_descriptor(GraggBulirschStoerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegratorBuilder::wrap_Object(GraggBulirschStoerIntegratorBuilder(((t_GraggBulirschStoerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          GraggBulirschStoerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = GraggBulirschStoerIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProvider::class$ = NULL;
      jmethodID *AttitudeProvider::mids$ = NULL;
      bool AttitudeProvider::live$ = false;

      jclass AttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_01363f58d35f60d4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_969253bc78d7a272] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_01363f58d35f60d4], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_969253bc78d7a272], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args);
      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args);

      static PyMethodDef t_AttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProvider)[] = {
        { Py_tp_methods, t_AttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeProvider, t_AttitudeProvider, AttitudeProvider);

      void t_AttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProvider), &PY_TYPE_DEF(AttitudeProvider), module, "AttitudeProvider", 0);
      }

      void t_AttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "class_", make_descriptor(AttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "wrapfn_", make_descriptor(t_AttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AttitudeProvider::wrap_Object(AttitudeProvider(((t_AttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/TriggerDate.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *TriggerDate::class$ = NULL;
          jmethodID *TriggerDate::mids$ = NULL;
          bool TriggerDate::live$ = false;

          jclass TriggerDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/TriggerDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c409bb518fc50025] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;D)V");
              mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getMassDepletionDelay_e56d2bcda283b2a0] = env->getMethodID(cls, "getMassDepletionDelay", "()Lorg/orekit/forces/maneuvers/jacobians/MassDepletionDelay;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_9658cf3eaef14ef5] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_81fc6fb6078d2aa7] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_yields_97634138963fb58a] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TriggerDate::TriggerDate(const ::java::lang::String & a0, const ::java::lang::String & a1, jboolean a2, const ::org::orekit::forces::maneuvers::Maneuver & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c409bb518fc50025, a0.this$, a1.this$, a2, a3.this$, a4)) {}

          JArray< jdouble > TriggerDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_137d7db4f3f987f7], a0.this$));
          }

          ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay TriggerDate::getMassDepletionDelay() const
          {
            return ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay(env->callObjectMethod(this$, mids$[mid_getMassDepletionDelay_e56d2bcda283b2a0]));
          }

          ::java::lang::String TriggerDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          void TriggerDate::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
          }

          void TriggerDate::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_9658cf3eaef14ef5], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState TriggerDate::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_81fc6fb6078d2aa7], a0.this$));
          }

          jboolean TriggerDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_97634138963fb58a], a0.this$);
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
        namespace jacobians {
          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self);
          static PyObject *t_TriggerDate_getName(t_TriggerDate *self);
          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data);
          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data);
          static PyGetSetDef t_TriggerDate__fields_[] = {
            DECLARE_GET_FIELD(t_TriggerDate, massDepletionDelay),
            DECLARE_GET_FIELD(t_TriggerDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TriggerDate__methods_[] = {
            DECLARE_METHOD(t_TriggerDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_TriggerDate, getMassDepletionDelay, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, init, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, resetState, METH_O),
            DECLARE_METHOD(t_TriggerDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TriggerDate)[] = {
            { Py_tp_methods, t_TriggerDate__methods_ },
            { Py_tp_init, (void *) t_TriggerDate_init_ },
            { Py_tp_getset, t_TriggerDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TriggerDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TriggerDate, t_TriggerDate, TriggerDate);

          void t_TriggerDate::install(PyObject *module)
          {
            installType(&PY_TYPE(TriggerDate), &PY_TYPE_DEF(TriggerDate), module, "TriggerDate", 0);
          }

          void t_TriggerDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "class_", make_descriptor(TriggerDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "wrapfn_", make_descriptor(t_TriggerDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TriggerDate::initializeClass, 1)))
              return NULL;
            return t_TriggerDate::wrap_Object(TriggerDate(((t_TriggerDate *) arg)->object.this$));
          }
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TriggerDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean a2;
            ::org::orekit::forces::maneuvers::Maneuver a3((jobject) NULL);
            jdouble a4;
            TriggerDate object((jobject) NULL);

            if (!parseArgs(args, "ssZkD", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TriggerDate(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg)
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

          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay result((jobject) NULL);
            OBJ_CALL(result = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(result);
          }

          static PyObject *t_TriggerDate_getName(t_TriggerDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args)
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

          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(value);
          }

          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data)
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
#include "org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SemiDefinitePositiveCholeskyDecomposition::class$ = NULL;
      jmethodID *SemiDefinitePositiveCholeskyDecomposition::mids$ = NULL;
      bool SemiDefinitePositiveCholeskyDecomposition::live$ = false;
      jdouble SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD = (jdouble) 0;

      jclass SemiDefinitePositiveCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_27ff5cf8ba76b4fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getL_7116bbecdd8ceb21] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_7116bbecdd8ceb21] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "POSITIVITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27ff5cf8ba76b4fe, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_7116bbecdd8ceb21]));
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
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_SemiDefinitePositiveCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, lT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SemiDefinitePositiveCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getLT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SemiDefinitePositiveCholeskyDecomposition)[] = {
        { Py_tp_methods, t_SemiDefinitePositiveCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_SemiDefinitePositiveCholeskyDecomposition_init_ },
        { Py_tp_getset, t_SemiDefinitePositiveCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SemiDefinitePositiveCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SemiDefinitePositiveCholeskyDecomposition, t_SemiDefinitePositiveCholeskyDecomposition, SemiDefinitePositiveCholeskyDecomposition);

      void t_SemiDefinitePositiveCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), &PY_TYPE_DEF(SemiDefinitePositiveCholeskyDecomposition), module, "SemiDefinitePositiveCholeskyDecomposition", 0);
      }

      void t_SemiDefinitePositiveCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "class_", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "wrapfn_", make_descriptor(t_SemiDefinitePositiveCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(SemiDefinitePositiveCholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "POSITIVITY_THRESHOLD", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD));
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_SemiDefinitePositiveCholeskyDecomposition::wrap_Object(SemiDefinitePositiveCholeskyDecomposition(((t_SemiDefinitePositiveCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0, a1));
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

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
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
                mids$[mid_getBB_e6d4d3215c30992a] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_e6d4d3215c30992a] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_e6d4d3215c30992a] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCXO2N2A2_e6d4d3215c30992a] = env->getMethodID(cls, "getCXO2N2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHK_e6d4d3215c30992a] = env->getMethodID(cls, "getHK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2_e6d4d3215c30992a] = env->getMethodID(cls, "getK2MH2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2O2_e6d4d3215c30992a] = env->getMethodID(cls, "getK2MH2O2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_e6d4d3215c30992a] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_e6d4d3215c30992a] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoa_e6d4d3215c30992a] = env->getMethodID(cls, "getMuoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOON2A2_e6d4d3215c30992a] = env->getMethodID(cls, "getOON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_e6d4d3215c30992a] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_e6d4d3215c30992a] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_e6d4d3215c30992a] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX2ON2A2XP1_e6d4d3215c30992a] = env->getMethodID(cls, "getX2ON2A2XP1", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX3ON2A_e6d4d3215c30992a] = env->getMethodID(cls, "getX3ON2A", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXON2A2_e6d4d3215c30992a] = env->getMethodID(cls, "getXON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_e6d4d3215c30992a] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXXX_e6d4d3215c30992a] = env->getMethodID(cls, "getXXX", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getCXO2N2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCXO2N2A2_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getHK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHK_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2O2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2O2_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMuoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoa_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOON2A2_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX2ON2A2XP1() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX2ON2A2XP1_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX3ON2A() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX3ON2A_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXON2A2_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXXX_e6d4d3215c30992a]));
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
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *AbstractBuilder::class$ = NULL;
          jmethodID *AbstractBuilder::mids$ = NULL;
          bool AbstractBuilder::live$ = false;

          jclass AbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/AbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_f657aa17e72227da] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_fc8fc85e38e59042] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getEquatorialRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquatorialRadius", "()D");
              mids$[mid_getFlattening_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlattening", "()D");
              mids$[mid_getMissionReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getRangeUnitsConverter_873b8d1e769e332d] = env->getMethodID(cls, "getRangeUnitsConverter", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;");
              mids$[mid_withConventions_c6466dc8192e49d4] = env->getMethodID(cls, "withConventions", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withDataContext_61bea9df339185ac] = env->getMethodID(cls, "withDataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withEquatorialRadius_703662fe5c7e5a16] = env->getMethodID(cls, "withEquatorialRadius", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withFlattening_703662fe5c7e5a16] = env->getMethodID(cls, "withFlattening", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withMissionReferenceDate_ca22bd80f06006ca] = env->getMethodID(cls, "withMissionReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withRangeUnitsConverter_e7d11dca49312f86] = env->getMethodID(cls, "withRangeUnitsConverter", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_create_a463538f9bac0ff7] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions AbstractBuilder::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_f657aa17e72227da]));
          }

          ::org::orekit::data::DataContext AbstractBuilder::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_fc8fc85e38e59042]));
          }

          jdouble AbstractBuilder::getEquatorialRadius() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_456d9a2f64d6b28d]);
          }

          jdouble AbstractBuilder::getFlattening() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlattening_456d9a2f64d6b28d]);
          }

          ::org::orekit::time::AbsoluteDate AbstractBuilder::getMissionReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_aaa854c403487cf3]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter AbstractBuilder::getRangeUnitsConverter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(env->callObjectMethod(this$, mids$[mid_getRangeUnitsConverter_873b8d1e769e332d]));
          }

          AbstractBuilder AbstractBuilder::withConventions(const ::org::orekit::utils::IERSConventions & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withConventions_c6466dc8192e49d4], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withDataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withDataContext_61bea9df339185ac], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withEquatorialRadius(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withEquatorialRadius_703662fe5c7e5a16], a0));
          }

          AbstractBuilder AbstractBuilder::withFlattening(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withFlattening_703662fe5c7e5a16], a0));
          }

          AbstractBuilder AbstractBuilder::withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withMissionReferenceDate_ca22bd80f06006ca], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withRangeUnitsConverter_e7d11dca49312f86], a0.this$));
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
          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args);
          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data);
          static PyGetSetDef t_AbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractBuilder, conventions),
            DECLARE_GET_FIELD(t_AbstractBuilder, dataContext),
            DECLARE_GET_FIELD(t_AbstractBuilder, equatorialRadius),
            DECLARE_GET_FIELD(t_AbstractBuilder, flattening),
            DECLARE_GET_FIELD(t_AbstractBuilder, missionReferenceDate),
            DECLARE_GET_FIELD(t_AbstractBuilder, rangeUnitsConverter),
            DECLARE_GET_FIELD(t_AbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractBuilder, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getEquatorialRadius, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getFlattening, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getMissionReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getRangeUnitsConverter, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, withConventions, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withDataContext, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withEquatorialRadius, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withFlattening, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withMissionReferenceDate, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withRangeUnitsConverter, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractBuilder)[] = {
            { Py_tp_methods, t_AbstractBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractBuilder, t_AbstractBuilder, AbstractBuilder);
          PyObject *t_AbstractBuilder::wrap_Object(const AbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractBuilder), &PY_TYPE_DEF(AbstractBuilder), module, "AbstractBuilder", 0);
          }

          void t_AbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "class_", make_descriptor(AbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "wrapfn_", make_descriptor(t_AbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractBuilder::wrap_Object(AbstractBuilder(((t_AbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFlattening());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.withConventions(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withConventions", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withDataContext(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDataContext", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withEquatorialRadius(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEquatorialRadius", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withFlattening(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withFlattening", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withMissionReferenceDate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMissionReferenceDate", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withRangeUnitsConverter(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withRangeUnitsConverter", arg);
            return NULL;
          }
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlattening());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter value((jobject) NULL);
            OBJ_CALL(value = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/StopOnDecreasing.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnDecreasing::class$ = NULL;
          jmethodID *StopOnDecreasing::mids$ = NULL;
          bool StopOnDecreasing::live$ = false;

          jclass StopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnDecreasing::StopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action StopOnDecreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66531e3c1769dca9], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args);

          static PyMethodDef t_StopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnDecreasing)[] = {
            { Py_tp_methods, t_StopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnDecreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnDecreasing, t_StopOnDecreasing, StopOnDecreasing);

          void t_StopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnDecreasing), &PY_TYPE_DEF(StopOnDecreasing), module, "StopOnDecreasing", 0);
          }

          void t_StopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "class_", make_descriptor(StopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "wrapfn_", make_descriptor(t_StopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnDecreasing::wrap_Object(StopOnDecreasing(((t_StopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnDecreasing object((jobject) NULL);

            INT_CALL(object = StopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadataKey::class$ = NULL;
              jmethodID *AemMetadataKey::mids$ = NULL;
              bool AemMetadataKey::live$ = false;
              AemMetadataKey *AemMetadataKey::ANGVEL_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_DIR = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::EULER_ROT_SEQ = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_DEGREE = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_METHOD = NULL;
              AemMetadataKey *AemMetadataKey::QUATERNION_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::RATE_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_A = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_B = NULL;
              AemMetadataKey *AemMetadataKey::START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::STOP_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass AemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_485d51d04d75b38c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)Z");
                  mids$[mid_valueOf_ddb40a2460bbfdd4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");
                  mids$[mid_values_8e467a69f22d7e3b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_DIR = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_DIR", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  EULER_ROT_SEQ = new AemMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_DEGREE = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_METHOD = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  QUATERNION_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "QUATERNION_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  RATE_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_A = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_B = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_485d51d04d75b38c], a0.this$, a1.this$, a2.this$);
              }

              AemMetadataKey AemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ddb40a2460bbfdd4], a0.this$));
              }

              JArray< AemMetadataKey > AemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8e467a69f22d7e3b]));
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
            namespace aem {
              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data);
              static PyGetSetDef t_AemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadataKey)[] = {
                { Py_tp_methods, t_AemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AemMetadataKey, t_AemMetadataKey, AemMetadataKey);
              PyObject *t_AemMetadataKey::wrap_Object(const AemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadataKey), &PY_TYPE_DEF(AemMetadataKey), module, "AemMetadataKey", 0);
              }

              void t_AemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "class_", make_descriptor(AemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "wrapfn_", make_descriptor(t_AemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ANGVEL_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_DIR", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_METHOD", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "QUATERNION_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::QUATERNION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "RATE_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_A", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_B", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AemMetadataKey::wrap_Object(AemMetadataKey(((t_AemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::valueOf(a0));
                  return t_AemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AemMetadataKey_values(PyTypeObject *type)
              {
                JArray< AemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AemMetadataKey::wrap_jobject);
              }
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data)
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
#include "org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/DateDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *FieldParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool FieldParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass FieldParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_001cfff1d8a098d1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_4be12dbe8df27106] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDurationDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_bacf6e93022fe00a] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_bacf6e93022fe00a] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_bacf6e93022fe00a] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_e5e3e68fedf11d94] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_001cfff1d8a098d1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_4be12dbe8df27106, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::utils::ParameterDriver FieldParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_bacf6e93022fe00a]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_bacf6e93022fe00a]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_bacf6e93022fe00a]));
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
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_FieldParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_FieldParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_FieldParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldParameterDrivenDateIntervalDetector, t_FieldParameterDrivenDateIntervalDetector, FieldParameterDrivenDateIntervalDetector);
        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_Object(const FieldParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(FieldParameterDrivenDateIntervalDetector), module, "FieldParameterDrivenDateIntervalDetector", 0);
        }

        void t_FieldParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "class_", make_descriptor(FieldParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_FieldParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldParameterDrivenDateIntervalDetector::wrap_Object(FieldParameterDrivenDateIntervalDetector(((t_FieldParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "Kskk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "KskD", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttraction::class$ = NULL;
            jmethodID *DSSTNewtonianAttraction::mids$ = NULL;
            bool DSSTNewtonianAttraction::live$ = false;
            ::java::lang::String *DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

            jclass DSSTNewtonianAttraction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMu_e912d21057defe63] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttraction::DSSTNewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5265bce9e9da3506], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3b4b4fe187ad73ff], a0.this$, a1.this$, a2.this$));
            }

            jdouble DSSTNewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_e912d21057defe63], a0.this$);
            }

            ::java::util::List DSSTNewtonianAttraction::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d], a0.this$, a1.this$, a2.this$));
            }

            void DSSTNewtonianAttraction::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8109c1a27d4471d3], a0.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_6839803ab3ef216d], a0.this$, a1.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_8df221610d0cb785], a0.this$, a1.this$);
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
            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self);
            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttraction__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttraction, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttraction__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttraction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMu, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttraction)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttraction__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttraction_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttraction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttraction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttraction, t_DSSTNewtonianAttraction, DSSTNewtonianAttraction);

            void t_DSSTNewtonianAttraction::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttraction), &PY_TYPE_DEF(DSSTNewtonianAttraction), module, "DSSTNewtonianAttraction", 0);
            }

            void t_DSSTNewtonianAttraction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "class_", make_descriptor(DSSTNewtonianAttraction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "wrapfn_", make_descriptor(t_DSSTNewtonianAttraction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTNewtonianAttraction::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
            }

            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttraction::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttraction::wrap_Object(DSSTNewtonianAttraction(((t_DSSTNewtonianAttraction *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttraction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              DSSTNewtonianAttraction object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = DSSTNewtonianAttraction(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getMu", arg);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/PythonILRSHeader.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *PythonILRSHeader::class$ = NULL;
        jmethodID *PythonILRSHeader::mids$ = NULL;
        bool PythonILRSHeader::live$ = false;

        jclass PythonILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/PythonILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonILRSHeader::PythonILRSHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonILRSHeader::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonILRSHeader::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonILRSHeader::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ilrs {
        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self);
        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args);
        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data);
        static PyGetSetDef t_PythonILRSHeader__fields_[] = {
          DECLARE_GET_FIELD(t_PythonILRSHeader, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonILRSHeader__methods_[] = {
          DECLARE_METHOD(t_PythonILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonILRSHeader, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonILRSHeader)[] = {
          { Py_tp_methods, t_PythonILRSHeader__methods_ },
          { Py_tp_init, (void *) t_PythonILRSHeader_init_ },
          { Py_tp_getset, t_PythonILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonILRSHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(PythonILRSHeader, t_PythonILRSHeader, PythonILRSHeader);

        void t_PythonILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonILRSHeader), &PY_TYPE_DEF(PythonILRSHeader), module, "PythonILRSHeader", 1);
        }

        void t_PythonILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "class_", make_descriptor(PythonILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "wrapfn_", make_descriptor(t_PythonILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonILRSHeader::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonILRSHeader_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonILRSHeader::initializeClass, 1)))
            return NULL;
          return t_PythonILRSHeader::wrap_Object(PythonILRSHeader(((t_PythonILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          PythonILRSHeader object((jobject) NULL);

          INT_CALL(object = PythonILRSHeader());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args)
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

        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data)
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
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolver::class$ = NULL;
        jmethodID *UnivariateSolver::mids$ = NULL;
        bool UnivariateSolver::live$ = false;

        jclass UnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolver");

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
        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolver)[] = {
          { Py_tp_methods, t_UnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateSolver, t_UnivariateSolver, UnivariateSolver);

        void t_UnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolver), &PY_TYPE_DEF(UnivariateSolver), module, "UnivariateSolver", 0);
        }

        void t_UnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "class_", make_descriptor(UnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "wrapfn_", make_descriptor(t_UnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolver::wrap_Object(UnivariateSolver(((t_UnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
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
              mids$[mid_init$_70ec985998eac326] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateIonosphericDelayModifier::BistaticRangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_70ec985998eac326, a0.this$, a1)) {}

          void BistaticRangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void BistaticRangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
#include "org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *DuvenhageAlgorithm::class$ = NULL;
          jmethodID *DuvenhageAlgorithm::mids$ = NULL;
          bool DuvenhageAlgorithm::live$ = false;

          jclass DuvenhageAlgorithm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b9d6d7d34837a50d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;IZ)V");
              mids$[mid_getAlgorithmId_41b1271dfac9173f] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
              mids$[mid_getElevation_824133ce4aec3505] = env->getMethodID(cls, "getElevation", "(DD)D");
              mids$[mid_intersection_465c95e4cb53bef3] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
              mids$[mid_refineIntersection_0b100883a4ceff82] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DuvenhageAlgorithm::DuvenhageAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b9d6d7d34837a50d, a0.this$, a1, a2)) {}

          ::org::orekit::rugged::api::AlgorithmId DuvenhageAlgorithm::getAlgorithmId() const
          {
            return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_41b1271dfac9173f]));
          }

          jdouble DuvenhageAlgorithm::getElevation(jdouble a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getElevation_824133ce4aec3505], a0, a1);
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_465c95e4cb53bef3], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_0b100883a4ceff82], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self);
          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data);
          static PyGetSetDef t_DuvenhageAlgorithm__fields_[] = {
            DECLARE_GET_FIELD(t_DuvenhageAlgorithm, algorithmId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DuvenhageAlgorithm__methods_[] = {
            DECLARE_METHOD(t_DuvenhageAlgorithm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getAlgorithmId, METH_NOARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getElevation, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, intersection, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, refineIntersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DuvenhageAlgorithm)[] = {
            { Py_tp_methods, t_DuvenhageAlgorithm__methods_ },
            { Py_tp_init, (void *) t_DuvenhageAlgorithm_init_ },
            { Py_tp_getset, t_DuvenhageAlgorithm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DuvenhageAlgorithm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DuvenhageAlgorithm, t_DuvenhageAlgorithm, DuvenhageAlgorithm);

          void t_DuvenhageAlgorithm::install(PyObject *module)
          {
            installType(&PY_TYPE(DuvenhageAlgorithm), &PY_TYPE_DEF(DuvenhageAlgorithm), module, "DuvenhageAlgorithm", 0);
          }

          void t_DuvenhageAlgorithm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "class_", make_descriptor(DuvenhageAlgorithm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "wrapfn_", make_descriptor(t_DuvenhageAlgorithm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DuvenhageAlgorithm::initializeClass, 1)))
              return NULL;
            return t_DuvenhageAlgorithm::wrap_Object(DuvenhageAlgorithm(((t_DuvenhageAlgorithm *) arg)->object.this$));
          }
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DuvenhageAlgorithm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
            jint a1;
            jboolean a2;
            DuvenhageAlgorithm object((jobject) NULL);

            if (!parseArgs(args, "kIZ", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = DuvenhageAlgorithm(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self)
          {
            ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
          }

          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getElevation", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1, a2));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data)
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryAttribute.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
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
            mids$[mid_getPlusInside_a66e04f05d5608cc] = env->getMethodID(cls, "getPlusInside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlusOutside_a66e04f05d5608cc] = env->getMethodID(cls, "getPlusOutside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSplitters_ee2e990bb6d19cec] = env->getMethodID(cls, "getSplitters", "()Lorg/hipparchus/geometry/partitioning/NodesSet;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusInside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusInside_a66e04f05d5608cc]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusOutside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusOutside_a66e04f05d5608cc]));
        }

        ::org::hipparchus::geometry::partitioning::NodesSet BoundaryAttribute::getSplitters() const
        {
          return ::org::hipparchus::geometry::partitioning::NodesSet(env->callObjectMethod(this$, mids$[mid_getSplitters_ee2e990bb6d19cec]));
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
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationDataSet::class$ = NULL;
          jmethodID *ObservationDataSet::mids$ = NULL;
          bool ObservationDataSet::live$ = false;

          jclass ObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ebea0da2416dcfb3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/time/AbsoluteDate;IDLjava/util/List;)V");
              mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEventFlag_f2f64475e4580546] = env->getMethodID(cls, "getEventFlag", "()I");
              mids$[mid_getObservationData_a6156df500549a58] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getRcvrClkOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatellite_2d9e00e3b80c70c8] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationDataSet::ObservationDataSet(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebea0da2416dcfb3, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate ObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
          }

          jint ObservationDataSet::getEventFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getEventFlag_f2f64475e4580546]);
          }

          ::java::util::List ObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_a6156df500549a58]));
          }

          jdouble ObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_456d9a2f64d6b28d]);
          }

          ::org::orekit::gnss::SatInSystem ObservationDataSet::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_2d9e00e3b80c70c8]));
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
          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data);
          static PyGetSetDef t_ObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationDataSet, date),
            DECLARE_GET_FIELD(t_ObservationDataSet, eventFlag),
            DECLARE_GET_FIELD(t_ObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_ObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_ObservationDataSet, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_ObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getEventFlag, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationDataSet)[] = {
            { Py_tp_methods, t_ObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_ObservationDataSet_init_ },
            { Py_tp_getset, t_ObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationDataSet, t_ObservationDataSet, ObservationDataSet);

          void t_ObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationDataSet), &PY_TYPE_DEF(ObservationDataSet), module, "ObservationDataSet", 0);
          }

          void t_ObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "class_", make_descriptor(ObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "wrapfn_", make_descriptor(t_ObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_ObservationDataSet::wrap_Object(ObservationDataSet(((t_ObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jint a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            ObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kkIDK", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEventFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEventFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonAbstractFieldOfView.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonAbstractFieldOfView::class$ = NULL;
        jmethodID *PythonAbstractFieldOfView::mids$ = NULL;
        bool PythonAbstractFieldOfView::live$ = false;

        jclass PythonAbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonAbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_260aa711ad5a5b78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_afd63a09f6d01e4c] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractFieldOfView::PythonAbstractFieldOfView(jdouble a0) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        void PythonAbstractFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractFieldOfView::pythonExtension(jlong a0) const
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self);
        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data);
        static PyGetSetDef t_PythonAbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFieldOfView)[] = {
          { Py_tp_methods, t_PythonAbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractFieldOfView_init_ },
          { Py_tp_getset, t_PythonAbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonAbstractFieldOfView, t_PythonAbstractFieldOfView, PythonAbstractFieldOfView);

        void t_PythonAbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractFieldOfView), &PY_TYPE_DEF(PythonAbstractFieldOfView), module, "PythonAbstractFieldOfView", 1);
        }

        void t_PythonAbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "class_", make_descriptor(PythonAbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "wrapfn_", make_descriptor(t_PythonAbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonAbstractFieldOfView_getFootprint0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonAbstractFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractFieldOfView::wrap_Object(PythonAbstractFieldOfView(((t_PythonAbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          PythonAbstractFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = PythonAbstractFieldOfView(a0));
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

        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
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

        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalPropertiesKey::class$ = NULL;
              jmethodID *OrbitPhysicalPropertiesKey::mids$ = NULL;
              bool OrbitPhysicalPropertiesKey::live$ = false;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_POINTING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::BUS_MODEL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::COMMENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DOCKED_WITH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRY_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_BOL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_REMAINING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::INITIAL_WET_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IZZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MANUFACTURER = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MAX_THRUST = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q1 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q2 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q3 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_QC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::REFLECTANCE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SRP_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_ABSOLUTE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::WET_MASS = NULL;

              jclass OrbitPhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_9691cb9ab8d4852f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;)Z");
                  mids$[mid_valueOf_542c22dd777a9b5c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");
                  mids$[mid_values_8a33e09d36a0b824] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AREA_ALONG_OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MAX_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MAX_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MIN_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MIN_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_TYP_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_TYP_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_ACTUATOR_TYPE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_ACTUATOR_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL_MODE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_KNOWLEDGE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_KNOWLEDGE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_POINTING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_POINTING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AVG_MANEUVER_FREQ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AVG_MANEUVER_FREQ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  BUS_MODEL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "BUS_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  COMMENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DOCKED_WITH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DOCKED_WITH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_COEFF_NOM = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF_NOM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRY_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_BOL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_BOL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_REMAINING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_REMAINING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  INITIAL_WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "INITIAL_WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IZZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MANUFACTURER = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MANUFACTURER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MAX_THRUST = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MAX_THRUST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME_EPOCH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q1 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q2 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q3 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_QC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  REFLECTANCE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_COEFF = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SRP_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SRP_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_ABSOLUTE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitPhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_9691cb9ab8d4852f], a0.this$, a1.this$, a2.this$);
              }

              OrbitPhysicalPropertiesKey OrbitPhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitPhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_542c22dd777a9b5c], a0.this$));
              }

              JArray< OrbitPhysicalPropertiesKey > OrbitPhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitPhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8a33e09d36a0b824]));
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
              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_OrbitPhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitPhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_OrbitPhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitPhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalPropertiesKey, t_OrbitPhysicalPropertiesKey, OrbitPhysicalPropertiesKey);
              PyObject *t_OrbitPhysicalPropertiesKey::wrap_Object(const OrbitPhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitPhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitPhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalPropertiesKey), &PY_TYPE_DEF(OrbitPhysicalPropertiesKey), module, "OrbitPhysicalPropertiesKey", 0);
              }

              void t_OrbitPhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "class_", make_descriptor(OrbitPhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "wrapfn_", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitPhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MAX_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MIN_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_TYP_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_ACTUATOR_TYPE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL_MODE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_KNOWLEDGE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_POINTING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_POINTING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AVG_MANEUVER_FREQ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "BUS_MODEL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::BUS_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "COMMENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DOCKED_WITH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DOCKED_WITH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_COEFF_NOM", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_BOL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_BOL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_REMAINING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_REMAINING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "INITIAL_WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::INITIAL_WET_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IZZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MANUFACTURER", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MANUFACTURER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MAX_THRUST", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MAX_THRUST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q1", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q2", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q3", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_QC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "REFLECTANCE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::REFLECTANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_COEFF", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SRP_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SRP_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_ABSOLUTE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalPropertiesKey::wrap_Object(OrbitPhysicalPropertiesKey(((t_OrbitPhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitPhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::valueOf(a0));
                  return t_OrbitPhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< OrbitPhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitPhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data)
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
#include "org/hipparchus/special/Erf.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Erf::class$ = NULL;
      jmethodID *Erf::mids$ = NULL;
      bool Erf::live$ = false;

      jclass Erf::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Erf");

          mids$ = new jmethodID[max_mid];
          mids$[mid_erf_0ba5fed9597b693e] = env->getStaticMethodID(cls, "erf", "(D)D");
          mids$[mid_erf_d3398190482814dc] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erf_824133ce4aec3505] = env->getStaticMethodID(cls, "erf", "(DD)D");
          mids$[mid_erf_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfInv_0ba5fed9597b693e] = env->getStaticMethodID(cls, "erfInv", "(D)D");
          mids$[mid_erfInv_d3398190482814dc] = env->getStaticMethodID(cls, "erfInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfc_0ba5fed9597b693e] = env->getStaticMethodID(cls, "erfc", "(D)D");
          mids$[mid_erfc_d3398190482814dc] = env->getStaticMethodID(cls, "erfc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfcInv_0ba5fed9597b693e] = env->getStaticMethodID(cls, "erfcInv", "(D)D");
          mids$[mid_erfcInv_d3398190482814dc] = env->getStaticMethodID(cls, "erfcInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Erf::erf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_d3398190482814dc], a0.this$));
      }

      jdouble Erf::erf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble Erf::erfInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfInv_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfInv_d3398190482814dc], a0.this$));
      }

      jdouble Erf::erfc(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfc_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfc(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfc_d3398190482814dc], a0.this$));
      }

      jdouble Erf::erfcInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfcInv_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfcInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfcInv_d3398190482814dc], a0.this$));
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
      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Erf__methods_[] = {
        DECLARE_METHOD(t_Erf, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, erf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfInv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfc, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfcInv, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Erf)[] = {
        { Py_tp_methods, t_Erf__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Erf)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Erf, t_Erf, Erf);

      void t_Erf::install(PyObject *module)
      {
        installType(&PY_TYPE(Erf), &PY_TYPE_DEF(Erf), module, "Erf", 0);
      }

      void t_Erf::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "class_", make_descriptor(Erf::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "wrapfn_", make_descriptor(t_Erf::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Erf::initializeClass, 1)))
          return NULL;
        return t_Erf::wrap_Object(Erf(((t_Erf *) arg)->object.this$));
      }
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Erf::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erf", args);
        return NULL;
      }

      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfInv", args);
        return NULL;
      }

      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfc", args);
        return NULL;
      }

      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfcInv", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue$Event::class$ = NULL;
          jmethodID *FieldRecordAndContinue$Event::mids$ = NULL;
          bool FieldRecordAndContinue$Event::live$ = false;

          jclass FieldRecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_9afb3f6694da2222] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
              mids$[mid_getState_a553824829fc2514] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isIncreasing_e470b6d9e0d979db] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::FieldEventDetector FieldRecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9afb3f6694da2222]));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldRecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_a553824829fc2514]));
          }

          jboolean FieldRecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_e470b6d9e0d979db]);
          }

          ::java::lang::String FieldRecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, state),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue$Event)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue$Event, t_FieldRecordAndContinue$Event, FieldRecordAndContinue$Event);
          PyObject *t_FieldRecordAndContinue$Event::wrap_Object(const FieldRecordAndContinue$Event& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue$Event::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue$Event), &PY_TYPE_DEF(FieldRecordAndContinue$Event), module, "FieldRecordAndContinue$Event", 0);
          }

          void t_FieldRecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "class_", make_descriptor(FieldRecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "wrapfn_", make_descriptor(t_FieldRecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue$Event::wrap_Object(FieldRecordAndContinue$Event(((t_FieldRecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldRecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile::class$ = NULL;
          jmethodID *Percentile::mids$ = NULL;
          bool Percentile::live$ = false;

          jclass Percentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_copy_687ecc328a5dc919] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_evaluate_0ba5fed9597b693e] = env->getMethodID(cls, "evaluate", "(D)D");
              mids$[mid_evaluate_926a8b9763aa0b21] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_346318efe67d9ca8] = env->getMethodID(cls, "evaluate", "([DIID)D");
              mids$[mid_getEstimationType_0c09ecaa3168cf74] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_485854411e6d0542] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_9a708dd74e04e9b8] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_getPivotingStrategy_2b26bc6a688cfe7a] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
              mids$[mid_getQuantile_456d9a2f64d6b28d] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_setData_ebc26dcaf4761286] = env->getMethodID(cls, "setData", "([D)V");
              mids$[mid_setData_d3508f432c1d798d] = env->getMethodID(cls, "setData", "([DII)V");
              mids$[mid_setQuantile_77e0f9a1f260e2e5] = env->getMethodID(cls, "setQuantile", "(D)V");
              mids$[mid_withEstimationType_1cf68d4acf585332] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withKthSelector_7ba25bf5eb4cfe80] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withNaNStrategy_a2f6eb1a3014d342] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_getWorkArray_27a40d66e0497a45] = env->getMethodID(cls, "getWorkArray", "([DII)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Percentile::Percentile() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          Percentile::Percentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          Percentile Percentile::copy() const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_copy_687ecc328a5dc919]));
          }

          jdouble Percentile::evaluate(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0ba5fed9597b693e], a0);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_926a8b9763aa0b21], a0.this$, a1);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_346318efe67d9ca8], a0.this$, a1, a2, a3);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Percentile::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_0c09ecaa3168cf74]));
          }

          ::org::hipparchus::util::KthSelector Percentile::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_485854411e6d0542]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Percentile::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_9a708dd74e04e9b8]));
          }

          ::org::hipparchus::util::PivotingStrategy Percentile::getPivotingStrategy() const
          {
            return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_2b26bc6a688cfe7a]));
          }

          jdouble Percentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_456d9a2f64d6b28d]);
          }

          void Percentile::setData(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_ebc26dcaf4761286], a0.this$);
          }

          void Percentile::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_d3508f432c1d798d], a0.this$, a1, a2);
          }

          void Percentile::setQuantile(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setQuantile_77e0f9a1f260e2e5], a0);
          }

          Percentile Percentile::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withEstimationType_1cf68d4acf585332], a0.this$));
          }

          Percentile Percentile::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withKthSelector_7ba25bf5eb4cfe80], a0.this$));
          }

          Percentile Percentile::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_a2f6eb1a3014d342], a0.this$));
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
        namespace rank {
          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_getEstimationType(t_Percentile *self);
          static PyObject *t_Percentile_getKthSelector(t_Percentile *self);
          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getQuantile(t_Percentile *self);
          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg);
          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data);
          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data);
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data);
          static PyGetSetDef t_Percentile__fields_[] = {
            DECLARE_SET_FIELD(t_Percentile, data),
            DECLARE_GET_FIELD(t_Percentile, estimationType),
            DECLARE_GET_FIELD(t_Percentile, kthSelector),
            DECLARE_GET_FIELD(t_Percentile, naNStrategy),
            DECLARE_GET_FIELD(t_Percentile, pivotingStrategy),
            DECLARE_GETSET_FIELD(t_Percentile, quantile),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile__methods_[] = {
            DECLARE_METHOD(t_Percentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getPivotingStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, setData, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, setQuantile, METH_O),
            DECLARE_METHOD(t_Percentile, withEstimationType, METH_O),
            DECLARE_METHOD(t_Percentile, withKthSelector, METH_O),
            DECLARE_METHOD(t_Percentile, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile)[] = {
            { Py_tp_methods, t_Percentile__methods_ },
            { Py_tp_init, (void *) t_Percentile_init_ },
            { Py_tp_getset, t_Percentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Percentile, t_Percentile, Percentile);

          void t_Percentile::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile), &PY_TYPE_DEF(Percentile), module, "Percentile", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "EstimationType", make_descriptor(&PY_TYPE_DEF(Percentile$EstimationType)));
          }

          void t_Percentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "class_", make_descriptor(Percentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "wrapfn_", make_descriptor(t_Percentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile::initializeClass, 1)))
              return NULL;
            return t_Percentile::wrap_Object(Percentile(((t_Percentile *) arg)->object.this$));
          }
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Percentile object((jobject) NULL);

                INT_CALL(object = Percentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                Percentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Percentile(a0));
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

          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args)
          {
            Percentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Percentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.evaluate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
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
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Percentile_getEstimationType(t_Percentile *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Percentile_getKthSelector(t_Percentile *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self)
          {
            ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getQuantile(t_Percentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(self->object.setData(a0));
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
                  OBJ_CALL(self->object.setData(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "setData", args, 2);
          }

          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setQuantile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setQuantile", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setData(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "data", arg);
            return -1;
          }

          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQuantile());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setQuantile(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "quantile", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/EllipsoidTessellator.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *EllipsoidTessellator::class$ = NULL;
          jmethodID *EllipsoidTessellator::mids$ = NULL;
          bool EllipsoidTessellator::live$ = false;

          jclass EllipsoidTessellator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/EllipsoidTessellator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1d72ce5b6214517] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/tessellation/TileAiming;I)V");
              mids$[mid_buildSimpleZone_972ad3b145fbdad3] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_buildSimpleZone_193b19c7bc9b5658] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[[D)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_sample_691d391c003bb406] = env->getMethodID(cls, "sample", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DD)Ljava/util/List;");
              mids$[mid_tessellate_8f4fe2c71cdb9b48] = env->getMethodID(cls, "tessellate", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DDDDZZ)Ljava/util/List;");
              mids$[mid_toGeodetic_762a43dc39ec9e40] = env->getMethodID(cls, "toGeodetic", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EllipsoidTessellator::EllipsoidTessellator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::tessellation::TileAiming & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1d72ce5b6214517, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< ::org::orekit::bodies::GeodeticPoint > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_972ad3b145fbdad3], a0, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< JArray< jdouble > > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_193b19c7bc9b5658], a0, a1.this$));
          }

          ::java::util::List EllipsoidTessellator::sample(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_sample_691d391c003bb406], a0.this$, a1, a2));
          }

          ::java::util::List EllipsoidTessellator::tessellate(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, jboolean a6) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_tessellate_8f4fe2c71cdb9b48], a0.this$, a1, a2, a3, a4, a5, a6));
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
        namespace tessellation {
          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args);
          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args);
          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args);

          static PyMethodDef t_EllipsoidTessellator__methods_[] = {
            DECLARE_METHOD(t_EllipsoidTessellator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, buildSimpleZone, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, sample, METH_VARARGS),
            DECLARE_METHOD(t_EllipsoidTessellator, tessellate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EllipsoidTessellator)[] = {
            { Py_tp_methods, t_EllipsoidTessellator__methods_ },
            { Py_tp_init, (void *) t_EllipsoidTessellator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EllipsoidTessellator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EllipsoidTessellator, t_EllipsoidTessellator, EllipsoidTessellator);

          void t_EllipsoidTessellator::install(PyObject *module)
          {
            installType(&PY_TYPE(EllipsoidTessellator), &PY_TYPE_DEF(EllipsoidTessellator), module, "EllipsoidTessellator", 0);
          }

          void t_EllipsoidTessellator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "class_", make_descriptor(EllipsoidTessellator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "wrapfn_", make_descriptor(t_EllipsoidTessellator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EllipsoidTessellator::initializeClass, 1)))
              return NULL;
            return t_EllipsoidTessellator::wrap_Object(EllipsoidTessellator(((t_EllipsoidTessellator *) arg)->object.this$));
          }
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EllipsoidTessellator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::tessellation::TileAiming a1((jobject) NULL);
            jint a2;
            EllipsoidTessellator object((jobject) NULL);

            if (!parseArgs(args, "kkI", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::tessellation::TileAiming::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EllipsoidTessellator(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< ::org::orekit::bodies::GeodeticPoint > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                JArray< JArray< jdouble > > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[[D", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "buildSimpleZone", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.sample(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sample", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jboolean a5;
            jboolean a6;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDDDDZZ", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = self->object.tessellate(a0, a1, a2, a3, a4, a5, a6));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "tessellate", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomAdaptor.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomAdaptor::class$ = NULL;
      jmethodID *RandomAdaptor::mids$ = NULL;
      bool RandomAdaptor::live$ = false;

      jclass RandomAdaptor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomAdaptor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bb31e8cbfaf41e63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_9c4b35f0a6dc87f3] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_125b1e9f043b29f8] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_966c782d3223854d] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_456d9a2f64d6b28d] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_38565d58479aa24a] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_a27fc9afd27e559d] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_955f7541fca701ab] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_of_d6bc517fbd1cc55f] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Ljava/util/Random;");
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_fefb08975c10f0a1] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomAdaptor::RandomAdaptor(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::util::Random(env->newObject(initializeClass, &mids$, mid_init$_bb31e8cbfaf41e63, a0.this$)) {}

      jboolean RandomAdaptor::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_e470b6d9e0d979db]);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_9c4b35f0a6dc87f3], a0.this$);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_125b1e9f043b29f8], a0.this$, a1, a2);
      }

      jdouble RandomAdaptor::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
      }

      jfloat RandomAdaptor::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_966c782d3223854d]);
      }

      jdouble RandomAdaptor::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_456d9a2f64d6b28d]);
      }

      jint RandomAdaptor::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      jint RandomAdaptor::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_38565d58479aa24a], a0);
      }

      jlong RandomAdaptor::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_a27fc9afd27e559d]);
      }

      jlong RandomAdaptor::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_955f7541fca701ab], a0);
      }

      ::java::util::Random RandomAdaptor::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Random(env->callStaticObjectMethod(cls, mids$[mid_of_d6bc517fbd1cc55f], a0.this$));
      }

      void RandomAdaptor::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
      }

      void RandomAdaptor::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_0a2a1ac2721c0336], a0);
      }

      void RandomAdaptor::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_fefb08975c10f0a1], a0);
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
      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args);
      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomAdaptor__fields_[] = {
        DECLARE_SET_FIELD(t_RandomAdaptor, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomAdaptor__methods_[] = {
        DECLARE_METHOD(t_RandomAdaptor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, of, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomAdaptor)[] = {
        { Py_tp_methods, t_RandomAdaptor__methods_ },
        { Py_tp_init, (void *) t_RandomAdaptor_init_ },
        { Py_tp_getset, t_RandomAdaptor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomAdaptor)[] = {
        &PY_TYPE_DEF(::java::util::Random),
        NULL
      };

      DEFINE_TYPE(RandomAdaptor, t_RandomAdaptor, RandomAdaptor);

      void t_RandomAdaptor::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomAdaptor), &PY_TYPE_DEF(RandomAdaptor), module, "RandomAdaptor", 0);
      }

      void t_RandomAdaptor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "class_", make_descriptor(RandomAdaptor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "wrapfn_", make_descriptor(t_RandomAdaptor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomAdaptor::initializeClass, 1)))
          return NULL;
        return t_RandomAdaptor::wrap_Object(RandomAdaptor(((t_RandomAdaptor *) arg)->object.this$));
      }
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomAdaptor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomAdaptor object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = RandomAdaptor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args)
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

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args)
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

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args)
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

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        ::java::util::Random result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomAdaptor::of(a0));
          return ::java::util::t_Random::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }

      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args)
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

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersOffsetComputer::class$ = NULL;
          jmethodID *PhaseCentersOffsetComputer::mids$ = NULL;
          bool PhaseCentersOffsetComputer::live$ = false;

          jclass PhaseCentersOffsetComputer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_55b30db589ada038] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_offset_f5d825315c22c65f] = env->getMethodID(cls, "offset", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersOffsetComputer::PhaseCentersOffsetComputer(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55b30db589ada038, a0.this$, a1.this$)) {}

          jdouble PhaseCentersOffsetComputer::offset(const ::org::orekit::frames::StaticTransform & a0, const ::org::orekit::frames::StaticTransform & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_f5d825315c22c65f], a0.this$, a1.this$);
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
          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args);

          static PyMethodDef t_PhaseCentersOffsetComputer__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, offset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersOffsetComputer)[] = {
            { Py_tp_methods, t_PhaseCentersOffsetComputer__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersOffsetComputer_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersOffsetComputer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersOffsetComputer, t_PhaseCentersOffsetComputer, PhaseCentersOffsetComputer);

          void t_PhaseCentersOffsetComputer::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersOffsetComputer), &PY_TYPE_DEF(PhaseCentersOffsetComputer), module, "PhaseCentersOffsetComputer", 0);
          }

          void t_PhaseCentersOffsetComputer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "class_", make_descriptor(PhaseCentersOffsetComputer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "wrapfn_", make_descriptor(t_PhaseCentersOffsetComputer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersOffsetComputer::wrap_Object(PhaseCentersOffsetComputer(((t_PhaseCentersOffsetComputer *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersOffsetComputer object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersOffsetComputer(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args)
          {
            ::org::orekit::frames::StaticTransform a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::frames::StaticTransform::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.offset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/TrapezoidIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *TrapezoidIntegrator::class$ = NULL;
        jmethodID *TrapezoidIntegrator::mids$ = NULL;
        bool TrapezoidIntegrator::live$ = false;
        jint TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass TrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/TrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_b5a15021085cabdb] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_456d9a2f64d6b28d] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TrapezoidIntegrator::TrapezoidIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5a15021085cabdb, a0, a1, a2, a3)) {}
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
        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_TrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_TrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrapezoidIntegrator)[] = {
          { Py_tp_methods, t_TrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_TrapezoidIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(TrapezoidIntegrator, t_TrapezoidIntegrator, TrapezoidIntegrator);

        void t_TrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrapezoidIntegrator), &PY_TYPE_DEF(TrapezoidIntegrator), module, "TrapezoidIntegrator", 0);
        }

        void t_TrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "class_", make_descriptor(TrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "wrapfn_", make_descriptor(t_TrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(TrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_TrapezoidIntegrator::wrap_Object(TrapezoidIntegrator(((t_TrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              TrapezoidIntegrator object((jobject) NULL);

              INT_CALL(object = TrapezoidIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1));
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
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1, a2, a3));
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
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *RichardsonExpansion::class$ = NULL;
      jmethodID *RichardsonExpansion::mids$ = NULL;
      bool RichardsonExpansion::live$ = false;

      jclass RichardsonExpansion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/RichardsonExpansion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7c0e827f658a0910] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/LagrangianPoints;)V");
          mids$[mid_computeHaloFirstGuess_981e0a2d070cf52a] = env->getMethodID(cls, "computeHaloFirstGuess", "(DLorg/orekit/orbits/LibrationOrbitFamily;DD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunovFirstGuess_fadd635b5f68d5a2] = env->getMethodID(cls, "computeLyapunovFirstGuess", "(DDD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getCr3bpSystem_fd816a5468a737d0] = env->getMethodID(cls, "getCr3bpSystem", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getHaloOrbitalPeriod_0ba5fed9597b693e] = env->getMethodID(cls, "getHaloOrbitalPeriod", "(D)D");
          mids$[mid_getLagrangianPoint_08b2c4e71b2f5ee4] = env->getMethodID(cls, "getLagrangianPoint", "()Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_getLyapunovOrbitalPeriod_0ba5fed9597b693e] = env->getMethodID(cls, "getLyapunovOrbitalPeriod", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RichardsonExpansion::RichardsonExpansion(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::LagrangianPoints & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c0e827f658a0910, a0.this$, a1.this$)) {}

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeHaloFirstGuess(jdouble a0, const ::org::orekit::orbits::LibrationOrbitFamily & a1, jdouble a2, jdouble a3) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeHaloFirstGuess_981e0a2d070cf52a], a0, a1.this$, a2, a3));
      }

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeLyapunovFirstGuess(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunovFirstGuess_fadd635b5f68d5a2], a0, a1, a2));
      }

      ::org::orekit::bodies::CR3BPSystem RichardsonExpansion::getCr3bpSystem() const
      {
        return ::org::orekit::bodies::CR3BPSystem(env->callObjectMethod(this$, mids$[mid_getCr3bpSystem_fd816a5468a737d0]));
      }

      jdouble RichardsonExpansion::getHaloOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHaloOrbitalPeriod_0ba5fed9597b693e], a0);
      }

      ::org::orekit::utils::LagrangianPoints RichardsonExpansion::getLagrangianPoint() const
      {
        return ::org::orekit::utils::LagrangianPoints(env->callObjectMethod(this$, mids$[mid_getLagrangianPoint_08b2c4e71b2f5ee4]));
      }

      jdouble RichardsonExpansion::getLyapunovOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLyapunovOrbitalPeriod_0ba5fed9597b693e], a0);
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
      static PyObject *t_RichardsonExpansion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RichardsonExpansion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RichardsonExpansion_init_(t_RichardsonExpansion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RichardsonExpansion_computeHaloFirstGuess(t_RichardsonExpansion *self, PyObject *args);
      static PyObject *t_RichardsonExpansion_computeLyapunovFirstGuess(t_RichardsonExpansion *self, PyObject *args);
      static PyObject *t_RichardsonExpansion_getCr3bpSystem(t_RichardsonExpansion *self);
      static PyObject *t_RichardsonExpansion_getHaloOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg);
      static PyObject *t_RichardsonExpansion_getLagrangianPoint(t_RichardsonExpansion *self);
      static PyObject *t_RichardsonExpansion_getLyapunovOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg);
      static PyObject *t_RichardsonExpansion_get__cr3bpSystem(t_RichardsonExpansion *self, void *data);
      static PyObject *t_RichardsonExpansion_get__lagrangianPoint(t_RichardsonExpansion *self, void *data);
      static PyGetSetDef t_RichardsonExpansion__fields_[] = {
        DECLARE_GET_FIELD(t_RichardsonExpansion, cr3bpSystem),
        DECLARE_GET_FIELD(t_RichardsonExpansion, lagrangianPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RichardsonExpansion__methods_[] = {
        DECLARE_METHOD(t_RichardsonExpansion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RichardsonExpansion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RichardsonExpansion, computeHaloFirstGuess, METH_VARARGS),
        DECLARE_METHOD(t_RichardsonExpansion, computeLyapunovFirstGuess, METH_VARARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getCr3bpSystem, METH_NOARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getHaloOrbitalPeriod, METH_O),
        DECLARE_METHOD(t_RichardsonExpansion, getLagrangianPoint, METH_NOARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getLyapunovOrbitalPeriod, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RichardsonExpansion)[] = {
        { Py_tp_methods, t_RichardsonExpansion__methods_ },
        { Py_tp_init, (void *) t_RichardsonExpansion_init_ },
        { Py_tp_getset, t_RichardsonExpansion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RichardsonExpansion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RichardsonExpansion, t_RichardsonExpansion, RichardsonExpansion);

      void t_RichardsonExpansion::install(PyObject *module)
      {
        installType(&PY_TYPE(RichardsonExpansion), &PY_TYPE_DEF(RichardsonExpansion), module, "RichardsonExpansion", 0);
      }

      void t_RichardsonExpansion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "class_", make_descriptor(RichardsonExpansion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "wrapfn_", make_descriptor(t_RichardsonExpansion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RichardsonExpansion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RichardsonExpansion::initializeClass, 1)))
          return NULL;
        return t_RichardsonExpansion::wrap_Object(RichardsonExpansion(((t_RichardsonExpansion *) arg)->object.this$));
      }
      static PyObject *t_RichardsonExpansion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RichardsonExpansion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RichardsonExpansion_init_(t_RichardsonExpansion *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::LagrangianPoints a1((jobject) NULL);
        PyTypeObject **p1;
        RichardsonExpansion object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          INT_CALL(object = RichardsonExpansion(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RichardsonExpansion_computeHaloFirstGuess(t_RichardsonExpansion *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::LibrationOrbitFamily a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jdouble a3;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "DKDD", ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeHaloFirstGuess(a0, a1, a2, a3));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeHaloFirstGuess", args);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_computeLyapunovFirstGuess(t_RichardsonExpansion *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeLyapunovFirstGuess(a0, a1, a2));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeLyapunovFirstGuess", args);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_getCr3bpSystem(t_RichardsonExpansion *self)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getCr3bpSystem());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_RichardsonExpansion_getHaloOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getHaloOrbitalPeriod(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getHaloOrbitalPeriod", arg);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_getLagrangianPoint(t_RichardsonExpansion *self)
      {
        ::org::orekit::utils::LagrangianPoints result((jobject) NULL);
        OBJ_CALL(result = self->object.getLagrangianPoint());
        return ::org::orekit::utils::t_LagrangianPoints::wrap_Object(result);
      }

      static PyObject *t_RichardsonExpansion_getLyapunovOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getLyapunovOrbitalPeriod(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLyapunovOrbitalPeriod", arg);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_get__cr3bpSystem(t_RichardsonExpansion *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getCr3bpSystem());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }

      static PyObject *t_RichardsonExpansion_get__lagrangianPoint(t_RichardsonExpansion *self, void *data)
      {
        ::org::orekit::utils::LagrangianPoints value((jobject) NULL);
        OBJ_CALL(value = self->object.getLagrangianPoint());
        return ::org::orekit::utils::t_LagrangianPoints::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/InitialGuess.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *InitialGuess::class$ = NULL;
      jmethodID *InitialGuess::mids$ = NULL;
      bool InitialGuess::live$ = false;

      jclass InitialGuess::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/InitialGuess");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_getInitialGuess_7cdc325af0834901] = env->getMethodID(cls, "getInitialGuess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InitialGuess::InitialGuess(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      JArray< jdouble > InitialGuess::getInitialGuess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialGuess_7cdc325af0834901]));
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
      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self);
      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data);
      static PyGetSetDef t_InitialGuess__fields_[] = {
        DECLARE_GET_FIELD(t_InitialGuess, initialGuess),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InitialGuess__methods_[] = {
        DECLARE_METHOD(t_InitialGuess, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, getInitialGuess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InitialGuess)[] = {
        { Py_tp_methods, t_InitialGuess__methods_ },
        { Py_tp_init, (void *) t_InitialGuess_init_ },
        { Py_tp_getset, t_InitialGuess__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InitialGuess)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InitialGuess, t_InitialGuess, InitialGuess);

      void t_InitialGuess::install(PyObject *module)
      {
        installType(&PY_TYPE(InitialGuess), &PY_TYPE_DEF(InitialGuess), module, "InitialGuess", 0);
      }

      void t_InitialGuess::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "class_", make_descriptor(InitialGuess::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "wrapfn_", make_descriptor(t_InitialGuess::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InitialGuess::initializeClass, 1)))
          return NULL;
        return t_InitialGuess::wrap_Object(InitialGuess(((t_InitialGuess *) arg)->object.this$));
      }
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InitialGuess::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        InitialGuess object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = InitialGuess(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialGuess());
        return result.wrap();
      }

      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialGuess());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *BodiesElements::class$ = NULL;
      jmethodID *BodiesElements::mids$ = NULL;
      bool BodiesElements::live$ = false;

      jclass BodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/BodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_11c1af2a75beb746] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD)V");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLJu_456d9a2f64d6b28d] = env->getMethodID(cls, "getLJu", "()D");
          mids$[mid_getLJuDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLJuDot", "()D");
          mids$[mid_getLMa_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMa", "()D");
          mids$[mid_getLMaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMaDot", "()D");
          mids$[mid_getLMe_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMe", "()D");
          mids$[mid_getLMeDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMeDot", "()D");
          mids$[mid_getLNe_456d9a2f64d6b28d] = env->getMethodID(cls, "getLNe", "()D");
          mids$[mid_getLNeDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLNeDot", "()D");
          mids$[mid_getLSa_456d9a2f64d6b28d] = env->getMethodID(cls, "getLSa", "()D");
          mids$[mid_getLSaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLSaDot", "()D");
          mids$[mid_getLUr_456d9a2f64d6b28d] = env->getMethodID(cls, "getLUr", "()D");
          mids$[mid_getLUrDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLUrDot", "()D");
          mids$[mid_getLVe_456d9a2f64d6b28d] = env->getMethodID(cls, "getLVe", "()D");
          mids$[mid_getLVeDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLVeDot", "()D");
          mids$[mid_getPa_456d9a2f64d6b28d] = env->getMethodID(cls, "getPa", "()D");
          mids$[mid_getPaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getPaDot", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodiesElements::BodiesElements(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jdouble a16, jdouble a17, jdouble a18, jdouble a19, jdouble a20, jdouble a21, jdouble a22, jdouble a23, jdouble a24, jdouble a25, jdouble a26, jdouble a27, jdouble a28, jdouble a29, jdouble a30, jdouble a31) : ::org::orekit::data::DelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_11c1af2a75beb746, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31)) {}

      jdouble BodiesElements::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLJu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJu_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLJuDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJuDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLMa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMa_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLMaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMaDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLMe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMe_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLMeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMeDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLNe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNe_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLNeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNeDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLSa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSa_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLSaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSaDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLUr() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUr_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLUrDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUrDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLVe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVe_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getLVeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVeDot_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getPa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPa_456d9a2f64d6b28d]);
      }

      jdouble BodiesElements::getPaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPaDot_456d9a2f64d6b28d]);
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
      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data);
      static PyGetSetDef t_BodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_BodiesElements, lE),
        DECLARE_GET_FIELD(t_BodiesElements, lEDot),
        DECLARE_GET_FIELD(t_BodiesElements, lJu),
        DECLARE_GET_FIELD(t_BodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMa),
        DECLARE_GET_FIELD(t_BodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMe),
        DECLARE_GET_FIELD(t_BodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lNe),
        DECLARE_GET_FIELD(t_BodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lSa),
        DECLARE_GET_FIELD(t_BodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lUr),
        DECLARE_GET_FIELD(t_BodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_BodiesElements, lVe),
        DECLARE_GET_FIELD(t_BodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_BodiesElements, pa),
        DECLARE_GET_FIELD(t_BodiesElements, paDot),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodiesElements__methods_[] = {
        DECLARE_METHOD(t_BodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodiesElements)[] = {
        { Py_tp_methods, t_BodiesElements__methods_ },
        { Py_tp_init, (void *) t_BodiesElements_init_ },
        { Py_tp_getset, t_BodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::DelaunayArguments),
        NULL
      };

      DEFINE_TYPE(BodiesElements, t_BodiesElements, BodiesElements);

      void t_BodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(BodiesElements), &PY_TYPE_DEF(BodiesElements), module, "BodiesElements", 0);
      }

      void t_BodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "class_", make_descriptor(BodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "wrapfn_", make_descriptor(t_BodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodiesElements::initializeClass, 1)))
          return NULL;
        return t_BodiesElements::wrap_Object(BodiesElements(((t_BodiesElements *) arg)->object.this$));
      }
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
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
        jdouble a12;
        jdouble a13;
        jdouble a14;
        jdouble a15;
        jdouble a16;
        jdouble a17;
        jdouble a18;
        jdouble a19;
        jdouble a20;
        jdouble a21;
        jdouble a22;
        jdouble a23;
        jdouble a24;
        jdouble a25;
        jdouble a26;
        jdouble a27;
        jdouble a28;
        jdouble a29;
        jdouble a30;
        jdouble a31;
        BodiesElements object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19, &a20, &a21, &a22, &a23, &a24, &a25, &a26, &a27, &a28, &a29, &a30, &a31))
        {
          INT_CALL(object = BodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJuDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUr());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUrDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJuDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUr());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUrDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPaDot());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray::class$ = NULL;
      jmethodID *ResizableDoubleArray::mids$ = NULL;
      bool ResizableDoubleArray::live$ = false;

      jclass ResizableDoubleArray::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_13f7a72902bf1e20] = env->getMethodID(cls, "<init>", "(IDD)V");
          mids$[mid_init$_985955375daf760b] = env->getMethodID(cls, "<init>", "(IDDLorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;[D)V");
          mids$[mid_addElement_77e0f9a1f260e2e5] = env->getMethodID(cls, "addElement", "(D)V");
          mids$[mid_addElementRolling_0ba5fed9597b693e] = env->getMethodID(cls, "addElementRolling", "(D)D");
          mids$[mid_addElements_ebc26dcaf4761286] = env->getMethodID(cls, "addElements", "([D)V");
          mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_compute_ecb308087b03a390] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/util/MathArrays$Function;)D");
          mids$[mid_contract_7ae3461a92a43152] = env->getMethodID(cls, "contract", "()V");
          mids$[mid_copy_3d2d3ed8718aeea1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/util/ResizableDoubleArray;");
          mids$[mid_discardFrontElements_0a2a1ac2721c0336] = env->getMethodID(cls, "discardFrontElements", "(I)V");
          mids$[mid_discardMostRecentElements_0a2a1ac2721c0336] = env->getMethodID(cls, "discardMostRecentElements", "(I)V");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCapacity_f2f64475e4580546] = env->getMethodID(cls, "getCapacity", "()I");
          mids$[mid_getContractionCriterion_456d9a2f64d6b28d] = env->getMethodID(cls, "getContractionCriterion", "()D");
          mids$[mid_getElement_b772323fc98b7293] = env->getMethodID(cls, "getElement", "(I)D");
          mids$[mid_getElements_7cdc325af0834901] = env->getMethodID(cls, "getElements", "()[D");
          mids$[mid_getExpansionFactor_456d9a2f64d6b28d] = env->getMethodID(cls, "getExpansionFactor", "()D");
          mids$[mid_getExpansionMode_321b8dd6e9847f20] = env->getMethodID(cls, "getExpansionMode", "()Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_getNumElements_f2f64475e4580546] = env->getMethodID(cls, "getNumElements", "()I");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_setElement_987a5fb872043b12] = env->getMethodID(cls, "setElement", "(ID)V");
          mids$[mid_setNumElements_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumElements", "(I)V");
          mids$[mid_substituteMostRecentElement_0ba5fed9597b693e] = env->getMethodID(cls, "substituteMostRecentElement", "(D)D");
          mids$[mid_checkContractExpand_1d715fa3b7b756e1] = env->getMethodID(cls, "checkContractExpand", "(DD)V");
          mids$[mid_getArrayRef_7cdc325af0834901] = env->getMethodID(cls, "getArrayRef", "()[D");
          mids$[mid_getStartIndex_f2f64475e4580546] = env->getMethodID(cls, "getStartIndex", "()I");
          mids$[mid_expand_7ae3461a92a43152] = env->getMethodID(cls, "expand", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray::ResizableDoubleArray() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ResizableDoubleArray::ResizableDoubleArray(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13f7a72902bf1e20, a0, a1, a2)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2, const ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_985955375daf760b, a0, a1, a2, a3.this$, a4.this$)) {}

      void ResizableDoubleArray::addElement(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElement_77e0f9a1f260e2e5], a0);
      }

      jdouble ResizableDoubleArray::addElementRolling(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_addElementRolling_0ba5fed9597b693e], a0);
      }

      void ResizableDoubleArray::addElements(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElements_ebc26dcaf4761286], a0.this$);
      }

      void ResizableDoubleArray::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
      }

      jdouble ResizableDoubleArray::compute(const ::org::hipparchus::util::MathArrays$Function & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_compute_ecb308087b03a390], a0.this$);
      }

      void ResizableDoubleArray::contract() const
      {
        env->callVoidMethod(this$, mids$[mid_contract_7ae3461a92a43152]);
      }

      ResizableDoubleArray ResizableDoubleArray::copy() const
      {
        return ResizableDoubleArray(env->callObjectMethod(this$, mids$[mid_copy_3d2d3ed8718aeea1]));
      }

      void ResizableDoubleArray::discardFrontElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardFrontElements_0a2a1ac2721c0336], a0);
      }

      void ResizableDoubleArray::discardMostRecentElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardMostRecentElements_0a2a1ac2721c0336], a0);
      }

      jboolean ResizableDoubleArray::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jint ResizableDoubleArray::getCapacity() const
      {
        return env->callIntMethod(this$, mids$[mid_getCapacity_f2f64475e4580546]);
      }

      jdouble ResizableDoubleArray::getContractionCriterion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getContractionCriterion_456d9a2f64d6b28d]);
      }

      jdouble ResizableDoubleArray::getElement(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElement_b772323fc98b7293], a0);
      }

      JArray< jdouble > ResizableDoubleArray::getElements() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_7cdc325af0834901]));
      }

      jdouble ResizableDoubleArray::getExpansionFactor() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExpansionFactor_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode ResizableDoubleArray::getExpansionMode() const
      {
        return ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode(env->callObjectMethod(this$, mids$[mid_getExpansionMode_321b8dd6e9847f20]));
      }

      jint ResizableDoubleArray::getNumElements() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumElements_f2f64475e4580546]);
      }

      jint ResizableDoubleArray::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      void ResizableDoubleArray::setElement(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setElement_987a5fb872043b12], a0, a1);
      }

      void ResizableDoubleArray::setNumElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNumElements_0a2a1ac2721c0336], a0);
      }

      jdouble ResizableDoubleArray::substituteMostRecentElement(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_substituteMostRecentElement_0ba5fed9597b693e], a0);
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
      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data);
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data);
      static PyGetSetDef t_ResizableDoubleArray__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray, capacity),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, contractionCriterion),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, elements),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionFactor),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionMode),
        DECLARE_GETSET_FIELD(t_ResizableDoubleArray, numElements),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, addElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElementRolling, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, clear, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, compute, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, contract, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, copy, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, discardFrontElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, discardMostRecentElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, equals, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getCapacity, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getContractionCriterion, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, getElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionFactor, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionMode, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getNumElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setElement, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setNumElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, substituteMostRecentElement, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray)[] = {
        { Py_tp_methods, t_ResizableDoubleArray__methods_ },
        { Py_tp_init, (void *) t_ResizableDoubleArray_init_ },
        { Py_tp_getset, t_ResizableDoubleArray__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray, t_ResizableDoubleArray, ResizableDoubleArray);

      void t_ResizableDoubleArray::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray), &PY_TYPE_DEF(ResizableDoubleArray), module, "ResizableDoubleArray", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "ExpansionMode", make_descriptor(&PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode)));
      }

      void t_ResizableDoubleArray::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "class_", make_descriptor(ResizableDoubleArray::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "wrapfn_", make_descriptor(t_ResizableDoubleArray::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray::wrap_Object(ResizableDoubleArray(((t_ResizableDoubleArray *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ResizableDoubleArray object((jobject) NULL);

            INT_CALL(object = ResizableDoubleArray());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDD", &a0, &a1, &a2))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< jdouble > a4((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDDK[D", ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::parameters_, &a4))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2, a3, a4));
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

      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.addElement(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.addElementRolling(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addElementRolling", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.addElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg)
      {
        ::org::hipparchus::util::MathArrays$Function a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::hipparchus::util::MathArrays$Function::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.contract());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self)
      {
        ResizableDoubleArray result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_ResizableDoubleArray::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardFrontElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardFrontElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardMostRecentElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardMostRecentElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCapacity());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getElements());
        return result.wrap();
      }

      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumElements());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setElement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setElement", args);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setNumElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setNumElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.substituteMostRecentElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "substituteMostRecentElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCapacity());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getElements());
        return value.wrap();
      }

      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(value);
      }

      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumElements());
        return PyLong_FromLong((long) value);
      }
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setNumElements(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "numElements", arg);
        return -1;
      }
    }
  }
}
