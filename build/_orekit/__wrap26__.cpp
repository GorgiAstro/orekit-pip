#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *AbstractRealDistribution::class$ = NULL;
        jmethodID *AbstractRealDistribution::mids$ = NULL;
        bool AbstractRealDistribution::live$ = false;

        jclass AbstractRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/AbstractRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_99e3200dafc19573] = env->getMethodID(cls, "probability", "(DD)D");
            mids$[mid_getSolverAbsoluteAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getSolverAbsoluteAccuracy", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble AbstractRealDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
        }

        jdouble AbstractRealDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_99e3200dafc19573], a0, a1);
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
        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, logDensity, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRealDistribution)[] = {
          { Py_tp_methods, t_AbstractRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRealDistribution, t_AbstractRealDistribution, AbstractRealDistribution);

        void t_AbstractRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRealDistribution), &PY_TYPE_DEF(AbstractRealDistribution), module, "AbstractRealDistribution", 0);
        }

        void t_AbstractRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "class_", make_descriptor(AbstractRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "wrapfn_", make_descriptor(t_AbstractRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractRealDistribution::wrap_Object(AbstractRealDistribution(((t_AbstractRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearConstraintSet.h"
#include "java/util/Collection.h"
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraintSet::class$ = NULL;
        jmethodID *LinearConstraintSet::mids$ = NULL;
        bool LinearConstraintSet::live$ = false;

        jclass LinearConstraintSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraintSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e4a9ddaf437755d1] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/optim/linear/LinearConstraint;)V");
            mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_getConstraints_cb666ea1a15f5210] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraintSet::LinearConstraintSet(const JArray< ::org::hipparchus::optim::linear::LinearConstraint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e4a9ddaf437755d1, a0.this$)) {}

        LinearConstraintSet::LinearConstraintSet(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

        ::java::util::Collection LinearConstraintSet::getConstraints() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getConstraints_cb666ea1a15f5210]));
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
      namespace linear {
        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self);
        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data);
        static PyGetSetDef t_LinearConstraintSet__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraintSet, constraints),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraintSet__methods_[] = {
          DECLARE_METHOD(t_LinearConstraintSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, getConstraints, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraintSet)[] = {
          { Py_tp_methods, t_LinearConstraintSet__methods_ },
          { Py_tp_init, (void *) t_LinearConstraintSet_init_ },
          { Py_tp_getset, t_LinearConstraintSet__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraintSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraintSet, t_LinearConstraintSet, LinearConstraintSet);

        void t_LinearConstraintSet::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraintSet), &PY_TYPE_DEF(LinearConstraintSet), module, "LinearConstraintSet", 0);
        }

        void t_LinearConstraintSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "class_", make_descriptor(LinearConstraintSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "wrapfn_", make_descriptor(t_LinearConstraintSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraintSet::initializeClass, 1)))
            return NULL;
          return t_LinearConstraintSet::wrap_Object(LinearConstraintSet(((t_LinearConstraintSet *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraintSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::hipparchus::optim::linear::LinearConstraint > a0((jobject) NULL);
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::linear::LinearConstraint::initializeClass, &a0))
              {
                INT_CALL(object = LinearConstraintSet(a0));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = LinearConstraintSet(a0));
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

        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::optim::linear::PY_TYPE(LinearConstraint));
        }

        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/StopOnIncreasing.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnIncreasing::StopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action StopOnIncreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_ae9b0131fefe6c67], a0.this$, a1.this$, a2));
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
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexBaseHeader::class$ = NULL;
          jmethodID *RinexBaseHeader::mids$ = NULL;
          bool RinexBaseHeader::live$ = false;

          jclass RinexBaseHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexBaseHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCreationDate_c325492395d89b24] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateComponents_e6d4d2bcc05de999] = env->getMethodID(cls, "getCreationDateComponents", "()Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getCreationTimeZone_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCreationTimeZone", "()Ljava/lang/String;");
              mids$[mid_getDoi_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDoi", "()Ljava/lang/String;");
              mids$[mid_getFileType_0bcb8d05df71c050] = env->getMethodID(cls, "getFileType", "()Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_getFormatVersion_b74f83833fdad017] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getLicense_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLicense", "()Ljava/lang/String;");
              mids$[mid_getProgramName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getRunByName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRunByName", "()Ljava/lang/String;");
              mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getStationInformation_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getStationInformation", "()Ljava/lang/String;");
              mids$[mid_setCreationDate_02135a6ef25adb4b] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateComponents_0ae14a6b384129f2] = env->getMethodID(cls, "setCreationDateComponents", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_setCreationTimeZone_734b91ac30d5f9b4] = env->getMethodID(cls, "setCreationTimeZone", "(Ljava/lang/String;)V");
              mids$[mid_setDoi_734b91ac30d5f9b4] = env->getMethodID(cls, "setDoi", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_8ba9fe7a847cecad] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setLicense_734b91ac30d5f9b4] = env->getMethodID(cls, "setLicense", "(Ljava/lang/String;)V");
              mids$[mid_setProgramName_734b91ac30d5f9b4] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setRunByName_734b91ac30d5f9b4] = env->getMethodID(cls, "setRunByName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_cfddc646eebc7104] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationInformation_734b91ac30d5f9b4] = env->getMethodID(cls, "setStationInformation", "(Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate RinexBaseHeader::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_c325492395d89b24]));
          }

          ::org::orekit::time::DateTimeComponents RinexBaseHeader::getCreationDateComponents() const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getCreationDateComponents_e6d4d2bcc05de999]));
          }

          ::java::lang::String RinexBaseHeader::getCreationTimeZone() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZone_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexBaseHeader::getDoi() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDoi_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::files::rinex::utils::RinexFileType RinexBaseHeader::getFileType() const
          {
            return ::org::orekit::files::rinex::utils::RinexFileType(env->callObjectMethod(this$, mids$[mid_getFileType_0bcb8d05df71c050]));
          }

          jdouble RinexBaseHeader::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_b74f83833fdad017]);
          }

          ::java::lang::String RinexBaseHeader::getLicense() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLicense_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexBaseHeader::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexBaseHeader::getRunByName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRunByName_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexBaseHeader::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
          }

          ::java::lang::String RinexBaseHeader::getStationInformation() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationInformation_1c1fa1e935d6cdcf]));
          }

          void RinexBaseHeader::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_02135a6ef25adb4b], a0.this$);
          }

          void RinexBaseHeader::setCreationDateComponents(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateComponents_0ae14a6b384129f2], a0.this$);
          }

          void RinexBaseHeader::setCreationTimeZone(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZone_734b91ac30d5f9b4], a0.this$);
          }

          void RinexBaseHeader::setDoi(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDoi_734b91ac30d5f9b4], a0.this$);
          }

          void RinexBaseHeader::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_8ba9fe7a847cecad], a0);
          }

          void RinexBaseHeader::setLicense(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLicense_734b91ac30d5f9b4], a0.this$);
          }

          void RinexBaseHeader::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexBaseHeader::setRunByName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRunByName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexBaseHeader::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_cfddc646eebc7104], a0.this$);
          }

          void RinexBaseHeader::setStationInformation(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationInformation_734b91ac30d5f9b4], a0.this$);
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
          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data);
          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyGetSetDef t_RinexBaseHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDate),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDateComponents),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationTimeZone),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, doi),
            DECLARE_GET_FIELD(t_RinexBaseHeader, fileType),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, formatVersion),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, license),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, programName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, runByName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, satelliteSystem),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, stationInformation),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexBaseHeader__methods_[] = {
            DECLARE_METHOD(t_RinexBaseHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDateComponents, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationTimeZone, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getDoi, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFileType, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getLicense, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getRunByName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getStationInformation, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDateComponents, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationTimeZone, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setDoi, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setLicense, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setRunByName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setStationInformation, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexBaseHeader)[] = {
            { Py_tp_methods, t_RinexBaseHeader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexBaseHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexBaseHeader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexBaseHeader, t_RinexBaseHeader, RinexBaseHeader);

          void t_RinexBaseHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexBaseHeader), &PY_TYPE_DEF(RinexBaseHeader), module, "RinexBaseHeader", 0);
          }

          void t_RinexBaseHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "class_", make_descriptor(RinexBaseHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "wrapfn_", make_descriptor(t_RinexBaseHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexBaseHeader::initializeClass, 1)))
              return NULL;
            return t_RinexBaseHeader::wrap_Object(RinexBaseHeader(((t_RinexBaseHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexBaseHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZone());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoi());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self)
          {
            ::org::orekit::files::rinex::utils::RinexFileType result((jobject) NULL);
            OBJ_CALL(result = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLicense());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRunByName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationInformation());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDateComponents(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateComponents", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZone(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZone", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setDoi(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDoi", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setLicense(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLicense", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setRunByName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRunByName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationInformation(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationInformation", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::DateTimeComponents value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::DateTimeComponents value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDateComponents(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateComponents", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZone());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZone(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZone", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoi());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setDoi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "doi", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::files::rinex::utils::RinexFileType value((jobject) NULL);
            OBJ_CALL(value = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(value);
          }

          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLicense());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setLicense(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "license", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRunByName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setRunByName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "runByName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationInformation());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationInformation(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationInformation", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Euclidean2D::class$ = NULL;
          jmethodID *Euclidean2D::mids$ = NULL;
          bool Euclidean2D::live$ = false;

          jclass Euclidean2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Euclidean2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_378fd1928e817aa0] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");
              mids$[mid_getSubSpace_80ec234213ca3d44] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          Euclidean2D Euclidean2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_378fd1928e817aa0]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Euclidean1D Euclidean2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Euclidean1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_80ec234213ca3d44]));
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
        namespace twod {
          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data);
          static PyGetSetDef t_Euclidean2D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean2D, dimension),
            DECLARE_GET_FIELD(t_Euclidean2D, instance),
            DECLARE_GET_FIELD(t_Euclidean2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean2D__methods_[] = {
            DECLARE_METHOD(t_Euclidean2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean2D)[] = {
            { Py_tp_methods, t_Euclidean2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean2D, t_Euclidean2D, Euclidean2D);

          void t_Euclidean2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean2D), &PY_TYPE_DEF(Euclidean2D), module, "Euclidean2D", 0);
          }

          void t_Euclidean2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "class_", make_descriptor(Euclidean2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "wrapfn_", make_descriptor(t_Euclidean2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean2D::initializeClass, 1)))
              return NULL;
            return t_Euclidean2D::wrap_Object(Euclidean2D(((t_Euclidean2D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type)
          {
            Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Euclidean2D::getInstance());
            return t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data)
          {
            Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean2D::wrap_Object(value);
          }

          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularTroposphericDelayModifier::class$ = NULL;
          jmethodID *AngularTroposphericDelayModifier::mids$ = NULL;
          bool AngularTroposphericDelayModifier::live$ = false;

          jclass AngularTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_516bd20115aa9d9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularTroposphericDelayModifier::AngularTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_516bd20115aa9d9d, a0.this$)) {}

          ::java::util::List AngularTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void AngularTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self);
          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularTroposphericDelayModifier, t_AngularTroposphericDelayModifier, AngularTroposphericDelayModifier);

          void t_AngularTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularTroposphericDelayModifier), &PY_TYPE_DEF(AngularTroposphericDelayModifier), module, "AngularTroposphericDelayModifier", 0);
          }

          void t_AngularTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "class_", make_descriptor(AngularTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "wrapfn_", make_descriptor(t_AngularTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularTroposphericDelayModifier::wrap_Object(AngularTroposphericDelayModifier(((t_AngularTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            AngularTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NetworkRecord::class$ = NULL;
          jmethodID *NetworkRecord::mids$ = NULL;
          bool NetworkRecord::live$ = false;

          jclass NetworkRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NetworkRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_9ab94ac1dc23b105] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_94d108ef01c519e6] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getNetworkIdentifier_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNetworkIdentifier", "()Ljava/lang/String;");
              mids$[mid_getNetworkInfoAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNetworkInfoAddress", "()Ljava/lang/String;");
              mids$[mid_getOperator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getRecordType_3f153b7c7459a9e2] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getRegistrationAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRegistrationAddress", "()Ljava/lang/String;");
              mids$[mid_getStreamInfoAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getStreamInfoAddress", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NetworkRecord::NetworkRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          jboolean NetworkRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_9ab94ac1dc23b105]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication NetworkRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_94d108ef01c519e6]));
          }

          ::java::lang::String NetworkRecord::getNetworkIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkIdentifier_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String NetworkRecord::getNetworkInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkInfoAddress_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String NetworkRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType NetworkRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_3f153b7c7459a9e2]));
          }

          ::java::lang::String NetworkRecord::getRegistrationAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRegistrationAddress_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String NetworkRecord::getStreamInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStreamInfoAddress_1c1fa1e935d6cdcf]));
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
          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args);
          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data);
          static PyGetSetDef t_NetworkRecord__fields_[] = {
            DECLARE_GET_FIELD(t_NetworkRecord, authentication),
            DECLARE_GET_FIELD(t_NetworkRecord, networkIdentifier),
            DECLARE_GET_FIELD(t_NetworkRecord, networkInfoAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, operator),
            DECLARE_GET_FIELD(t_NetworkRecord, recordType),
            DECLARE_GET_FIELD(t_NetworkRecord, registrationAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, streamInfoAddress),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NetworkRecord__methods_[] = {
            DECLARE_METHOD(t_NetworkRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkInfoAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_NetworkRecord, getRegistrationAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getStreamInfoAddress, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NetworkRecord)[] = {
            { Py_tp_methods, t_NetworkRecord__methods_ },
            { Py_tp_init, (void *) t_NetworkRecord_init_ },
            { Py_tp_getset, t_NetworkRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NetworkRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(NetworkRecord, t_NetworkRecord, NetworkRecord);

          void t_NetworkRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(NetworkRecord), &PY_TYPE_DEF(NetworkRecord), module, "NetworkRecord", 0);
          }

          void t_NetworkRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "class_", make_descriptor(NetworkRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "wrapfn_", make_descriptor(t_NetworkRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NetworkRecord::initializeClass, 1)))
              return NULL;
            return t_NetworkRecord::wrap_Object(NetworkRecord(((t_NetworkRecord *) arg)->object.this$));
          }
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NetworkRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            NetworkRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = NetworkRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkIdentifier());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NetworkRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegistrationAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStreamInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkIdentifier());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkInfoAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegistrationAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStreamInfoAddress());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Date.h"
#include "java/lang/Comparable.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/Date.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Date::class$ = NULL;
    jmethodID *Date::mids$ = NULL;
    bool Date::live$ = false;

    jclass Date::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Date");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_init$_a0df4b8e4ed3805e] = env->getMethodID(cls, "<init>", "(III)V");
        mids$[mid_init$_a5f63d2987dd5c80] = env->getMethodID(cls, "<init>", "(IIIII)V");
        mids$[mid_init$_ea412797eafea800] = env->getMethodID(cls, "<init>", "(IIIIII)V");
        mids$[mid_UTC_93463d78a2f9e946] = env->getStaticMethodID(cls, "UTC", "(IIIIII)J");
        mids$[mid_after_e7dfa6240fa69edb] = env->getMethodID(cls, "after", "(Ljava/util/Date;)Z");
        mids$[mid_before_e7dfa6240fa69edb] = env->getMethodID(cls, "before", "(Ljava/util/Date;)Z");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_compareTo_f96b06ef9e3ac00c] = env->getMethodID(cls, "compareTo", "(Ljava/util/Date;)I");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDate_55546ef6a647f39b] = env->getMethodID(cls, "getDate", "()I");
        mids$[mid_getDay_55546ef6a647f39b] = env->getMethodID(cls, "getDay", "()I");
        mids$[mid_getHours_55546ef6a647f39b] = env->getMethodID(cls, "getHours", "()I");
        mids$[mid_getMinutes_55546ef6a647f39b] = env->getMethodID(cls, "getMinutes", "()I");
        mids$[mid_getMonth_55546ef6a647f39b] = env->getMethodID(cls, "getMonth", "()I");
        mids$[mid_getSeconds_55546ef6a647f39b] = env->getMethodID(cls, "getSeconds", "()I");
        mids$[mid_getTime_6c0ce7e438e5ded4] = env->getMethodID(cls, "getTime", "()J");
        mids$[mid_getTimezoneOffset_55546ef6a647f39b] = env->getMethodID(cls, "getTimezoneOffset", "()I");
        mids$[mid_getYear_55546ef6a647f39b] = env->getMethodID(cls, "getYear", "()I");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_parse_cbeeb2314499c200] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)J");
        mids$[mid_setDate_44ed599e93e8a30c] = env->getMethodID(cls, "setDate", "(I)V");
        mids$[mid_setHours_44ed599e93e8a30c] = env->getMethodID(cls, "setHours", "(I)V");
        mids$[mid_setMinutes_44ed599e93e8a30c] = env->getMethodID(cls, "setMinutes", "(I)V");
        mids$[mid_setMonth_44ed599e93e8a30c] = env->getMethodID(cls, "setMonth", "(I)V");
        mids$[mid_setSeconds_44ed599e93e8a30c] = env->getMethodID(cls, "setSeconds", "(I)V");
        mids$[mid_setTime_3d7dd2314a0dd456] = env->getMethodID(cls, "setTime", "(J)V");
        mids$[mid_setYear_44ed599e93e8a30c] = env->getMethodID(cls, "setYear", "(I)V");
        mids$[mid_toGMTString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toGMTString", "()Ljava/lang/String;");
        mids$[mid_toLocaleString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toLocaleString", "()Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Date::Date() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    Date::Date(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Date::Date(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

    Date::Date(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0df4b8e4ed3805e, a0, a1, a2)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a5f63d2987dd5c80, a0, a1, a2, a3, a4)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea412797eafea800, a0, a1, a2, a3, a4, a5)) {}

    jlong Date::UTC(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_UTC_93463d78a2f9e946], a0, a1, a2, a3, a4, a5);
    }

    jboolean Date::after(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_after_e7dfa6240fa69edb], a0.this$);
    }

    jboolean Date::before(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_before_e7dfa6240fa69edb], a0.this$);
    }

    ::java::lang::Object Date::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jint Date::compareTo(const Date & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_f96b06ef9e3ac00c], a0.this$);
    }

    jboolean Date::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jint Date::getDate() const
    {
      return env->callIntMethod(this$, mids$[mid_getDate_55546ef6a647f39b]);
    }

    jint Date::getDay() const
    {
      return env->callIntMethod(this$, mids$[mid_getDay_55546ef6a647f39b]);
    }

    jint Date::getHours() const
    {
      return env->callIntMethod(this$, mids$[mid_getHours_55546ef6a647f39b]);
    }

    jint Date::getMinutes() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinutes_55546ef6a647f39b]);
    }

    jint Date::getMonth() const
    {
      return env->callIntMethod(this$, mids$[mid_getMonth_55546ef6a647f39b]);
    }

    jint Date::getSeconds() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeconds_55546ef6a647f39b]);
    }

    jlong Date::getTime() const
    {
      return env->callLongMethod(this$, mids$[mid_getTime_6c0ce7e438e5ded4]);
    }

    jint Date::getTimezoneOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getTimezoneOffset_55546ef6a647f39b]);
    }

    jint Date::getYear() const
    {
      return env->callIntMethod(this$, mids$[mid_getYear_55546ef6a647f39b]);
    }

    jint Date::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jlong Date::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parse_cbeeb2314499c200], a0.this$);
    }

    void Date::setDate(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDate_44ed599e93e8a30c], a0);
    }

    void Date::setHours(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setHours_44ed599e93e8a30c], a0);
    }

    void Date::setMinutes(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinutes_44ed599e93e8a30c], a0);
    }

    void Date::setMonth(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonth_44ed599e93e8a30c], a0);
    }

    void Date::setSeconds(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeconds_44ed599e93e8a30c], a0);
    }

    void Date::setTime(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setTime_3d7dd2314a0dd456], a0);
    }

    void Date::setYear(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setYear_44ed599e93e8a30c], a0);
    }

    ::java::lang::String Date::toGMTString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGMTString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Date::toLocaleString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocaleString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Date::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args);
    static PyObject *t_Date_after(t_Date *self, PyObject *arg);
    static PyObject *t_Date_before(t_Date *self, PyObject *arg);
    static PyObject *t_Date_clone(t_Date *self);
    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg);
    static PyObject *t_Date_equals(t_Date *self, PyObject *args);
    static PyObject *t_Date_getDate(t_Date *self);
    static PyObject *t_Date_getDay(t_Date *self);
    static PyObject *t_Date_getHours(t_Date *self);
    static PyObject *t_Date_getMinutes(t_Date *self);
    static PyObject *t_Date_getMonth(t_Date *self);
    static PyObject *t_Date_getSeconds(t_Date *self);
    static PyObject *t_Date_getTime(t_Date *self);
    static PyObject *t_Date_getTimezoneOffset(t_Date *self);
    static PyObject *t_Date_getYear(t_Date *self);
    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args);
    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg);
    static PyObject *t_Date_toGMTString(t_Date *self);
    static PyObject *t_Date_toLocaleString(t_Date *self);
    static PyObject *t_Date_toString(t_Date *self, PyObject *args);
    static PyObject *t_Date_get__date(t_Date *self, void *data);
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__day(t_Date *self, void *data);
    static PyObject *t_Date_get__hours(t_Date *self, void *data);
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__minutes(t_Date *self, void *data);
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__month(t_Date *self, void *data);
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__seconds(t_Date *self, void *data);
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__time(t_Date *self, void *data);
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data);
    static PyObject *t_Date_get__year(t_Date *self, void *data);
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data);
    static PyGetSetDef t_Date__fields_[] = {
      DECLARE_GETSET_FIELD(t_Date, date),
      DECLARE_GET_FIELD(t_Date, day),
      DECLARE_GETSET_FIELD(t_Date, hours),
      DECLARE_GETSET_FIELD(t_Date, minutes),
      DECLARE_GETSET_FIELD(t_Date, month),
      DECLARE_GETSET_FIELD(t_Date, seconds),
      DECLARE_GETSET_FIELD(t_Date, time),
      DECLARE_GET_FIELD(t_Date, timezoneOffset),
      DECLARE_GETSET_FIELD(t_Date, year),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Date__methods_[] = {
      DECLARE_METHOD(t_Date, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, UTC, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Date, after, METH_O),
      DECLARE_METHOD(t_Date, before, METH_O),
      DECLARE_METHOD(t_Date, clone, METH_NOARGS),
      DECLARE_METHOD(t_Date, compareTo, METH_O),
      DECLARE_METHOD(t_Date, equals, METH_VARARGS),
      DECLARE_METHOD(t_Date, getDate, METH_NOARGS),
      DECLARE_METHOD(t_Date, getDay, METH_NOARGS),
      DECLARE_METHOD(t_Date, getHours, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMinutes, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMonth, METH_NOARGS),
      DECLARE_METHOD(t_Date, getSeconds, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTime, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTimezoneOffset, METH_NOARGS),
      DECLARE_METHOD(t_Date, getYear, METH_NOARGS),
      DECLARE_METHOD(t_Date, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Date, parse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, setDate, METH_O),
      DECLARE_METHOD(t_Date, setHours, METH_O),
      DECLARE_METHOD(t_Date, setMinutes, METH_O),
      DECLARE_METHOD(t_Date, setMonth, METH_O),
      DECLARE_METHOD(t_Date, setSeconds, METH_O),
      DECLARE_METHOD(t_Date, setTime, METH_O),
      DECLARE_METHOD(t_Date, setYear, METH_O),
      DECLARE_METHOD(t_Date, toGMTString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toLocaleString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Date)[] = {
      { Py_tp_methods, t_Date__methods_ },
      { Py_tp_init, (void *) t_Date_init_ },
      { Py_tp_getset, t_Date__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Date)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Date, t_Date, Date);

    void t_Date::install(PyObject *module)
    {
      installType(&PY_TYPE(Date), &PY_TYPE_DEF(Date), module, "Date", 0);
    }

    void t_Date::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "class_", make_descriptor(Date::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "wrapfn_", make_descriptor(t_Date::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Date::initializeClass, 1)))
        return NULL;
      return t_Date::wrap_Object(Date(((t_Date *) arg)->object.this$));
    }
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Date::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Date object((jobject) NULL);

          INT_CALL(object = Date());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Date object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Date(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Date object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Date(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          jint a0;
          jint a1;
          jint a2;
          Date object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = Date(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 5:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4));
            self->object = object;
            break;
          }
        }
        goto err;
       case 6:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint a5;
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4, a5));
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

    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint a2;
      jint a3;
      jint a4;
      jint a5;
      jlong result;

      if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = ::java::util::Date::UTC(a0, a1, a2, a3, a4, a5));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "UTC", args);
      return NULL;
    }

    static PyObject *t_Date_after(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.after(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "after", arg);
      return NULL;
    }

    static PyObject *t_Date_before(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.before(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "before", arg);
      return NULL;
    }

    static PyObject *t_Date_clone(t_Date *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Date_equals(t_Date *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Date_getDate(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDate());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getDay(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDay());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getHours(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getHours());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMinutes(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinutes());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMonth(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMonth());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getSeconds(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getSeconds());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getTime(t_Date *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Date_getTimezoneOffset(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getYear(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getYear());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Date::parse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "parse", arg);
      return NULL;
    }

    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setDate(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDate", arg);
      return NULL;
    }

    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setHours(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setHours", arg);
      return NULL;
    }

    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinutes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinutes", arg);
      return NULL;
    }

    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMonth(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonth", arg);
      return NULL;
    }

    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setSeconds(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeconds", arg);
      return NULL;
    }

    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setTime(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setTime", arg);
      return NULL;
    }

    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setYear(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setYear", arg);
      return NULL;
    }

    static PyObject *t_Date_toGMTString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGMTString());
      return j2p(result);
    }

    static PyObject *t_Date_toLocaleString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocaleString());
      return j2p(result);
    }

    static PyObject *t_Date_toString(t_Date *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Date_get__date(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDate());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setDate(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "date", arg);
      return -1;
    }

    static PyObject *t_Date_get__day(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDay());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__hours(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getHours());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setHours(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "hours", arg);
      return -1;
    }

    static PyObject *t_Date_get__minutes(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinutes());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinutes(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minutes", arg);
      return -1;
    }

    static PyObject *t_Date_get__month(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMonth());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMonth(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "month", arg);
      return -1;
    }

    static PyObject *t_Date_get__seconds(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getSeconds());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setSeconds(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "seconds", arg);
      return -1;
    }

    static PyObject *t_Date_get__time(t_Date *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data)
    {
      {
        jlong value;
        if (!parseArg(arg, "J", &value))
        {
          INT_CALL(self->object.setTime(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "time", arg);
      return -1;
    }

    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__year(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getYear());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setYear(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "year", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransform::class$ = NULL;
      jmethodID *FieldTransform::mids$ = NULL;
      bool FieldTransform::live$ = false;

      jclass FieldTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f8b481461ea8ab39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_dc699a7de0f37bf7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_e143e3a87ead43a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_b19b60e39c50b506] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_b6842162de8254ea] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_e57f35c4a35a6b1c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_f3966f483c5badf0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_192009f269ed8f3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/FieldTransform;)V");
          mids$[mid_init$_1a460667376305ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_4b2d668898c102f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_freeze_b8c22ddb6f9598ea] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getAcceleration_ff5ac73a7b43eddd] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngular_c0c63601c9238de5] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getCartesian_3bf1e58d8bf42589] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFieldDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getFieldDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getIdentity_8ff5b0b40188d680] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getInverse_b8c22ddb6f9598ea] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getJacobian_db9176f8a28cfab8] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getRotation_1e54a5caa5199c2e] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_ff5ac73a7b43eddd] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_ff5ac73a7b43eddd] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTranslation_ff5ac73a7b43eddd] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_ff5ac73a7b43eddd] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_interpolate_b964a7334cab06b0] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_8399f4dc4f7ede96] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_9f2d048dabbfaab4] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/stream/Stream;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_30f386846a59e91f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_1a69f2ef45796156] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_staticShiftedBy_8d8158fd57fb23c5] = env->getMethodID(cls, "staticShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toStaticTransform_f5bae1937d1edbc7] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformPVCoordinates_176da7a9c87c96a5] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_b9efbea1bca1646b] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_448b59d288b2a2ff] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_56bdb7492041db79] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8b481461ea8ab39, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc699a7de0f37bf7, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e143e3a87ead43a4, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b19b60e39c50b506, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::Transform & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6842162de8254ea, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e57f35c4a35a6b1c, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3966f483c5badf0, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldTransform & a1, const FieldTransform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_192009f269ed8f3e, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a460667376305ef, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b2d668898c102f2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform FieldTransform::freeze() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_freeze_b8c22ddb6f9598ea]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_ff5ac73a7b43eddd]));
      }

      ::org::orekit::utils::FieldAngularCoordinates FieldTransform::getAngular() const
      {
        return ::org::orekit::utils::FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_c0c63601c9238de5]));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::getCartesian() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_3bf1e58d8bf42589]));
      }

      ::org::orekit::time::AbsoluteDate FieldTransform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTransform::getFieldDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFieldDate_fa23a4301b9c83e7]));
      }

      FieldTransform FieldTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_8ff5b0b40188d680], a0.this$));
      }

      FieldTransform FieldTransform::getInverse() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_getInverse_b8c22ddb6f9598ea]));
      }

      void FieldTransform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_db9176f8a28cfab8], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e54a5caa5199c2e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_ff5ac73a7b43eddd]));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_b964a7334cab06b0], a0.this$, a1.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_8399f4dc4f7ede96], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::stream::Stream & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_9f2d048dabbfaab4], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::shiftedBy(jdouble a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_30f386846a59e91f], a0));
      }

      FieldTransform FieldTransform::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_1a69f2ef45796156], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::staticShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_8d8158fd57fb23c5], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_f5bae1937d1edbc7]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_176da7a9c87c96a5], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_b9efbea1bca1646b], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_448b59d288b2a2ff], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_56bdb7492041db79], a0.this$));
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
      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args);
      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self);
      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg);
      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self);
      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data);
      static PyGetSetDef t_FieldTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransform, acceleration),
        DECLARE_GET_FIELD(t_FieldTransform, angular),
        DECLARE_GET_FIELD(t_FieldTransform, cartesian),
        DECLARE_GET_FIELD(t_FieldTransform, date),
        DECLARE_GET_FIELD(t_FieldTransform, fieldDate),
        DECLARE_GET_FIELD(t_FieldTransform, inverse),
        DECLARE_GET_FIELD(t_FieldTransform, rotation),
        DECLARE_GET_FIELD(t_FieldTransform, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldTransform, rotationRate),
        DECLARE_GET_FIELD(t_FieldTransform, translation),
        DECLARE_GET_FIELD(t_FieldTransform, velocity),
        DECLARE_GET_FIELD(t_FieldTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransform__methods_[] = {
        DECLARE_METHOD(t_FieldTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getFieldDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, interpolate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldTransform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransform)[] = {
        { Py_tp_methods, t_FieldTransform__methods_ },
        { Py_tp_init, (void *) t_FieldTransform_init_ },
        { Py_tp_getset, t_FieldTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransform, t_FieldTransform, FieldTransform);
      PyObject *t_FieldTransform::wrap_Object(const FieldTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransform), &PY_TYPE_DEF(FieldTransform), module, "FieldTransform", 0);
      }

      void t_FieldTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "class_", make_descriptor(FieldTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "wrapfn_", make_descriptor(t_FieldTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransform::initializeClass, 1)))
          return NULL;
        return t_FieldTransform::wrap_Object(FieldTransform(((t_FieldTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Transform a1((jobject) NULL);
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldTransform::initializeClass, FieldTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldTransform::parameters_, &a2, &p2, t_FieldTransform::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
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

      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldTransform::getIdentity(a0));
          return t_FieldTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::Collection a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::stream::Stream a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "interpolate", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data)
      {
        FieldTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldTransform::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeMode::class$ = NULL;
            jmethodID *RangeMode::mids$ = NULL;
            bool RangeMode::live$ = false;
            RangeMode *RangeMode::COHERENT = NULL;
            RangeMode *RangeMode::CONSTANT = NULL;
            RangeMode *RangeMode::ONE_WAY = NULL;

            jclass RangeMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_93c501f84396d77e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_values_6ba72fa19ac79b98] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COHERENT = new RangeMode(env->getStaticObjectField(cls, "COHERENT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                CONSTANT = new RangeMode(env->getStaticObjectField(cls, "CONSTANT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                ONE_WAY = new RangeMode(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeMode RangeMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_93c501f84396d77e], a0.this$));
            }

            JArray< RangeMode > RangeMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeMode >(env->callStaticObjectMethod(cls, mids$[mid_values_6ba72fa19ac79b98]));
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
            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args);
            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeMode_values(PyTypeObject *type);
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data);
            static PyGetSetDef t_RangeMode__fields_[] = {
              DECLARE_GET_FIELD(t_RangeMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeMode__methods_[] = {
              DECLARE_METHOD(t_RangeMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeMode)[] = {
              { Py_tp_methods, t_RangeMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeMode, t_RangeMode, RangeMode);
            PyObject *t_RangeMode::wrap_Object(const RangeMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeMode::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeMode), &PY_TYPE_DEF(RangeMode), module, "RangeMode", 0);
            }

            void t_RangeMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "class_", make_descriptor(RangeMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "wrapfn_", make_descriptor(t_RangeMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "COHERENT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::COHERENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "CONSTANT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::CONSTANT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "ONE_WAY", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::ONE_WAY)));
            }

            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeMode::initializeClass, 1)))
                return NULL;
              return t_RangeMode::wrap_Object(RangeMode(((t_RangeMode *) arg)->object.this$));
            }
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::valueOf(a0));
                return t_RangeMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeMode_values(PyTypeObject *type)
            {
              JArray< RangeMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::values());
              return JArray<jobject>(result.this$).wrap(t_RangeMode::wrap_jobject);
            }
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesRangeModifier::RelativisticJ2ClockInterSatellitesRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticJ2ClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier, t_RelativisticJ2ClockInterSatellitesRangeModifier, RelativisticJ2ClockInterSatellitesRangeModifier);

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesRangeModifier), module, "RelativisticJ2ClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_Object(RelativisticJ2ClockInterSatellitesRangeModifier(((t_RelativisticJ2ClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParserBuilder::class$ = NULL;
          jmethodID *ParserBuilder::mids$ = NULL;
          bool ParserBuilder::live$ = false;

          jclass ParserBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParserBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_fe20320dccf187ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmParser_669e2e607de238d7] = env->getMethodID(cls, "buildAcmParser", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;");
              mids$[mid_buildAemParser_a398cc5ae305c6f3] = env->getMethodID(cls, "buildAemParser", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemParser;");
              mids$[mid_buildApmParser_4e6ffe5d050aa001] = env->getMethodID(cls, "buildApmParser", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmParser;");
              mids$[mid_buildCdmParser_8b41e9b19f9e779a] = env->getMethodID(cls, "buildCdmParser", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;");
              mids$[mid_buildNdmParser_016e99a469ccb30f] = env->getMethodID(cls, "buildNdmParser", "()Lorg/orekit/files/ccsds/ndm/NdmParser;");
              mids$[mid_buildOcmParser_e91e664b24f65476] = env->getMethodID(cls, "buildOcmParser", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;");
              mids$[mid_buildOemParser_4ff941e5dc4793a0] = env->getMethodID(cls, "buildOemParser", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemParser;");
              mids$[mid_buildOmmParser_718f6f4121095c8e] = env->getMethodID(cls, "buildOmmParser", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmParser;");
              mids$[mid_buildOpmParser_60a67f51f70c42ec] = env->getMethodID(cls, "buildOpmParser", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmParser;");
              mids$[mid_buildTdmParser_977ebf3ca2a0802d] = env->getMethodID(cls, "buildTdmParser", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmParser;");
              mids$[mid_getDefaultInterpolationDegree_55546ef6a647f39b] = env->getMethodID(cls, "getDefaultInterpolationDegree", "()I");
              mids$[mid_getDefaultMass_b74f83833fdad017] = env->getMethodID(cls, "getDefaultMass", "()D");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getParsedUnitsBehavior_b86f6bf8371fab43] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_isSimpleEOP_9ab94ac1dc23b105] = env->getMethodID(cls, "isSimpleEOP", "()Z");
              mids$[mid_withDefaultInterpolationDegree_ddc6bf6bb9ad611f] = env->getMethodID(cls, "withDefaultInterpolationDegree", "(I)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withDefaultMass_1c5846a8fcbe2f4d] = env->getMethodID(cls, "withDefaultMass", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withMu_1c5846a8fcbe2f4d] = env->getMethodID(cls, "withMu", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withParsedUnitsBehavior_68a946424d049c38] = env->getMethodID(cls, "withParsedUnitsBehavior", "(Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withSimpleEOP_c281418a6c58f1a2] = env->getMethodID(cls, "withSimpleEOP", "(Z)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_create_41d8f1d7beb0fc5e] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ParserBuilder::ParserBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ParserBuilder::ParserBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_fe20320dccf187ae, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser ParserBuilder::buildAcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser(env->callObjectMethod(this$, mids$[mid_buildAcmParser_669e2e607de238d7]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemParser ParserBuilder::buildAemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemParser(env->callObjectMethod(this$, mids$[mid_buildAemParser_a398cc5ae305c6f3]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser ParserBuilder::buildApmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser(env->callObjectMethod(this$, mids$[mid_buildApmParser_4e6ffe5d050aa001]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmParser ParserBuilder::buildCdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmParser(env->callObjectMethod(this$, mids$[mid_buildCdmParser_8b41e9b19f9e779a]));
          }

          ::org::orekit::files::ccsds::ndm::NdmParser ParserBuilder::buildNdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmParser(env->callObjectMethod(this$, mids$[mid_buildNdmParser_016e99a469ccb30f]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser ParserBuilder::buildOcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser(env->callObjectMethod(this$, mids$[mid_buildOcmParser_e91e664b24f65476]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemParser ParserBuilder::buildOemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemParser(env->callObjectMethod(this$, mids$[mid_buildOemParser_4ff941e5dc4793a0]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser ParserBuilder::buildOmmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser(env->callObjectMethod(this$, mids$[mid_buildOmmParser_718f6f4121095c8e]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser ParserBuilder::buildOpmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser(env->callObjectMethod(this$, mids$[mid_buildOpmParser_60a67f51f70c42ec]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmParser ParserBuilder::buildTdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmParser(env->callObjectMethod(this$, mids$[mid_buildTdmParser_977ebf3ca2a0802d]));
          }

          jint ParserBuilder::getDefaultInterpolationDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getDefaultInterpolationDegree_55546ef6a647f39b]);
          }

          jdouble ParserBuilder::getDefaultMass() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDefaultMass_b74f83833fdad017]);
          }

          jdouble ParserBuilder::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ParserBuilder::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_b86f6bf8371fab43]));
          }

          jboolean ParserBuilder::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_9ab94ac1dc23b105]);
          }

          ParserBuilder ParserBuilder::withDefaultInterpolationDegree(jint a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultInterpolationDegree_ddc6bf6bb9ad611f], a0));
          }

          ParserBuilder ParserBuilder::withDefaultMass(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultMass_1c5846a8fcbe2f4d], a0));
          }

          ParserBuilder ParserBuilder::withMu(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withMu_1c5846a8fcbe2f4d], a0));
          }

          ParserBuilder ParserBuilder::withParsedUnitsBehavior(const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withParsedUnitsBehavior_68a946424d049c38], a0.this$));
          }

          ParserBuilder ParserBuilder::withSimpleEOP(jboolean a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withSimpleEOP_c281418a6c58f1a2], a0));
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
          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args);
          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data);
          static PyGetSetDef t_ParserBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_ParserBuilder, defaultInterpolationDegree),
            DECLARE_GET_FIELD(t_ParserBuilder, defaultMass),
            DECLARE_GET_FIELD(t_ParserBuilder, mu),
            DECLARE_GET_FIELD(t_ParserBuilder, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ParserBuilder, simpleEOP),
            DECLARE_GET_FIELD(t_ParserBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParserBuilder__methods_[] = {
            DECLARE_METHOD(t_ParserBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildApmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildCdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildNdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOmmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOpmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildTdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultInterpolationDegree, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultMass, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getMu, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, isSimpleEOP, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, withDefaultInterpolationDegree, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withDefaultMass, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withMu, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withParsedUnitsBehavior, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withSimpleEOP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParserBuilder)[] = {
            { Py_tp_methods, t_ParserBuilder__methods_ },
            { Py_tp_init, (void *) t_ParserBuilder_init_ },
            { Py_tp_getset, t_ParserBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParserBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(ParserBuilder, t_ParserBuilder, ParserBuilder);
          PyObject *t_ParserBuilder::wrap_Object(const ParserBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParserBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParserBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(ParserBuilder), &PY_TYPE_DEF(ParserBuilder), module, "ParserBuilder", 0);
          }

          void t_ParserBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "class_", make_descriptor(ParserBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "wrapfn_", make_descriptor(t_ParserBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParserBuilder::initializeClass, 1)))
              return NULL;
            return t_ParserBuilder::wrap_Object(ParserBuilder(((t_ParserBuilder *) arg)->object.this$));
          }
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParserBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ParserBuilder object((jobject) NULL);

                INT_CALL(object = ParserBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                ParserBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = ParserBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmParser());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemParser());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmParser());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmParser());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmParser());
            return ::org::orekit::files::ccsds::ndm::t_NdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmParser());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemParser());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmParser());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmParser());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmParser());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg)
          {
            jint a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultInterpolationDegree(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultInterpolationDegree", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultMass(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultMass", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withMu(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMu", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a0((jobject) NULL);
            PyTypeObject **p0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_))
            {
              OBJ_CALL(result = self->object.withParsedUnitsBehavior(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withParsedUnitsBehavior", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg)
          {
            jboolean a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withSimpleEOP(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSimpleEOP", arg);
            return NULL;
          }
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/TroposphericModelUtils.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TroposphericModelUtils::class$ = NULL;
          jmethodID *TroposphericModelUtils::mids$ = NULL;
          bool TroposphericModelUtils::live$ = false;

          jclass TroposphericModelUtils::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TroposphericModelUtils");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeHeightCorrection_99e3200dafc19573] = env->getStaticMethodID(cls, "computeHeightCorrection", "(DD)D");
              mids$[mid_computeHeightCorrection_3d637a35454b0975] = env->getStaticMethodID(cls, "computeHeightCorrection", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFunction_08eba2463884b341] = env->getStaticMethodID(cls, "mappingFunction", "(DDDD)D");
              mids$[mid_mappingFunction_0a337cffdfb74cd1] = env->getStaticMethodID(cls, "mappingFunction", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble TroposphericModelUtils::computeHeightCorrection(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_computeHeightCorrection_99e3200dafc19573], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::computeHeightCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeHeightCorrection_3d637a35454b0975], a0.this$, a1.this$, a2.this$));
          }

          jdouble TroposphericModelUtils::mappingFunction(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_mappingFunction_08eba2463884b341], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::mappingFunction(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_mappingFunction_0a337cffdfb74cd1], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args);
          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_TroposphericModelUtils__methods_[] = {
            DECLARE_METHOD(t_TroposphericModelUtils, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, computeHeightCorrection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, mappingFunction, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TroposphericModelUtils)[] = {
            { Py_tp_methods, t_TroposphericModelUtils__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TroposphericModelUtils)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TroposphericModelUtils, t_TroposphericModelUtils, TroposphericModelUtils);

          void t_TroposphericModelUtils::install(PyObject *module)
          {
            installType(&PY_TYPE(TroposphericModelUtils), &PY_TYPE_DEF(TroposphericModelUtils), module, "TroposphericModelUtils", 0);
          }

          void t_TroposphericModelUtils::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "class_", make_descriptor(TroposphericModelUtils::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "wrapfn_", make_descriptor(t_TroposphericModelUtils::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TroposphericModelUtils::initializeClass, 1)))
              return NULL;
            return t_TroposphericModelUtils::wrap_Object(TroposphericModelUtils(((t_TroposphericModelUtils *) arg)->object.this$));
          }
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TroposphericModelUtils::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeHeightCorrection", args);
            return NULL;
          }

          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "mappingFunction", args);
            return NULL;
          }
        }
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
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_b74f83833fdad017] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LevyDistribution::LevyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble LevyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble LevyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble LevyDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_b74f83833fdad017]);
        }

        jdouble LevyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble LevyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble LevyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble LevyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble LevyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble LevyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean LevyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble LevyDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmDataSubStructureKey::class$ = NULL;
              jmethodID *OcmDataSubStructureKey::mids$ = NULL;
              bool OcmDataSubStructureKey::live$ = false;
              OcmDataSubStructureKey *OcmDataSubStructureKey::COV = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::MAN = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::OD = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PERT = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PHYS = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::TRAJ = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::USER = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::cov = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::man = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::od = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::pert = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::phys = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::traj = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::user = NULL;

              jclass OcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_aff651a5d18925d2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;)Z");
                  mids$[mid_valueOf_f1cae8b8dd8bfea3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");
                  mids$[mid_values_f7e96f4471e5bc91] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  MAN = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  OD = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PERT = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PHYS = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  TRAJ = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "TRAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  USER = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  cov = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  man = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  od = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "od", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  pert = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "pert", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  phys = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  traj = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "traj", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  user = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_aff651a5d18925d2], a0.this$, a1.this$);
              }

              OcmDataSubStructureKey OcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f1cae8b8dd8bfea3], a0.this$));
              }

              JArray< OcmDataSubStructureKey > OcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f7e96f4471e5bc91]));
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
              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_OcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_OcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_OcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmDataSubStructureKey, t_OcmDataSubStructureKey, OcmDataSubStructureKey);
              PyObject *t_OcmDataSubStructureKey::wrap_Object(const OcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmDataSubStructureKey), &PY_TYPE_DEF(OcmDataSubStructureKey), module, "OcmDataSubStructureKey", 0);
              }

              void t_OcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "class_", make_descriptor(OcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "wrapfn_", make_descriptor(t_OcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "COV", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "MAN", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "OD", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PERT", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PHYS", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "TRAJ", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::TRAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "USER", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "cov", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "man", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "od", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::od)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "pert", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::pert)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "phys", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "traj", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::traj)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "user", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::user)));
              }

              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_OcmDataSubStructureKey::wrap_Object(OcmDataSubStructureKey(((t_OcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::valueOf(a0));
                  return t_OcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< OcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data)
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
#include "org/orekit/estimation/iod/IodGooding.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGooding::class$ = NULL;
        jmethodID *IodGooding::mids$ = NULL;
        bool IodGooding::live$ = false;

        jclass IodGooding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGooding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_ed2f73b687d7b3fb] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_7d4f80490bc92798] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_c03fe360e74975e8] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_73a78676e16a5011] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_62e9a8e517d5d933] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_15267dc25a0f2245] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getRange1_b74f83833fdad017] = env->getMethodID(cls, "getRange1", "()D");
            mids$[mid_getRange2_b74f83833fdad017] = env->getMethodID(cls, "getRange2", "()D");
            mids$[mid_getRange3_b74f83833fdad017] = env->getMethodID(cls, "getRange3", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGooding::IodGooding(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_ed2f73b687d7b3fb], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_7d4f80490bc92798], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_c03fe360e74975e8], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_73a78676e16a5011], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_62e9a8e517d5d933], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11, jint a12, jboolean a13) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_15267dc25a0f2245], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11, a12, a13));
        }

        jdouble IodGooding::getRange1() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange1_b74f83833fdad017]);
        }

        jdouble IodGooding::getRange2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange2_b74f83833fdad017]);
        }

        jdouble IodGooding::getRange3() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange3_b74f83833fdad017]);
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
      namespace iod {
        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args);
        static PyObject *t_IodGooding_getRange1(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange2(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange3(t_IodGooding *self);
        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data);
        static PyGetSetDef t_IodGooding__fields_[] = {
          DECLARE_GET_FIELD(t_IodGooding, range1),
          DECLARE_GET_FIELD(t_IodGooding, range2),
          DECLARE_GET_FIELD(t_IodGooding, range3),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IodGooding__methods_[] = {
          DECLARE_METHOD(t_IodGooding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, estimate, METH_VARARGS),
          DECLARE_METHOD(t_IodGooding, getRange1, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange2, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange3, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGooding)[] = {
          { Py_tp_methods, t_IodGooding__methods_ },
          { Py_tp_init, (void *) t_IodGooding_init_ },
          { Py_tp_getset, t_IodGooding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGooding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGooding, t_IodGooding, IodGooding);

        void t_IodGooding::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGooding), &PY_TYPE_DEF(IodGooding), module, "IodGooding", 0);
        }

        void t_IodGooding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "class_", make_descriptor(IodGooding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "wrapfn_", make_descriptor(t_IodGooding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGooding::initializeClass, 1)))
            return NULL;
          return t_IodGooding::wrap_Object(IodGooding(((t_IodGooding *) arg)->object.this$));
        }
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGooding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGooding object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGooding(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDD", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 14:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              jint a12;
              jboolean a13;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_IodGooding_getRange1(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange1());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange2(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange3(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange3());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange1());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange3());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/Month.h"
#include "java/util/Date.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/DateComponents.h"
#include "java/util/TimeZone.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbsoluteDate::class$ = NULL;
      jmethodID *AbsoluteDate::mids$ = NULL;
      bool AbsoluteDate::live$ = false;
      AbsoluteDate *AbsoluteDate::ARBITRARY_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::BEIDOU_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::CCSDS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FIFTIES_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FUTURE_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::GALILEO_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GLONASS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GPS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::IRNSS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::J2000_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JAVA_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::MODIFIED_JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::PAST_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::QZSS_EPOCH = NULL;

      jclass AbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3dd4638451e09a7f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_11d3b8f951ce80b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_5b216217265d5689] = env->getMethodID(cls, "<init>", "(Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_f8cb8221f5deec4f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_2cfdd011f87d504e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_b74a9688dab67f58] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_20870adf7ac3b4b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_e37b6ded3f6fdb52] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_02464ab2e4717549] = env->getMethodID(cls, "<init>", "(IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_6293b4461c3682a8] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_15548f264fdf4525] = env->getMethodID(cls, "<init>", "(IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_b977b1a10a6965aa] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_f359a0110559347a] = env->getStaticMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJDDate_c74dd3c2485745ab] = env->getStaticMethodID(cls, "createJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_f359a0110559347a] = env->getStaticMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createMJDDate_c74dd3c2485745ab] = env->getStaticMethodID(cls, "createMJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_durationFrom_fd347811007a6ba3] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getComponents_f1755ec8736bd41a] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_d9c22a5ed8c1b9d3] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_cddbcc31a262c398] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_bcf6d80061968f64] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_55a0c967e6b1dc4d] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_c1fdba35b878b1a3] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_c1fdba35b878b1a3] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBefore_c1fdba35b878b1a3] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_c1fdba35b878b1a3] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetween_a75d26361b05f747] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_a75d26361b05f747] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isCloseTo_b82d9df53d2a5740] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/TimeStamped;D)Z");
          mids$[mid_isEqualTo_c1fdba35b878b1a3] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_offsetFrom_dffb854ad9e23e35] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_b392b4c866ec17ce] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_4874a61101431aa6] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_56a54f073f526719] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_2c9f1cd11abb7e73] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_b6a19ae5f56d62e1] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_66e9d775e6061a31] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_f359a0110559347a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_timeScalesOffset_ace223435aa25aa4] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_toDate_d9f82c938588e1de] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_50f849f33c9b8343] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_2a9bffd3d5397f7c] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_2ee13d9bd10373d0] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_53541367a5869def] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_23096d7934eceeb9] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_2ee13d9bd10373d0] = env->getMethodID(cls, "toStringRfc3339", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_69e7a8b46a5608a0] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(Lorg/orekit/time/TimeScale;I)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARBITRARY_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "ARBITRARY_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          BEIDOU_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          CCSDS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FIFTIES_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FUTURE_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "FUTURE_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          GALILEO_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GLONASS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GPS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          IRNSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          J2000_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JAVA_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          MODIFIED_JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          PAST_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "PAST_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          QZSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsoluteDate::AbsoluteDate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3dd4638451e09a7f, a0.this$, a1)) {}

      AbsoluteDate::AbsoluteDate(const ::java::lang::String & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11d3b8f951ce80b4, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::java::util::Date & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b216217265d5689, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8cb8221f5deec4f, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateTimeComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2cfdd011f87d504e, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b74a9688dab67f58, a0.this$, a1.this$, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_20870adf7ac3b4b6, a0.this$, a1, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e37b6ded3f6fdb52, a0, a1.this$, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02464ab2e4717549, a0, a1, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6293b4461c3682a8, a0, a1.this$, a2, a3, a4, a5, a6.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15548f264fdf4525, a0, a1, a2, a3, a4, a5, a6.this$)) {}

      jint AbsoluteDate::compareTo(const AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_b977b1a10a6965aa], a0.this$);
      }

      AbsoluteDate AbsoluteDate::createBesselianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_f359a0110559347a], a0));
      }

      AbsoluteDate AbsoluteDate::createJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_c74dd3c2485745ab], a0, a1, a2.this$));
      }

      AbsoluteDate AbsoluteDate::createJulianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_f359a0110559347a], a0));
      }

      AbsoluteDate AbsoluteDate::createMJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_c74dd3c2485745ab], a0, a1, a2.this$));
      }

      jdouble AbsoluteDate::durationFrom(const AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_fd347811007a6ba3], a0.this$);
      }

      jboolean AbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_f1755ec8736bd41a], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_d9c22a5ed8c1b9d3], a0));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_cddbcc31a262c398], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_bcf6d80061968f64], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_55a0c967e6b1dc4d], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::getDate() const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jint AbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean AbsoluteDate::isAfter(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_c1fdba35b878b1a3], a0.this$);
      }

      jboolean AbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_c1fdba35b878b1a3], a0.this$);
      }

      jboolean AbsoluteDate::isBefore(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_c1fdba35b878b1a3], a0.this$);
      }

      jboolean AbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_c1fdba35b878b1a3], a0.this$);
      }

      jboolean AbsoluteDate::isBetween(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_a75d26361b05f747], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_a75d26361b05f747], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isCloseTo(const ::org::orekit::time::TimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_b82d9df53d2a5740], a0.this$, a1);
      }

      jboolean AbsoluteDate::isEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_c1fdba35b878b1a3], a0.this$);
      }

      jdouble AbsoluteDate::offsetFrom(const AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_dffb854ad9e23e35], a0.this$, a1.this$);
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_b392b4c866ec17ce], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_4874a61101431aa6], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_56a54f073f526719], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2, const ::org::orekit::time::TimeScale & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_2c9f1cd11abb7e73], a0, a1.this$, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_b6a19ae5f56d62e1], a0, a1, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3, const AbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_66e9d775e6061a31], a0, a1, a2.this$, a3.this$, a4.this$));
      }

      AbsoluteDate AbsoluteDate::shiftedBy(jdouble a0) const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_f359a0110559347a], a0));
      }

      jdouble AbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_timeScalesOffset_ace223435aa25aa4], a0.this$, a1.this$);
      }

      ::java::util::Date AbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_d9f82c938588e1de], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_50f849f33c9b8343], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_2a9bffd3d5397f7c], a0));
      }

      ::java::lang::String AbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_2ee13d9bd10373d0], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_53541367a5869def], a0.this$, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_23096d7934eceeb9], a0, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toStringRfc3339(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_2ee13d9bd10373d0], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toStringWithoutUtcOffset(const ::org::orekit::time::TimeScale & a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_69e7a8b46a5608a0], a0.this$, a1));
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
      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self);
      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data);
      static PyGetSetDef t_AbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_AbsoluteDate, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_AbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, createBesselianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, durationFrom, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_AbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, shiftedBy, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toStringRfc3339, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsoluteDate)[] = {
        { Py_tp_methods, t_AbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_AbsoluteDate_init_ },
        { Py_tp_getset, t_AbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbsoluteDate, t_AbsoluteDate, AbsoluteDate);

      void t_AbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsoluteDate), &PY_TYPE_DEF(AbsoluteDate), module, "AbsoluteDate", 0);
      }

      void t_AbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "class_", make_descriptor(AbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "wrapfn_", make_descriptor(t_AbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbsoluteDate::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "ARBITRARY_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::ARBITRARY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "BEIDOU_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "CCSDS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FIFTIES_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FUTURE_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FUTURE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GALILEO_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GLONASS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GPS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "IRNSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "J2000_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JAVA_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "PAST_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::PAST_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "QZSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::QZSS_EPOCH)));
      }

      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_AbsoluteDate::wrap_Object(AbsoluteDate(((t_AbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AbsoluteDate object((jobject) NULL);

            INT_CALL(object = AbsoluteDate());
            self->object = object;
            break;
          }
         case 2:
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kD", AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Date a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kDk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIIIDk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIIIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createBesselianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJulianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createMJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self)
      {
        AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args)
      {
        AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bk", AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate a4((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bkk", AbsoluteDate::initializeClass, AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args)
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
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toStringRfc3339(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringRfc3339", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        jint a1;
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data)
      {
        AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/util/Map.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "java/lang/Long.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
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
          mids$[mid_init$_0498c5665860e9c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/PolynomialNutation;Ljava/util/Map;)V");
          mids$[mid_compile_b83e06b5aa355fd4] = env->getStaticMethodID(cls, "compile", "([Lorg/orekit/data/PoissonSeries;)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getNonPolynomialSize_55546ef6a647f39b] = env->getMethodID(cls, "getNonPolynomialSize", "()I");
          mids$[mid_getPolynomial_58d21158a385d9ae] = env->getMethodID(cls, "getPolynomial", "()Lorg/orekit/data/PolynomialNutation;");
          mids$[mid_value_e5a6deebdf7be070] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_value_6d9bdfdb86170f1b] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeries::PoissonSeries(const ::org::orekit::data::PolynomialNutation & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0498c5665860e9c3, a0.this$, a1.this$)) {}

      ::org::orekit::data::PoissonSeries$CompiledSeries PoissonSeries::compile(const JArray< PoissonSeries > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callStaticObjectMethod(cls, mids$[mid_compile_b83e06b5aa355fd4], a0.this$));
      }

      jint PoissonSeries::getNonPolynomialSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNonPolynomialSize_55546ef6a647f39b]);
      }

      ::org::orekit::data::PolynomialNutation PoissonSeries::getPolynomial() const
      {
        return ::org::orekit::data::PolynomialNutation(env->callObjectMethod(this$, mids$[mid_getPolynomial_58d21158a385d9ae]));
      }

      jdouble PoissonSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_e5a6deebdf7be070], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement PoissonSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6d9bdfdb86170f1b], a0.this$));
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
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionFormat::class$ = NULL;
      jmethodID *BigFractionFormat::mids$ = NULL;
      bool BigFractionFormat::live$ = false;

      jclass BigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_a87510accfde9c74] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_face461ae8942182] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_b972afa1d89f0ad4] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatBigFraction_f2a5a6219e7b12b7] = env->getStaticMethodID(cls, "formatBigFraction", "(Lorg/hipparchus/fraction/BigFraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_8c1c73722be22f6f] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getImproperInstance_988fa2a63a10ed31] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_8c1c73722be22f6f] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_988fa2a63a10ed31] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_parse_77110530074039ea] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parse_9c54536a71758022] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parseNextBigInteger_01d91a5ef6747752] = env->getMethodID(cls, "parseNextBigInteger", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/math/BigInteger;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFractionFormat::BigFractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_a87510accfde9c74, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer BigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_face461ae8942182], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer BigFractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_b972afa1d89f0ad4], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String BigFractionFormat::formatBigFraction(const ::org::hipparchus::fraction::BigFraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatBigFraction_f2a5a6219e7b12b7], a0.this$));
      }

      JArray< ::java::util::Locale > BigFractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_8c1c73722be22f6f]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_988fa2a63a10ed31], a0.this$));
      }

      BigFractionFormat BigFractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_8c1c73722be22f6f]));
      }

      BigFractionFormat BigFractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_988fa2a63a10ed31], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_77110530074039ea], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_9c54536a71758022], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data);
      static PyGetSetDef t_BigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_BigFractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_BigFractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_BigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionFormat, formatBigFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionFormat)[] = {
        { Py_tp_methods, t_BigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_BigFractionFormat_init_ },
        { Py_tp_getset, t_BigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(BigFractionFormat, t_BigFractionFormat, BigFractionFormat);

      void t_BigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionFormat), &PY_TYPE_DEF(BigFractionFormat), module, "BigFractionFormat", 0);
      }

      void t_BigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "class_", make_descriptor(BigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "wrapfn_", make_descriptor(t_BigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_BigFractionFormat::wrap_Object(BigFractionFormat(((t_BigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat object((jobject) NULL);

            INT_CALL(object = BigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = BigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BigFractionFormat(a0, a1));
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

      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
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

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::formatBigFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatBigFraction", arg);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }

      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/TDOABuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TDOABuilder::class$ = NULL;
          jmethodID *TDOABuilder::mids$ = NULL;
          bool TDOABuilder::live$ = false;

          jclass TDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3482c99d647cecc6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_fc6e6664aa75a0c3] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOABuilder::TDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_3482c99d647cecc6, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TDOA TDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TDOA(env->callObjectMethod(this$, mids$[mid_build_fc6e6664aa75a0c3], a0.this$, a1.this$));
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
          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args);
          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args);
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data);
          static PyGetSetDef t_TDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOABuilder__methods_[] = {
            DECLARE_METHOD(t_TDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOABuilder)[] = {
            { Py_tp_methods, t_TDOABuilder__methods_ },
            { Py_tp_init, (void *) t_TDOABuilder_init_ },
            { Py_tp_getset, t_TDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TDOABuilder, t_TDOABuilder, TDOABuilder);
          PyObject *t_TDOABuilder::wrap_Object(const TDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOABuilder), &PY_TYPE_DEF(TDOABuilder), module, "TDOABuilder", 0);
          }

          void t_TDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "class_", make_descriptor(TDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "wrapfn_", make_descriptor(t_TDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOABuilder::initializeClass, 1)))
              return NULL;
            return t_TDOABuilder::wrap_Object(TDOABuilder(((t_TDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TDOABuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data)
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
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldStateMapper::class$ = NULL;
        jmethodID *FieldStateMapper::mids$ = NULL;
        bool FieldStateMapper::live$ = false;

        jclass FieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_81520b552cb3fa26] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapArrayToState_1b9bfe1085235c3b] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapArrayToState_332029ddc6fecef1] = env->getMethodID(cls, "mapArrayToState", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapDateToDouble_140b8964300ddedf] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_mapDoubleToDate_22e288de5d0d08a6] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapDoubleToDate_ee4cabe6e15ddac3] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapStateToArray_81a15f6754980fa1] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setPositionAngleType_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setPositionAngleType", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider FieldStateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_331f12bb6017243b]));
        }

        ::org::orekit::frames::Frame FieldStateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_81520b552cb3fa26]));
        }

        ::org::orekit::orbits::OrbitType FieldStateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::orekit::orbits::PositionAngleType FieldStateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_fa23a4301b9c83e7]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_1b9bfe1085235c3b], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_332029ddc6fecef1], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::mapDateToDouble(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mapDateToDouble_140b8964300ddedf], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_22e288de5d0d08a6], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_ee4cabe6e15ddac3], a0.this$, a1.this$));
        }

        void FieldStateMapper::mapStateToArray(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_81a15f6754980fa1], a0.this$, a1.this$, a2.this$);
        }

        void FieldStateMapper::setPositionAngleType() const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_a1fa5dae97ea5ed2]);
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
        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg);
        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data);
        static PyGetSetDef t_FieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldStateMapper, frame),
          DECLARE_GET_FIELD(t_FieldStateMapper, mu),
          DECLARE_GET_FIELD(t_FieldStateMapper, orbitType),
          DECLARE_GET_FIELD(t_FieldStateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_FieldStateMapper, referenceDate),
          DECLARE_GET_FIELD(t_FieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_FieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_FieldStateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, setPositionAngleType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStateMapper)[] = {
          { Py_tp_methods, t_FieldStateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStateMapper, t_FieldStateMapper, FieldStateMapper);
        PyObject *t_FieldStateMapper::wrap_Object(const FieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStateMapper), &PY_TYPE_DEF(FieldStateMapper), module, "FieldStateMapper", 0);
        }

        void t_FieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "class_", make_descriptor(FieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "wrapfn_", make_descriptor(t_FieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_FieldStateMapper::wrap_Object(FieldStateMapper(((t_FieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "K[K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self)
        {
          OBJ_CALL(self->object.setPositionAngleType());
          Py_RETURN_NONE;
        }
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Expm1.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Expm1::class$ = NULL;
        jmethodID *Expm1::mids$ = NULL;
        bool Expm1::live$ = false;

        jclass Expm1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Expm1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Expm1::Expm1() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Expm1::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Expm1::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args);

        static PyMethodDef t_Expm1__methods_[] = {
          DECLARE_METHOD(t_Expm1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Expm1)[] = {
          { Py_tp_methods, t_Expm1__methods_ },
          { Py_tp_init, (void *) t_Expm1_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Expm1)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Expm1, t_Expm1, Expm1);

        void t_Expm1::install(PyObject *module)
        {
          installType(&PY_TYPE(Expm1), &PY_TYPE_DEF(Expm1), module, "Expm1", 0);
        }

        void t_Expm1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "class_", make_descriptor(Expm1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "wrapfn_", make_descriptor(t_Expm1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Expm1::initializeClass, 1)))
            return NULL;
          return t_Expm1::wrap_Object(Expm1(((t_Expm1 *) arg)->object.this$));
        }
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Expm1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds)
        {
          Expm1 object((jobject) NULL);

          INT_CALL(object = Expm1());
          self->object = object;

          return 0;
        }

        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeFrame::class$ = NULL;
            jmethodID *ScreenVolumeFrame::mids$ = NULL;
            bool ScreenVolumeFrame::live$ = false;
            ScreenVolumeFrame *ScreenVolumeFrame::RTN = NULL;
            ScreenVolumeFrame *ScreenVolumeFrame::TVN = NULL;

            jclass ScreenVolumeFrame::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_7d896a2da0aba315] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_values_7eec49015dd6c39a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RTN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                TVN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "TVN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeFrame ScreenVolumeFrame::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7d896a2da0aba315], a0.this$));
            }

            JArray< ScreenVolumeFrame > ScreenVolumeFrame::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_7eec49015dd6c39a]));
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
            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data);
            static PyGetSetDef t_ScreenVolumeFrame__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeFrame, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeFrame__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeFrame, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeFrame, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeFrame)[] = {
              { Py_tp_methods, t_ScreenVolumeFrame__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeFrame__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeFrame)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeFrame, t_ScreenVolumeFrame, ScreenVolumeFrame);
            PyObject *t_ScreenVolumeFrame::wrap_Object(const ScreenVolumeFrame& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeFrame::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeFrame), &PY_TYPE_DEF(ScreenVolumeFrame), module, "ScreenVolumeFrame", 0);
            }

            void t_ScreenVolumeFrame::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "class_", make_descriptor(ScreenVolumeFrame::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "wrapfn_", make_descriptor(t_ScreenVolumeFrame::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeFrame::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "RTN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::RTN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "TVN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::TVN)));
            }

            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeFrame::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeFrame::wrap_Object(ScreenVolumeFrame(((t_ScreenVolumeFrame *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeFrame::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeFrame result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::valueOf(a0));
                return t_ScreenVolumeFrame::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeFrame > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeFrame::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data)
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
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *Covariance::class$ = NULL;
        jmethodID *Covariance::mids$ = NULL;
        bool Covariance::live$ = false;

        jclass Covariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/Covariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_30d41d58c8b5e4dc] = env->getMethodID(cls, "<init>", "([[DZ)V");
            mids$[mid_init$_07bc3fb795eede6d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Z)V");
            mids$[mid_covariance_3207f9c2ae7271d9] = env->getMethodID(cls, "covariance", "([D[D)D");
            mids$[mid_covariance_0c373dc781edcf2f] = env->getMethodID(cls, "covariance", "([D[DZ)D");
            mids$[mid_getCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getN_55546ef6a647f39b] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_computeCovarianceMatrix_be124f4006dc9f69] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_3afee3542a0dc560] = env->getMethodID(cls, "computeCovarianceMatrix", "([[DZ)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_2d1b7d41dfd6b278] = env->getMethodID(cls, "computeCovarianceMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_1a55785d25d46a45] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Z)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Covariance::Covariance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30d41d58c8b5e4dc, a0.this$, a1)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07bc3fb795eede6d, a0.this$, a1)) {}

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_0c373dc781edcf2f], a0.this$, a1.this$, a2);
        }

        ::org::hipparchus::linear::RealMatrix Covariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_f77d745f2128c391]));
        }

        jint Covariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_55546ef6a647f39b]);
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
      namespace correlation {
        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args);
        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self);
        static PyObject *t_Covariance_getN(t_Covariance *self);
        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data);
        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data);
        static PyGetSetDef t_Covariance__fields_[] = {
          DECLARE_GET_FIELD(t_Covariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_Covariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Covariance__methods_[] = {
          DECLARE_METHOD(t_Covariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, covariance, METH_VARARGS),
          DECLARE_METHOD(t_Covariance, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Covariance, getN, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Covariance)[] = {
          { Py_tp_methods, t_Covariance__methods_ },
          { Py_tp_init, (void *) t_Covariance_init_ },
          { Py_tp_getset, t_Covariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Covariance)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Covariance, t_Covariance, Covariance);

        void t_Covariance::install(PyObject *module)
        {
          installType(&PY_TYPE(Covariance), &PY_TYPE_DEF(Covariance), module, "Covariance", 0);
        }

        void t_Covariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "class_", make_descriptor(Covariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "wrapfn_", make_descriptor(t_Covariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Covariance::initializeClass, 1)))
            return NULL;
          return t_Covariance::wrap_Object(Covariance(((t_Covariance *) arg)->object.this$));
        }
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Covariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Covariance object((jobject) NULL);

              INT_CALL(object = Covariance());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[DZ", &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "kZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
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

        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "covariance", args);
          return NULL;
        }

        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Covariance_getN(t_Covariance *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonBodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonBodyShape::class$ = NULL;
      jmethodID *PythonBodyShape::mids$ = NULL;
      bool PythonBodyShape::live$ = false;

      jclass PythonBodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonBodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_66b39d6d84447197] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getIntersectionPoint_f1db6d4c78519d48] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_3cbe213b2c291f18] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_feded476b8bdfcfc] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_transform_6aa36b82e3b80b58] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_a840d9913a98925f] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_f67fa82bac3192f0] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_transform_93de77ed9854e321] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBodyShape::PythonBodyShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonBodyShape::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonBodyShape::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonBodyShape::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self);
      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args);
      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data);
      static PyGetSetDef t_PythonBodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBodyShape, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBodyShape__methods_[] = {
        DECLARE_METHOD(t_PythonBodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBodyShape, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBodyShape)[] = {
        { Py_tp_methods, t_PythonBodyShape__methods_ },
        { Py_tp_init, (void *) t_PythonBodyShape_init_ },
        { Py_tp_getset, t_PythonBodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBodyShape)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBodyShape, t_PythonBodyShape, PythonBodyShape);

      void t_PythonBodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBodyShape), &PY_TYPE_DEF(PythonBodyShape), module, "PythonBodyShape", 1);
      }

      void t_PythonBodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "class_", make_descriptor(PythonBodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "wrapfn_", make_descriptor(t_PythonBodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBodyShape::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBodyShape_getBodyFrame0 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint1 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint2 },
          { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBodyShape_projectToGround3 },
          { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_projectToGround4 },
          { "pythonDecRef", "()V", (void *) t_PythonBodyShape_pythonDecRef5 },
          { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonBodyShape_transform6 },
          { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_transform7 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_transform8 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_transform9 },
        };
        env->registerNatives(cls, methods, 10);
      }

      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBodyShape::initializeClass, 1)))
          return NULL;
        return t_PythonBodyShape::wrap_Object(PythonBodyShape(((t_PythonBodyShape *) arg)->object.this$));
      }
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds)
      {
        PythonBodyShape object((jobject) NULL);

        INT_CALL(object = PythonBodyShape());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args)
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

      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyFrame", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSOrbitalElements::class$ = NULL;
            jmethodID *GNSSOrbitalElements::mids$ = NULL;
            bool GNSSOrbitalElements::live$ = false;

            jclass GNSSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAngularVelocity_b74f83833fdad017] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCic_b74f83833fdad017] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_b74f83833fdad017] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_b74f83833fdad017] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_b74f83833fdad017] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_b74f83833fdad017] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_b74f83833fdad017] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getCycleDuration_b74f83833fdad017] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_b74f83833fdad017] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getM0_b74f83833fdad017] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_b74f83833fdad017] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_b74f83833fdad017] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_55546ef6a647f39b] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_b74f83833fdad017] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_8528f550d471e3fb] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_b4ee63e071e2baaa] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_0454d94a691f8539] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getSma_b74f83833fdad017] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_55546ef6a647f39b] = env->getMethodID(cls, "getWeek", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSOrbitalElements::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_b74f83833fdad017]);
            }

            jint GNSSOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_55546ef6a647f39b]);
            }

            jdouble GNSSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_b74f83833fdad017]);
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_8528f550d471e3fb]));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_b4ee63e071e2baaa], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_0454d94a691f8539], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GNSSOrbitalElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_b74f83833fdad017]);
            }

            jdouble GNSSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }

            jint GNSSOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_55546ef6a647f39b]);
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
            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args);
            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data);
            static PyGetSetDef t_GNSSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, angularVelocity),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cic),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cis),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crs),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cuc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cus),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, i0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, iDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, m0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, meanMotion),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, mu),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omega0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omegaDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, propagator),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, sma),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GNSSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCic, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCis, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCus, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getI0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getM0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getWeek, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSOrbitalElements)[] = {
              { Py_tp_methods, t_GNSSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSOrbitalElements, t_GNSSOrbitalElements, GNSSOrbitalElements);

            void t_GNSSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSOrbitalElements), &PY_TYPE_DEF(GNSSOrbitalElements), module, "GNSSOrbitalElements", 0);
            }

            void t_GNSSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "class_", make_descriptor(GNSSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "wrapfn_", make_descriptor(t_GNSSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GNSSOrbitalElements::wrap_Object(GNSSOrbitalElements(((t_GNSSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GNSSPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(value);
            }

            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
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
#include "org/orekit/time/AbstractFieldTimeInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator::mids$ = NULL;
      bool AbstractFieldTimeInterpolator::live$ = false;
      jdouble AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_088f0158548a8c3c] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/FieldTimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_b74f83833fdad017] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_1b1c8c532c82f5d0] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_f9931e17105657a3] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_b5e65e4880f65e9b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_4196fcb287c723cd] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/FieldTimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_794ba5c4a0bdcb26] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldTimeInterpolator::AbstractFieldTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      void AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::FieldTimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_088f0158548a8c3c], a0.this$, a1);
      }

      jdouble AbstractFieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_b74f83833fdad017]);
      }

      jint AbstractFieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_55546ef6a647f39b]);
      }

      ::java::util::List AbstractFieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_e62d3bb06d56d7e3]));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_1b1c8c532c82f5d0], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_f9931e17105657a3], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator, t_AbstractFieldTimeInterpolator, AbstractFieldTimeInterpolator);
      PyObject *t_AbstractFieldTimeInterpolator::wrap_Object(const AbstractFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator), &PY_TYPE_DEF(AbstractFieldTimeInterpolator), module, "AbstractFieldTimeInterpolator", 0);
      }

      void t_AbstractFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "class_", make_descriptor(AbstractFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractFieldTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator::wrap_Object(AbstractFieldTimeInterpolator(((t_AbstractFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractFieldTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractFieldTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldTimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/RegionFactory.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *RegionFactory::class$ = NULL;
        jmethodID *RegionFactory::mids$ = NULL;
        bool RegionFactory::live$ = false;

        jclass RegionFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/RegionFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildConvex_e11fc5da91d3c3d2] = env->getMethodID(cls, "buildConvex", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_difference_5ff305d3026725a5] = env->getMethodID(cls, "difference", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getComplement_116b72ede285c384] = env->getMethodID(cls, "getComplement", "(Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_intersection_5ff305d3026725a5] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_union_5ff305d3026725a5] = env->getMethodID(cls, "union", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_xor_5ff305d3026725a5] = env->getMethodID(cls, "xor", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegionFactory::RegionFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::buildConvex(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_buildConvex_e11fc5da91d3c3d2], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::difference(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_difference_5ff305d3026725a5], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::getComplement(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getComplement_116b72ede285c384], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::intersection(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_intersection_5ff305d3026725a5], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::union$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_union_5ff305d3026725a5], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::xor$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_xor_5ff305d3026725a5], a0.this$, a1.this$));
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
        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args);
        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data);
        static PyGetSetDef t_RegionFactory__fields_[] = {
          DECLARE_GET_FIELD(t_RegionFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegionFactory__methods_[] = {
          DECLARE_METHOD(t_RegionFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, buildConvex, METH_O),
          DECLARE_METHOD(t_RegionFactory, difference, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, getComplement, METH_O),
          DECLARE_METHOD(t_RegionFactory, intersection, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, union, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, xor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegionFactory)[] = {
          { Py_tp_methods, t_RegionFactory__methods_ },
          { Py_tp_init, (void *) t_RegionFactory_init_ },
          { Py_tp_getset, t_RegionFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegionFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegionFactory, t_RegionFactory, RegionFactory);
        PyObject *t_RegionFactory::wrap_Object(const RegionFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegionFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegionFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(RegionFactory), &PY_TYPE_DEF(RegionFactory), module, "RegionFactory", 0);
        }

        void t_RegionFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "class_", make_descriptor(RegionFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "wrapfn_", make_descriptor(t_RegionFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegionFactory::initializeClass, 1)))
            return NULL;
          return t_RegionFactory::wrap_Object(RegionFactory(((t_RegionFactory *) arg)->object.this$));
        }
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegionFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds)
        {
          RegionFactory object((jobject) NULL);

          INT_CALL(object = RegionFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "[K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.buildConvex(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildConvex", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.difference(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "difference", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.getComplement(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getComplement", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.union$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "union", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.xor$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "xor", args);
          return NULL;
        }
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetectorsProvider::class$ = NULL;
        jmethodID *EventDetectorsProvider::mids$ = NULL;
        bool EventDetectorsProvider::live$ = false;
        jdouble EventDetectorsProvider::DATATION_ACCURACY = (jdouble) 0;

        jclass EventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getEventDetectors_b6d6fcabc14abaa4] = env->getMethodID(cls, "getEventDetectors", "(Ljava/util/List;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_cc7121c1f0e78224] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;Ljava/util/List;)Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATATION_ACCURACY = env->getStaticDoubleField(cls, "DATATION_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors(const ::java::util::List & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_b6d6fcabc14abaa4], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0, const ::java::util::List & a1) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_cc7121c1f0e78224], a0.this$, a1.this$));
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
        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data);
        static PyGetSetDef t_EventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetectorsProvider, eventDetectors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_EventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_EventDetectorsProvider, getFieldEventDetectors, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetectorsProvider)[] = {
          { Py_tp_methods, t_EventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetectorsProvider, t_EventDetectorsProvider, EventDetectorsProvider);

        void t_EventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetectorsProvider), &PY_TYPE_DEF(EventDetectorsProvider), module, "EventDetectorsProvider", 0);
        }

        void t_EventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "class_", make_descriptor(EventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "wrapfn_", make_descriptor(t_EventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EventDetectorsProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "DATATION_ACCURACY", make_descriptor(EventDetectorsProvider::DATATION_ACCURACY));
        }

        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_EventDetectorsProvider::wrap_Object(EventDetectorsProvider(((t_EventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }
            break;
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0, a1));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonRawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonRawSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonRawSphericalHarmonicsProvider::live$ = false;

          jclass PythonRawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_b74f83833fdad017] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_45f17e7d0917d2cb] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonRawSphericalHarmonicsProvider::PythonRawSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonRawSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonRawSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonRawSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonRawSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonRawSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonRawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonRawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonRawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonRawSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonRawSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonRawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonRawSphericalHarmonicsProvider, t_PythonRawSphericalHarmonicsProvider, PythonRawSphericalHarmonicsProvider);

          void t_PythonRawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonRawSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonRawSphericalHarmonicsProvider), module, "PythonRawSphericalHarmonicsProvider", 1);
          }

          void t_PythonRawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "class_", make_descriptor(PythonRawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonRawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonRawSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonRawSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonRawSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;", (void *) t_PythonRawSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonRawSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonRawSphericalHarmonicsProvider::wrap_Object(PythonRawSphericalHarmonicsProvider(((t_PythonRawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonRawSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonRawSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonAbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonAbstractGNSSAttitudeProvider::mids$ = NULL;
        bool PythonAbstractGNSSAttitudeProvider::live$ = false;

        jclass PythonAbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a872ffc4376f5f34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGNSSAttitudeProvider::PythonAbstractGNSSAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_a872ffc4376f5f34, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractGNSSAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args);
        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonAbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonAbstractGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGNSSAttitudeProvider, t_PythonAbstractGNSSAttitudeProvider, PythonAbstractGNSSAttitudeProvider);

        void t_PythonAbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGNSSAttitudeProvider), &PY_TYPE_DEF(PythonAbstractGNSSAttitudeProvider), module, "PythonAbstractGNSSAttitudeProvider", 1);
        }

        void t_PythonAbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "class_", make_descriptor(PythonAbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGNSSAttitudeProvider::wrap_Object(PythonAbstractGNSSAttitudeProvider(((t_PythonAbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          PythonAbstractGNSSAttitudeProvider object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractGNSSAttitudeProvider(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data)
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
#include "org/orekit/data/PythonDataLoader.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataLoader::class$ = NULL;
      jmethodID *PythonDataLoader::mids$ = NULL;
      bool PythonDataLoader::live$ = false;

      jclass PythonDataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataLoader::PythonDataLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonDataLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonDataLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonDataLoader::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self);
      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args);
      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data);
      static PyGetSetDef t_PythonDataLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataLoader__methods_[] = {
        DECLARE_METHOD(t_PythonDataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataLoader)[] = {
        { Py_tp_methods, t_PythonDataLoader__methods_ },
        { Py_tp_init, (void *) t_PythonDataLoader_init_ },
        { Py_tp_getset, t_PythonDataLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataLoader, t_PythonDataLoader, PythonDataLoader);

      void t_PythonDataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataLoader), &PY_TYPE_DEF(PythonDataLoader), module, "PythonDataLoader", 1);
      }

      void t_PythonDataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "class_", make_descriptor(PythonDataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "wrapfn_", make_descriptor(t_PythonDataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonDataLoader_loadData0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataLoader_pythonDecRef1 },
          { "stillAcceptsData", "()Z", (void *) t_PythonDataLoader_stillAcceptsData2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataLoader::initializeClass, 1)))
          return NULL;
        return t_PythonDataLoader::wrap_Object(PythonDataLoader(((t_PythonDataLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonDataLoader object((jobject) NULL);

        INT_CALL(object = PythonDataLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args)
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

      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "stillAcceptsData", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("stillAcceptsData", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data)
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
