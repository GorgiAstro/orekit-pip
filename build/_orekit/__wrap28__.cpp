#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *UnivariateIntegrator::class$ = NULL;
        jmethodID *UnivariateIntegrator::mids$ = NULL;
        bool UnivariateIntegrator::live$ = false;

        jclass UnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/UnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_5531acb13e429311] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble UnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_dff5885c2c873297]);
        }

        jint UnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        jint UnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
        }

        jint UnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_570ce0828f81a2c1]);
        }

        jint UnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_570ce0828f81a2c1]);
        }

        jdouble UnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_dff5885c2c873297]);
        }

        jdouble UnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_5531acb13e429311], a0, a1.this$, a2, a3);
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
        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args);
        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyGetSetDef t_UnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_UnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateIntegrator)[] = {
          { Py_tp_methods, t_UnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateIntegrator, t_UnivariateIntegrator, UnivariateIntegrator);

        void t_UnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateIntegrator), &PY_TYPE_DEF(UnivariateIntegrator), module, "UnivariateIntegrator", 0);
        }

        void t_UnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "class_", make_descriptor(UnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "wrapfn_", make_descriptor(t_UnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_UnivariateIntegrator::wrap_Object(UnivariateIntegrator(((t_UnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *AbstractManeuverTriggers::class$ = NULL;
          jmethodID *AbstractManeuverTriggers::mids$ = NULL;
          bool AbstractManeuverTriggers::live$ = false;

          jclass AbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_a16797fae59e88ec] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_e53773d2404dc858] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getFirings_62c7757711639c83] = env->getMethodID(cls, "getFirings", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_785ace4124d89120] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_89b940ef53c9a82d] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_initializeResetters_826b4eda94da4e78] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_initializeResetters_8e8de2be1664674a] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_notifyResetters_33f4696e4edaa03c] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_notifyResetters_33f1c56ea7775d4e] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_applyResetters_f43130c50e9fafeb] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_applyResetters_25e81e971666cba6] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isFiringOnInitialState_6501154ab0a356a8] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_a16797fae59e88ec], a0.this$);
          }

          void AbstractManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_e53773d2404dc858], a0.this$, a1.this$);
          }

          ::org::orekit::utils::TimeSpanMap AbstractManeuverTriggers::getFirings() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getFirings_62c7757711639c83]));
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_785ace4124d89120], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_89b940ef53c9a82d], a0.this$, a1.this$);
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
          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self);
          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_AbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractManeuverTriggers, firings),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_AbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, getFirings, METH_NOARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_AbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractManeuverTriggers, t_AbstractManeuverTriggers, AbstractManeuverTriggers);

          void t_AbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractManeuverTriggers), &PY_TYPE_DEF(AbstractManeuverTriggers), module, "AbstractManeuverTriggers", 0);
          }

          void t_AbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "class_", make_descriptor(AbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "wrapfn_", make_descriptor(t_AbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_AbstractManeuverTriggers::wrap_Object(AbstractManeuverTriggers(((t_AbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Boolean));
          }

          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
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
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *UnivariateStatistic::class$ = NULL;
        jmethodID *UnivariateStatistic::mids$ = NULL;
        bool UnivariateStatistic::live$ = false;

        jclass UnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/UnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copy_f30bf4039f437912] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "evaluate", "([D)D");
            mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateStatistic UnivariateStatistic::copy() const
        {
          return UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_f30bf4039f437912]));
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_9dc1ec0bcc0a9a29], a0.this$);
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
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
        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self);
        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args);

        static PyMethodDef t_UnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_UnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateStatistic, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateStatistic)[] = {
          { Py_tp_methods, t_UnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::util::MathArrays$Function),
          NULL
        };

        DEFINE_TYPE(UnivariateStatistic, t_UnivariateStatistic, UnivariateStatistic);

        void t_UnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateStatistic), &PY_TYPE_DEF(UnivariateStatistic), module, "UnivariateStatistic", 0);
        }

        void t_UnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "class_", make_descriptor(UnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "wrapfn_", make_descriptor(t_UnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_UnivariateStatistic::wrap_Object(UnivariateStatistic(((t_UnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self)
        {
          UnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_UnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
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
          }

          return callSuper(PY_TYPE(UnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Position::class$ = NULL;
        jmethodID *Position::mids$ = NULL;
        bool Position::live$ = false;
        ::java::lang::String *Position::MEASUREMENT_TYPE = NULL;

        jclass Position::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Position");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b39cf2a9e1d1fc45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_984266dc65a298c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_91453090eb6b628d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_0358d8ea02f2cdb1] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_0358d8ea02f2cdb1] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_d52645e0d4c07563] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_b39cf2a9e1d1fc45, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< JArray< jdouble > > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_984266dc65a298c8, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_91453090eb6b628d, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        JArray< JArray< jdouble > > Position::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_0358d8ea02f2cdb1]));
        }

        JArray< JArray< jdouble > > Position::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_0358d8ea02f2cdb1]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Position::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d52645e0d4c07563]));
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
        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_of_(t_Position *self, PyObject *args);
        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self);
        static PyObject *t_Position_getCovarianceMatrix(t_Position *self);
        static PyObject *t_Position_getPosition(t_Position *self);
        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__position(t_Position *self, void *data);
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data);
        static PyGetSetDef t_Position__fields_[] = {
          DECLARE_GET_FIELD(t_Position, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_Position, covarianceMatrix),
          DECLARE_GET_FIELD(t_Position, position),
          DECLARE_GET_FIELD(t_Position, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Position__methods_[] = {
          DECLARE_METHOD(t_Position, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, of_, METH_VARARGS),
          DECLARE_METHOD(t_Position, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getPosition, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Position)[] = {
          { Py_tp_methods, t_Position__methods_ },
          { Py_tp_init, (void *) t_Position_init_ },
          { Py_tp_getset, t_Position__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Position)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(Position, t_Position, Position);
        PyObject *t_Position::wrap_Object(const Position& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Position::install(PyObject *module)
        {
          installType(&PY_TYPE(Position), &PY_TYPE_DEF(Position), module, "Position", 0);
        }

        void t_Position::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "class_", make_descriptor(Position::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "wrapfn_", make_descriptor(t_Position::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "boxfn_", make_descriptor(boxObject));
          env->getClass(Position::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "MEASUREMENT_TYPE", make_descriptor(j2p(*Position::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Position::initializeClass, 1)))
            return NULL;
          return t_Position::wrap_Object(Position(((t_Position *) arg)->object.this$));
        }
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Position::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Position_of_(t_Position *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getCovarianceMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getPosition(t_Position *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__position(t_Position *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ConstantThrustManeuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/String.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConstantThrustManeuver::class$ = NULL;
        jmethodID *ConstantThrustManeuver::mids$ = NULL;
        bool ConstantThrustManeuver::live$ = false;

        jclass ConstantThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConstantThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e049468e630fb0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_6df74997602d228f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_4d8b3d27e4bb3628] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_97519142b48ff00e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_69dee4bb0a05926f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_4efcdf187980e995] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_786088b67d5db4af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
            mids$[mid_getDirection_d52645e0d4c07563] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDirection_24461752d0eea1e3] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDuration_dff5885c2c873297] = env->getMethodID(cls, "getDuration", "()D");
            mids$[mid_getEndDate_85703d13e302437e] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFlowRate_dff5885c2c873297] = env->getMethodID(cls, "getFlowRate", "()D");
            mids$[mid_getFlowRate_bf1d7732f1acb697] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getIsp_dff5885c2c873297] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_bf1d7732f1acb697] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getStartDate_85703d13e302437e] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getThrustMagnitude_dff5885c2c873297] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_bf1d7732f1acb697] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustVector_d52645e0d4c07563] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getThrustVector_24461752d0eea1e3] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_isFiring_1b0abd4f90ebd0eb] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isFiring_680f8463a473c3cb] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/SpacecraftState;)Z");
            mids$[mid_isFiring_db6d81809797ddaa] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a2) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_0e049468e630fb0a, a0.this$, a1.this$, a2.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_6df74997602d228f, a0.this$, a1, a2.this$, a3.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_4d8b3d27e4bb3628, a0.this$, a1, a2, a3, a4.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::java::lang::String & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_97519142b48ff00e, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_69dee4bb0a05926f, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::java::lang::String & a6) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_4efcdf187980e995, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a6, const ::java::lang::String & a7) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_786088b67d5db4af, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$, a7.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_24461752d0eea1e3], a0.this$));
        }

        jdouble ConstantThrustManeuver::getDuration() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDuration_dff5885c2c873297]);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getEndDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_85703d13e302437e]));
        }

        jdouble ConstantThrustManeuver::getFlowRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_dff5885c2c873297]);
        }

        jdouble ConstantThrustManeuver::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_bf1d7732f1acb697], a0.this$);
        }

        jdouble ConstantThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_dff5885c2c873297]);
        }

        jdouble ConstantThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_bf1d7732f1acb697], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getStartDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_85703d13e302437e]));
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_dff5885c2c873297]);
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_bf1d7732f1acb697], a0.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_24461752d0eea1e3], a0.this$));
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_1b0abd4f90ebd0eb], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_680f8463a473c3cb], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_db6d81809797ddaa], a0.this$);
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
        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data);
        static PyGetSetDef t_ConstantThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, direction),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, duration),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, endDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, flowRate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, startDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustMagnitude),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustVector),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConstantThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDirection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDuration, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getEndDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getFlowRate, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getStartDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustMagnitude, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustVector, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, isFiring, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantThrustManeuver)[] = {
          { Py_tp_methods, t_ConstantThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConstantThrustManeuver_init_ },
          { Py_tp_getset, t_ConstantThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConstantThrustManeuver, t_ConstantThrustManeuver, ConstantThrustManeuver);

        void t_ConstantThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantThrustManeuver), &PY_TYPE_DEF(ConstantThrustManeuver), module, "ConstantThrustManeuver", 0);
        }

        void t_ConstantThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "class_", make_descriptor(ConstantThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "wrapfn_", make_descriptor(t_ConstantThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConstantThrustManeuver::wrap_Object(ConstantThrustManeuver(((t_ConstantThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a2((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_DateBasedManeuverTriggers::parameters_, &a2))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a3((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::java::lang::String a6((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::lang::String a7((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkkKs", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a7))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getDirection());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDirection(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDirection", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDuration());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFlowRate());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFlowRate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getThrustVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustVector(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFiring", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDuration());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFlowRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Data::class$ = NULL;
              jmethodID *SsrIgm03Data::mids$ = NULL;
              bool SsrIgm03Data::live$ = false;

              jclass SsrIgm03Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ac204103acb34678] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_570ce0828f81a2c1] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_ed0d27aa2377afa2] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_b67ff9100e1cd031] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_99803b0791f320ff] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_4d608774f859b10b] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Data::SsrIgm03Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm03Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ac204103acb34678]));
              }

              jint SsrIgm03Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_570ce0828f81a2c1]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm03Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_ed0d27aa2377afa2]));
              }

              void SsrIgm03Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_b67ff9100e1cd031], a0.this$);
              }

              void SsrIgm03Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_99803b0791f320ff], a0);
              }

              void SsrIgm03Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_4d608774f859b10b], a0.this$);
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
              static PyObject *t_SsrIgm03Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Data_init_(t_SsrIgm03Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Data_getClockCorrection(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_getGnssIod(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_getOrbitCorrection(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_setClockCorrection(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_setGnssIod(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_setOrbitCorrection(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_get__clockCorrection(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__clockCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm03Data_get__gnssIod(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__gnssIod(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm03Data_get__orbitCorrection(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__orbitCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, clockCorrection),
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, setClockCorrection, METH_O),
                DECLARE_METHOD(t_SsrIgm03Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm03Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Data)[] = {
                { Py_tp_methods, t_SsrIgm03Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Data_init_ },
                { Py_tp_getset, t_SsrIgm03Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Data, t_SsrIgm03Data, SsrIgm03Data);

              void t_SsrIgm03Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Data), &PY_TYPE_DEF(SsrIgm03Data), module, "SsrIgm03Data", 0);
              }

              void t_SsrIgm03Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "class_", make_descriptor(SsrIgm03Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "wrapfn_", make_descriptor(t_SsrIgm03Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Data::wrap_Object(SsrIgm03Data(((t_SsrIgm03Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Data_init_(t_SsrIgm03Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Data object((jobject) NULL);

                INT_CALL(object = SsrIgm03Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Data_getClockCorrection(t_SsrIgm03Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm03Data_getGnssIod(t_SsrIgm03Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Data_getOrbitCorrection(t_SsrIgm03Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm03Data_setClockCorrection(t_SsrIgm03Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_setGnssIod(t_SsrIgm03Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_setOrbitCorrection(t_SsrIgm03Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_get__clockCorrection(t_SsrIgm03Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm03Data_set__clockCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_SsrIgm03Data_get__gnssIod(t_SsrIgm03Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Data_set__gnssIod(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm03Data_get__orbitCorrection(t_SsrIgm03Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm03Data_set__orbitCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
            mids$[mid_getKey_11b109bd155ca898] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_b29d8f80b1a4dc39] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/lang/String;C)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_valueOf_e68aca3bf34b06b1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_values_2619b2b232d03ae1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/DataUsed;");

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
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_11b109bd155ca898]));
        }

        DataUsed DataUsed::parse(const ::java::lang::String & a0, const ::java::lang::String & a1, jchar a2)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_parse_b29d8f80b1a4dc39], a0.this$, a1.this$, a2));
        }

        DataUsed DataUsed::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e68aca3bf34b06b1], a0.this$));
        }

        JArray< DataUsed > DataUsed::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< DataUsed >(env->callStaticObjectMethod(cls, mids$[mid_values_2619b2b232d03ae1]));
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
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *DenseOutputModel::class$ = NULL;
      jmethodID *DenseOutputModel::mids$ = NULL;
      bool DenseOutputModel::live$ = false;

      jclass DenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/DenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_ad9eeb1bf2af40c3] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/DenseOutputModel;)V");
          mids$[mid_finish_250c80d95e429c01] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_dff5885c2c873297] = env->getMethodID(cls, "getFinalTime", "()D");
          mids$[mid_getInitialTime_dff5885c2c873297] = env->getMethodID(cls, "getInitialTime", "()D");
          mids$[mid_getInterpolatedState_f01efdb3ab1bad7f] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_handleStep_8c00288d760ba078] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
          mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DenseOutputModel::DenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void DenseOutputModel::append(const DenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_ad9eeb1bf2af40c3], a0.this$);
      }

      void DenseOutputModel::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_250c80d95e429c01], a0.this$);
      }

      jdouble DenseOutputModel::getFinalTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFinalTime_dff5885c2c873297]);
      }

      jdouble DenseOutputModel::getInitialTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInitialTime_dff5885c2c873297]);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative DenseOutputModel::getInterpolatedState(jdouble a0) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_f01efdb3ab1bad7f], a0));
      }

      void DenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_8c00288d760ba078], a0.this$);
      }

      void DenseOutputModel::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
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
      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args);
      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data);
      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data);
      static PyGetSetDef t_DenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_DenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_DenseOutputModel, initialTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_DenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DenseOutputModel)[] = {
        { Py_tp_methods, t_DenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_DenseOutputModel_init_ },
        { Py_tp_getset, t_DenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DenseOutputModel, t_DenseOutputModel, DenseOutputModel);

      void t_DenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(DenseOutputModel), &PY_TYPE_DEF(DenseOutputModel), module, "DenseOutputModel", 0);
      }

      void t_DenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "class_", make_descriptor(DenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "wrapfn_", make_descriptor(t_DenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_DenseOutputModel::wrap_Object(DenseOutputModel(((t_DenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        DenseOutputModel object((jobject) NULL);

        INT_CALL(object = DenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg)
      {
        DenseOutputModel a0((jobject) NULL);

        if (!parseArg(arg, "k", DenseOutputModel::initializeClass, &a0))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFinalTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInitialTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFinalTime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInitialTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *Propagator::class$ = NULL;
      jmethodID *Propagator::mids$ = NULL;
      bool Propagator::live$ = false;
      jdouble Propagator::DEFAULT_MASS = (jdouble) 0;

      jclass Propagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/Propagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_81bc0d009507f0f4] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_efb7003d866d4523] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getDefaultLaw_7a62213ff6ce3ce4] = env->getStaticMethodID(cls, "getDefaultLaw", "(Lorg/orekit/frames/Frames;)Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_18d439b26e70ccd0] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_808e9f10a9e4927b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fbff2ff5554d95e1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_a69ef29c3ea1e1fa] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_bacb99df21c3a796] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setStepHandler_768baea54d9d6ae5] = env->getMethodID(cls, "setStepHandler", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
          mids$[mid_setupMatricesComputation_ae2572b7a98390d4] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Propagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_81bc0d009507f0f4], a0.this$);
      }

      void Propagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_efb7003d866d4523], a0.this$);
      }

      void Propagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0fa09c18fee449d5]);
      }

      void Propagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0fa09c18fee449d5]);
      }

      ::java::util::List Propagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_2afa36052df4765d]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_a904f3d015a354a0]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getDefaultLaw(const ::org::orekit::frames::Frames & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_getDefaultLaw_7a62213ff6ce3ce4], a0.this$));
      }

      ::org::orekit::propagation::EphemerisGenerator Propagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_18d439b26e70ccd0]));
      }

      ::java::util::Collection Propagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_37528d110cff6b74]));
      }

      ::org::orekit::frames::Frame Propagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_c6311115fea01a34]));
      }

      JArray< ::java::lang::String > Propagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer Propagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_808e9f10a9e4927b]));
      }

      jboolean Propagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fbff2ff5554d95e1], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_a69ef29c3ea1e1fa], a0.this$, a1.this$));
      }

      void Propagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
      }

      void Propagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
      }

      void Propagator::setStepHandler(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_bacb99df21c3a796], a0.this$);
      }

      void Propagator::setStepHandler(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_768baea54d9d6ae5], a0, a1.this$);
      }

      ::org::orekit::propagation::MatricesHarvester Propagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_ae2572b7a98390d4], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self);
      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self);
      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self);
      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self);
      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_getFrame(t_Propagator *self);
      static PyObject *t_Propagator_getInitialState(t_Propagator *self);
      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self);
      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self);
      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data);
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data);
      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data);
      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data);
      static PyGetSetDef t_Propagator__fields_[] = {
        DECLARE_GET_FIELD(t_Propagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_Propagator, attitudeProvider),
        DECLARE_GET_FIELD(t_Propagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_Propagator, eventsDetectors),
        DECLARE_GET_FIELD(t_Propagator, frame),
        DECLARE_GET_FIELD(t_Propagator, initialState),
        DECLARE_GET_FIELD(t_Propagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_Propagator, multiplexer),
        DECLARE_SET_FIELD(t_Propagator, stepHandler),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Propagator__methods_[] = {
        DECLARE_METHOD(t_Propagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_Propagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_Propagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getDefaultLaw, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_Propagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_Propagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_Propagator, setStepHandler, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Propagator)[] = {
        { Py_tp_methods, t_Propagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Propagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Propagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(Propagator, t_Propagator, Propagator);

      void t_Propagator::install(PyObject *module)
      {
        installType(&PY_TYPE(Propagator), &PY_TYPE_DEF(Propagator), module, "Propagator", 0);
      }

      void t_Propagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "class_", make_descriptor(Propagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "wrapfn_", make_descriptor(t_Propagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(Propagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "DEFAULT_MASS", make_descriptor(Propagator::DEFAULT_MASS));
      }

      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Propagator::initializeClass, 1)))
          return NULL;
        return t_Propagator::wrap_Object(Propagator(((t_Propagator *) arg)->object.this$));
      }
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Propagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frames a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::Propagator::getDefaultLaw(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getDefaultLaw", arg);
        return NULL;
      }

      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self)
      {
        ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
      }

      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_Propagator_getFrame(t_Propagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Propagator_getInitialState(t_Propagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }

      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data)
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

      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::OrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &value))
          {
            INT_CALL(self->object.setStepHandler(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "stepHandler", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadataKey::mids$ = NULL;
              bool AttitudeStateHistoryMetadataKey::live$ = false;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_PREV_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::COMMENT = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::NUMBER_STATES = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::RATE_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_A = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_B = NULL;

              jclass AttitudeStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_4a55b8ed8c24d7d9] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_95305a6a191bf229] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");
                  mids$[mid_values_4cdb19a8b38e43ea] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_BASIS = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_BASIS_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_PREV_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  COMMENT = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  EULER_ROT_SEQ = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  NUMBER_STATES = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  RATE_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "RATE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_A = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_B = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_4a55b8ed8c24d7d9], a0.this$, a1.this$, a2.this$);
              }

              AttitudeStateHistoryMetadataKey AttitudeStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_95305a6a191bf229], a0.this$));
              }

              JArray< AttitudeStateHistoryMetadataKey > AttitudeStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4cdb19a8b38e43ea]));
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
              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadataKey, t_AttitudeStateHistoryMetadataKey, AttitudeStateHistoryMetadataKey);
              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_Object(const AttitudeStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadataKey), &PY_TYPE_DEF(AttitudeStateHistoryMetadataKey), module, "AttitudeStateHistoryMetadataKey", 0);
              }

              void t_AttitudeStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "class_", make_descriptor(AttitudeStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_PREV_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "NUMBER_STATES", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "RATE_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::RATE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_A", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_B", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_B)));
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadataKey::wrap_Object(AttitudeStateHistoryMetadataKey(((t_AttitudeStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data)
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
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Control3DVectorCostType::class$ = NULL;
        jmethodID *Control3DVectorCostType::mids$ = NULL;
        bool Control3DVectorCostType::live$ = false;
        Control3DVectorCostType *Control3DVectorCostType::INF_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::NONE = NULL;
        Control3DVectorCostType *Control3DVectorCostType::ONE_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::TWO_NORM = NULL;

        jclass Control3DVectorCostType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Control3DVectorCostType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_11b158fbf85bdc54] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_bf473e7c74e5ce2b] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_valueOf_e4813c5809923fe4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_values_8a829e96a9a95262] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INF_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "INF_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            NONE = new Control3DVectorCostType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            ONE_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "ONE_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            TWO_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "TWO_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_11b158fbf85bdc54], a0.this$));
        }

        jdouble Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_bf473e7c74e5ce2b], a0.this$);
        }

        Control3DVectorCostType Control3DVectorCostType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Control3DVectorCostType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e4813c5809923fe4], a0.this$));
        }

        JArray< Control3DVectorCostType > Control3DVectorCostType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Control3DVectorCostType >(env->callStaticObjectMethod(cls, mids$[mid_values_8a829e96a9a95262]));
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
        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type);
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data);
        static PyGetSetDef t_Control3DVectorCostType__fields_[] = {
          DECLARE_GET_FIELD(t_Control3DVectorCostType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Control3DVectorCostType__methods_[] = {
          DECLARE_METHOD(t_Control3DVectorCostType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, of_, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Control3DVectorCostType)[] = {
          { Py_tp_methods, t_Control3DVectorCostType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Control3DVectorCostType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Control3DVectorCostType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Control3DVectorCostType, t_Control3DVectorCostType, Control3DVectorCostType);
        PyObject *t_Control3DVectorCostType::wrap_Object(const Control3DVectorCostType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Control3DVectorCostType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Control3DVectorCostType::install(PyObject *module)
        {
          installType(&PY_TYPE(Control3DVectorCostType), &PY_TYPE_DEF(Control3DVectorCostType), module, "Control3DVectorCostType", 0);
        }

        void t_Control3DVectorCostType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "class_", make_descriptor(Control3DVectorCostType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "wrapfn_", make_descriptor(t_Control3DVectorCostType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "boxfn_", make_descriptor(boxObject));
          env->getClass(Control3DVectorCostType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "INF_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::INF_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "NONE", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "ONE_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::ONE_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "TWO_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::TWO_NORM)));
        }

        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Control3DVectorCostType::initializeClass, 1)))
            return NULL;
          return t_Control3DVectorCostType::wrap_Object(Control3DVectorCostType(((t_Control3DVectorCostType *) arg)->object.this$));
        }
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Control3DVectorCostType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Control3DVectorCostType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::valueOf(a0));
            return t_Control3DVectorCostType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type)
        {
          JArray< Control3DVectorCostType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::values());
          return JArray<jobject>(result.this$).wrap(t_Control3DVectorCostType::wrap_jobject);
        }
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap$Iterator::mids$ = NULL;
      bool OpenIntToDoubleHashMap$Iterator::live$ = false;

      jclass OpenIntToDoubleHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_0fa09c18fee449d5] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_b108b35ef48e27bd] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_570ce0828f81a2c1] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_dff5885c2c873297] = env->getMethodID(cls, "value", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToDoubleHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_0fa09c18fee449d5]);
      }

      jboolean OpenIntToDoubleHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_b108b35ef48e27bd]);
      }

      jint OpenIntToDoubleHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_570ce0828f81a2c1]);
      }

      jdouble OpenIntToDoubleHashMap$Iterator::value() const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_dff5885c2c873297]);
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
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self);

      static PyMethodDef t_OpenIntToDoubleHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap$Iterator, t_OpenIntToDoubleHashMap$Iterator, OpenIntToDoubleHashMap$Iterator);

      void t_OpenIntToDoubleHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap$Iterator), &PY_TYPE_DEF(OpenIntToDoubleHashMap$Iterator), module, "OpenIntToDoubleHashMap$Iterator", 0);
      }

      void t_OpenIntToDoubleHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "class_", make_descriptor(OpenIntToDoubleHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap$Iterator::wrap_Object(OpenIntToDoubleHashMap$Iterator(((t_OpenIntToDoubleHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.value());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3CoordinateHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3CoordinateHermiteInterpolator::class$ = NULL;
        jmethodID *SP3CoordinateHermiteInterpolator::mids$ = NULL;
        bool SP3CoordinateHermiteInterpolator::live$ = false;

        jclass SP3CoordinateHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3CoordinateHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d84bd519b18260a3] = env->getMethodID(cls, "<init>", "(IDZ)V");
            mids$[mid_interpolate_b09fb640eedbc33f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/files/sp3/SP3Coordinate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3CoordinateHermiteInterpolator::SP3CoordinateHermiteInterpolator(jint a0, jdouble a1, jboolean a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d84bd519b18260a3, a0, a1, a2)) {}
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
        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args);
        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data);
        static PyGetSetDef t_SP3CoordinateHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_SP3CoordinateHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3CoordinateHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3CoordinateHermiteInterpolator)[] = {
          { Py_tp_methods, t_SP3CoordinateHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_SP3CoordinateHermiteInterpolator_init_ },
          { Py_tp_getset, t_SP3CoordinateHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3CoordinateHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
          NULL
        };

        DEFINE_TYPE(SP3CoordinateHermiteInterpolator, t_SP3CoordinateHermiteInterpolator, SP3CoordinateHermiteInterpolator);
        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_Object(const SP3CoordinateHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3CoordinateHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3CoordinateHermiteInterpolator), &PY_TYPE_DEF(SP3CoordinateHermiteInterpolator), module, "SP3CoordinateHermiteInterpolator", 0);
        }

        void t_SP3CoordinateHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "class_", make_descriptor(SP3CoordinateHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "wrapfn_", make_descriptor(t_SP3CoordinateHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_SP3CoordinateHermiteInterpolator::wrap_Object(SP3CoordinateHermiteInterpolator(((t_SP3CoordinateHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jboolean a2;
          SP3CoordinateHermiteInterpolator object((jobject) NULL);

          if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
          {
            INT_CALL(object = SP3CoordinateHermiteInterpolator(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log10.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log10::class$ = NULL;
        jmethodID *Log10::mids$ = NULL;
        bool Log10::live$ = false;

        jclass Log10::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log10");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log10::Log10() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Log10::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log10::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args);

        static PyMethodDef t_Log10__methods_[] = {
          DECLARE_METHOD(t_Log10, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log10)[] = {
          { Py_tp_methods, t_Log10__methods_ },
          { Py_tp_init, (void *) t_Log10_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log10)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log10, t_Log10, Log10);

        void t_Log10::install(PyObject *module)
        {
          installType(&PY_TYPE(Log10), &PY_TYPE_DEF(Log10), module, "Log10", 0);
        }

        void t_Log10::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "class_", make_descriptor(Log10::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "wrapfn_", make_descriptor(t_Log10::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log10::initializeClass, 1)))
            return NULL;
          return t_Log10::wrap_Object(Log10(((t_Log10 *) arg)->object.this$));
        }
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log10::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds)
        {
          Log10 object((jobject) NULL);

          INT_CALL(object = Log10());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args)
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
#include "org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiEllipticBuilder::class$ = NULL;
          jmethodID *JacobiEllipticBuilder::mids$ = NULL;
          bool JacobiEllipticBuilder::live$ = false;

          jclass JacobiEllipticBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_49eaf78422c9dfbe] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_6c421db6f6807557] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_1c66b1627e260b52] = env->getStaticMethodID(cls, "build", "(D)Lorg/hipparchus/special/elliptic/jacobi/JacobiElliptic;");
              mids$[mid_build_28b33bf628deedce] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_49eaf78422c9dfbe], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_6c421db6f6807557], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic JacobiEllipticBuilder::build(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_1c66b1627e260b52], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_28b33bf628deedce], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_JacobiEllipticBuilder__methods_[] = {
            DECLARE_METHOD(t_JacobiEllipticBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, build, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiEllipticBuilder)[] = {
            { Py_tp_methods, t_JacobiEllipticBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiEllipticBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiEllipticBuilder, t_JacobiEllipticBuilder, JacobiEllipticBuilder);

          void t_JacobiEllipticBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiEllipticBuilder), &PY_TYPE_DEF(JacobiEllipticBuilder), module, "JacobiEllipticBuilder", 0);
          }

          void t_JacobiEllipticBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "class_", make_descriptor(JacobiEllipticBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "wrapfn_", make_descriptor(t_JacobiEllipticBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiEllipticBuilder::initializeClass, 1)))
              return NULL;
            return t_JacobiEllipticBuilder::wrap_Object(JacobiEllipticBuilder(((t_JacobiEllipticBuilder *) arg)->object.this$));
          }
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiEllipticBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_JacobiElliptic::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "build", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64::class$ = NULL;
      jmethodID *Binary64::mids$ = NULL;
      bool Binary64::live$ = false;
      Binary64 *Binary64::NAN$ = NULL;
      Binary64 *Binary64::NEGATIVE_INFINITY = NULL;
      Binary64 *Binary64::ONE = NULL;
      Binary64 *Binary64::PI = NULL;
      Binary64 *Binary64::POSITIVE_INFINITY = NULL;
      Binary64 *Binary64::ZERO = NULL;

      jclass Binary64::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_abs_b1b326d1f24984aa] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acos_b1b326d1f24984aa] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acosh_b1b326d1f24984aa] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_fd3ada9e22163ed2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_c7f342f12ffdb1b8] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_asin_b1b326d1f24984aa] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_asinh_b1b326d1f24984aa] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan_b1b326d1f24984aa] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan2_fd3ada9e22163ed2] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_atanh_b1b326d1f24984aa] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
          mids$[mid_cbrt_b1b326d1f24984aa] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_ceil_b1b326d1f24984aa] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_compareTo_b73e664205df6c87] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/Binary64;)I");
          mids$[mid_copySign_fd3ada9e22163ed2] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_copySign_c7f342f12ffdb1b8] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_cos_b1b326d1f24984aa] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_cosh_b1b326d1f24984aa] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_fd3ada9e22163ed2] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_c7f342f12ffdb1b8] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_b1b326d1f24984aa] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_expm1_b1b326d1f24984aa] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_floor_b1b326d1f24984aa] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_b1b326d1f24984aa] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_fd3ada9e22163ed2] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_b108b35ef48e27bd] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_d7c1eb031570e06c] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_75733fda778472a9] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Binary64;[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_27281f07f3573574] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_e0a5f1014b6897c7] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_5985060391f68c35] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_23279bc45168ec81] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_57f8f419cce19255] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_168fcd08f12a64b5] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_log_b1b326d1f24984aa] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log10_b1b326d1f24984aa] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log1p_b1b326d1f24984aa] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_fd3ada9e22163ed2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_c7f342f12ffdb1b8] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_b0d233d92cd310d6] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_negate_b1b326d1f24984aa] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_newInstance_c7f342f12ffdb1b8] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_fd3ada9e22163ed2] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_c7f342f12ffdb1b8] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_b0d233d92cd310d6] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_reciprocal_b1b326d1f24984aa] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_fd3ada9e22163ed2] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_c7f342f12ffdb1b8] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_rint_b1b326d1f24984aa] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_rootN_b0d233d92cd310d6] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_scalb_b0d233d92cd310d6] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");
          mids$[mid_sign_b1b326d1f24984aa] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sin_b1b326d1f24984aa] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_b1b326d1f24984aa] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_b1b326d1f24984aa] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_fd3ada9e22163ed2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_c7f342f12ffdb1b8] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_tan_b1b326d1f24984aa] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_tanh_b1b326d1f24984aa] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toDegrees_b1b326d1f24984aa] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toRadians_b1b326d1f24984aa] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_b1b326d1f24984aa] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Binary64;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NAN$ = new Binary64(env->getStaticObjectField(cls, "NAN", "Lorg/hipparchus/util/Binary64;"));
          NEGATIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ONE = new Binary64(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/Binary64;"));
          PI = new Binary64(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/util/Binary64;"));
          POSITIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ZERO = new Binary64(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/Binary64;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Binary64::Binary64(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      Binary64 Binary64::abs() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_abs_b1b326d1f24984aa]));
      }

      Binary64 Binary64::acos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acos_b1b326d1f24984aa]));
      }

      Binary64 Binary64::acosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acosh_b1b326d1f24984aa]));
      }

      Binary64 Binary64::add(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::add(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_c7f342f12ffdb1b8], a0));
      }

      Binary64 Binary64::asin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asin_b1b326d1f24984aa]));
      }

      Binary64 Binary64::asinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asinh_b1b326d1f24984aa]));
      }

      Binary64 Binary64::atan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan_b1b326d1f24984aa]));
      }

      Binary64 Binary64::atan2(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan2_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::atanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atanh_b1b326d1f24984aa]));
      }

      jbyte Binary64::byteValue() const
      {
        return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
      }

      Binary64 Binary64::cbrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cbrt_b1b326d1f24984aa]));
      }

      Binary64 Binary64::ceil() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ceil_b1b326d1f24984aa]));
      }

      jint Binary64::compareTo(const Binary64 & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_b73e664205df6c87], a0.this$);
      }

      Binary64 Binary64::copySign(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::copySign(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_c7f342f12ffdb1b8], a0));
      }

      Binary64 Binary64::cos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cos_b1b326d1f24984aa]));
      }

      Binary64 Binary64::cosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cosh_b1b326d1f24984aa]));
      }

      Binary64 Binary64::divide(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::divide(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_c7f342f12ffdb1b8], a0));
      }

      jdouble Binary64::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
      }

      jboolean Binary64::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      Binary64 Binary64::exp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_exp_b1b326d1f24984aa]));
      }

      Binary64 Binary64::expm1() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_expm1_b1b326d1f24984aa]));
      }

      jfloat Binary64::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
      }

      Binary64 Binary64::floor() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_floor_b1b326d1f24984aa]));
      }

      ::org::hipparchus::Field Binary64::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      Binary64 Binary64::getPi() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_getPi_b1b326d1f24984aa]));
      }

      jdouble Binary64::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      jint Binary64::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      Binary64 Binary64::hypot(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_hypot_fd3ada9e22163ed2], a0.this$));
      }

      jint Binary64::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
      }

      jboolean Binary64::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      jboolean Binary64::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
      }

      jboolean Binary64::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_b108b35ef48e27bd]);
      }

      Binary64 Binary64::linearCombination(const JArray< jdouble > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_d7c1eb031570e06c], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const JArray< Binary64 > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_75733fda778472a9], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_27281f07f3573574], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_e0a5f1014b6897c7], a0, a1.this$, a2, a3.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_5985060391f68c35], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_23279bc45168ec81], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5, const Binary64 & a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_57f8f419cce19255], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5, jdouble a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_168fcd08f12a64b5], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Binary64 Binary64::log() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log_b1b326d1f24984aa]));
      }

      Binary64 Binary64::log10() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log10_b1b326d1f24984aa]));
      }

      Binary64 Binary64::log1p() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log1p_b1b326d1f24984aa]));
      }

      jlong Binary64::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
      }

      Binary64 Binary64::multiply(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::multiply(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_c7f342f12ffdb1b8], a0));
      }

      Binary64 Binary64::multiply(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_b0d233d92cd310d6], a0));
      }

      Binary64 Binary64::negate() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_negate_b1b326d1f24984aa]));
      }

      Binary64 Binary64::newInstance(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_newInstance_c7f342f12ffdb1b8], a0));
      }

      Binary64 Binary64::pow(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::pow(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_c7f342f12ffdb1b8], a0));
      }

      Binary64 Binary64::pow(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_b0d233d92cd310d6], a0));
      }

      Binary64 Binary64::reciprocal() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_reciprocal_b1b326d1f24984aa]));
      }

      Binary64 Binary64::remainder(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::remainder(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_c7f342f12ffdb1b8], a0));
      }

      Binary64 Binary64::rint() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rint_b1b326d1f24984aa]));
      }

      Binary64 Binary64::rootN(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rootN_b0d233d92cd310d6], a0));
      }

      Binary64 Binary64::scalb(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_scalb_b0d233d92cd310d6], a0));
      }

      jshort Binary64::shortValue() const
      {
        return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
      }

      Binary64 Binary64::sign() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sign_b1b326d1f24984aa]));
      }

      Binary64 Binary64::sin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sin_b1b326d1f24984aa]));
      }

      ::org::hipparchus::util::FieldSinCos Binary64::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
      }

      Binary64 Binary64::sinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sinh_b1b326d1f24984aa]));
      }

      ::org::hipparchus::util::FieldSinhCosh Binary64::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
      }

      Binary64 Binary64::sqrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sqrt_b1b326d1f24984aa]));
      }

      Binary64 Binary64::subtract(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_fd3ada9e22163ed2], a0.this$));
      }

      Binary64 Binary64::subtract(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_c7f342f12ffdb1b8], a0));
      }

      Binary64 Binary64::tan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tan_b1b326d1f24984aa]));
      }

      Binary64 Binary64::tanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tanh_b1b326d1f24984aa]));
      }

      Binary64 Binary64::toDegrees() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toDegrees_b1b326d1f24984aa]));
      }

      Binary64 Binary64::toRadians() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toRadians_b1b326d1f24984aa]));
      }

      ::java::lang::String Binary64::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      Binary64 Binary64::ulp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ulp_b1b326d1f24984aa]));
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
      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Binary64_abs(t_Binary64 *self);
      static PyObject *t_Binary64_acos(t_Binary64 *self);
      static PyObject *t_Binary64_acosh(t_Binary64 *self);
      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_asin(t_Binary64 *self);
      static PyObject *t_Binary64_asinh(t_Binary64 *self);
      static PyObject *t_Binary64_atan(t_Binary64 *self);
      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_atanh(t_Binary64 *self);
      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cbrt(t_Binary64 *self);
      static PyObject *t_Binary64_ceil(t_Binary64 *self);
      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cos(t_Binary64 *self);
      static PyObject *t_Binary64_cosh(t_Binary64 *self);
      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_exp(t_Binary64 *self);
      static PyObject *t_Binary64_expm1(t_Binary64 *self);
      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_floor(t_Binary64 *self);
      static PyObject *t_Binary64_getField(t_Binary64 *self);
      static PyObject *t_Binary64_getPi(t_Binary64 *self);
      static PyObject *t_Binary64_getReal(t_Binary64 *self);
      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_isInfinite(t_Binary64 *self);
      static PyObject *t_Binary64_isNaN(t_Binary64 *self);
      static PyObject *t_Binary64_isZero(t_Binary64 *self);
      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_log(t_Binary64 *self);
      static PyObject *t_Binary64_log10(t_Binary64 *self);
      static PyObject *t_Binary64_log1p(t_Binary64 *self);
      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_negate(t_Binary64 *self);
      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_reciprocal(t_Binary64 *self);
      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_rint(t_Binary64 *self);
      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_sign(t_Binary64 *self);
      static PyObject *t_Binary64_sin(t_Binary64 *self);
      static PyObject *t_Binary64_sinCos(t_Binary64 *self);
      static PyObject *t_Binary64_sinh(t_Binary64 *self);
      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self);
      static PyObject *t_Binary64_sqrt(t_Binary64 *self);
      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_tan(t_Binary64 *self);
      static PyObject *t_Binary64_tanh(t_Binary64 *self);
      static PyObject *t_Binary64_toDegrees(t_Binary64 *self);
      static PyObject *t_Binary64_toRadians(t_Binary64 *self);
      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_ulp(t_Binary64 *self);
      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data);
      static PyGetSetDef t_Binary64__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64, field),
        DECLARE_GET_FIELD(t_Binary64, infinite),
        DECLARE_GET_FIELD(t_Binary64, naN),
        DECLARE_GET_FIELD(t_Binary64, pi),
        DECLARE_GET_FIELD(t_Binary64, real),
        DECLARE_GET_FIELD(t_Binary64, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64__methods_[] = {
        DECLARE_METHOD(t_Binary64, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, abs, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, add, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, asin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan2, METH_O),
        DECLARE_METHOD(t_Binary64, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, byteValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, compareTo, METH_O),
        DECLARE_METHOD(t_Binary64, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, divide, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, exp, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, floor, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getField, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, hypot, METH_O),
        DECLARE_METHOD(t_Binary64, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, log, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log10, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, negate, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, newInstance, METH_O),
        DECLARE_METHOD(t_Binary64, pow, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, rint, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, rootN, METH_O),
        DECLARE_METHOD(t_Binary64, scalb, METH_O),
        DECLARE_METHOD(t_Binary64, shortValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, sign, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, tan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toString, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64)[] = {
        { Py_tp_methods, t_Binary64__methods_ },
        { Py_tp_init, (void *) t_Binary64_init_ },
        { Py_tp_getset, t_Binary64__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Binary64, t_Binary64, Binary64);

      void t_Binary64::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64), &PY_TYPE_DEF(Binary64), module, "Binary64", 0);
      }

      void t_Binary64::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "class_", make_descriptor(Binary64::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "wrapfn_", make_descriptor(t_Binary64::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "boxfn_", make_descriptor(boxObject));
        env->getClass(Binary64::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NAN", make_descriptor(t_Binary64::wrap_Object(*Binary64::NAN$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NEGATIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::NEGATIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ONE", make_descriptor(t_Binary64::wrap_Object(*Binary64::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "PI", make_descriptor(t_Binary64::wrap_Object(*Binary64::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "POSITIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::POSITIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ZERO", make_descriptor(t_Binary64::wrap_Object(*Binary64::ZERO)));
      }

      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64::initializeClass, 1)))
          return NULL;
        return t_Binary64::wrap_Object(Binary64(((t_Binary64 *) arg)->object.this$));
      }
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        Binary64 object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = Binary64(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Binary64_abs(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Binary64_asin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_asinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Binary64_atanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args)
      {
        jbyte result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.byteValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "byteValue", args, 2);
      }

      static PyObject *t_Binary64_cbrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_ceil(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Binary64_cos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_cosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64_exp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_expm1(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Binary64_floor(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getField(t_Binary64 *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_getPi(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getReal(t_Binary64 *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Binary64_isInfinite(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isNaN(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isZero(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            JArray< Binary64 > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 a6((jobject) NULL);
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            jdouble a6;
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Binary64_log(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log10(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log1p(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Binary64_negate(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg)
      {
        jdouble a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Binary64_reciprocal(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Binary64_rint(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args)
      {
        jshort result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.shortValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "shortValue", args, 2);
      }

      static PyObject *t_Binary64_sign(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinCos(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sqrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Binary64_tan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_tanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toDegrees(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toRadians(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Binary64_ulp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data)
      {
        Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariatePeriodicInterpolator::class$ = NULL;
        jmethodID *UnivariatePeriodicInterpolator::mids$ = NULL;
        bool UnivariatePeriodicInterpolator::live$ = false;
        jint UnivariatePeriodicInterpolator::DEFAULT_EXTEND = (jint) 0;

        jclass UnivariatePeriodicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6d5e1af35a58a08c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;D)V");
            mids$[mid_init$_39bac383100c02fc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;DI)V");
            mids$[mid_interpolate_26024a819137b7d3] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EXTEND = env->getStaticIntField(cls, "DEFAULT_EXTEND");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d5e1af35a58a08c, a0.this$, a1)) {}

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39bac383100c02fc, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariatePeriodicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_26024a819137b7d3], a0.this$, a1.this$));
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
        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariatePeriodicInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePeriodicInterpolator)[] = {
          { Py_tp_methods, t_UnivariatePeriodicInterpolator__methods_ },
          { Py_tp_init, (void *) t_UnivariatePeriodicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePeriodicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePeriodicInterpolator, t_UnivariatePeriodicInterpolator, UnivariatePeriodicInterpolator);

        void t_UnivariatePeriodicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePeriodicInterpolator), &PY_TYPE_DEF(UnivariatePeriodicInterpolator), module, "UnivariatePeriodicInterpolator", 0);
        }

        void t_UnivariatePeriodicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "class_", make_descriptor(UnivariatePeriodicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "wrapfn_", make_descriptor(t_UnivariatePeriodicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariatePeriodicInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "DEFAULT_EXTEND", make_descriptor(UnivariatePeriodicInterpolator::DEFAULT_EXTEND));
        }

        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariatePeriodicInterpolator::wrap_Object(UnivariatePeriodicInterpolator(((t_UnivariatePeriodicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1, a2));
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

        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
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
#include "org/hipparchus/optim/nonlinear/scalar/LineSearch.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LineSearch::class$ = NULL;
          jmethodID *LineSearch::mids$ = NULL;
          bool LineSearch::live$ = false;

          jclass LineSearch::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LineSearch");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4260ebfc000f3b8b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;DDD)V");
              mids$[mid_search_4e3c679d97d98a62] = env->getMethodID(cls, "search", "([D[D)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LineSearch::LineSearch(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4260ebfc000f3b8b, a0.this$, a1, a2, a3)) {}

          ::org::hipparchus::optim::univariate::UnivariatePointValuePair LineSearch::search(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_search_4e3c679d97d98a62], a0.this$, a1.this$));
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
        namespace scalar {
          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args);

          static PyMethodDef t_LineSearch__methods_[] = {
            DECLARE_METHOD(t_LineSearch, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, search, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LineSearch)[] = {
            { Py_tp_methods, t_LineSearch__methods_ },
            { Py_tp_init, (void *) t_LineSearch_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LineSearch)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LineSearch, t_LineSearch, LineSearch);

          void t_LineSearch::install(PyObject *module)
          {
            installType(&PY_TYPE(LineSearch), &PY_TYPE_DEF(LineSearch), module, "LineSearch", 0);
          }

          void t_LineSearch::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "class_", make_descriptor(LineSearch::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "wrapfn_", make_descriptor(t_LineSearch::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LineSearch::initializeClass, 1)))
              return NULL;
            return t_LineSearch::wrap_Object(LineSearch(((t_LineSearch *) arg)->object.this$));
          }
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LineSearch::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            LineSearch object((jobject) NULL);

            if (!parseArgs(args, "KDDD", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = LineSearch(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.search(a0, a1));
              return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "search", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *InertiaAxis::class$ = NULL;
      jmethodID *InertiaAxis::mids$ = NULL;
      bool InertiaAxis::live$ = false;

      jclass InertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/InertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getA_d52645e0d4c07563] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_negate_88f98d66bcc1d5e4] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/InertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D InertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA_d52645e0d4c07563]));
      }

      jdouble InertiaAxis::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
      }

      InertiaAxis InertiaAxis::negate() const
      {
        return InertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_88f98d66bcc1d5e4]));
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
      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data);
      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data);
      static PyGetSetDef t_InertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_InertiaAxis, a),
        DECLARE_GET_FIELD(t_InertiaAxis, i),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InertiaAxis__methods_[] = {
        DECLARE_METHOD(t_InertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InertiaAxis)[] = {
        { Py_tp_methods, t_InertiaAxis__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_InertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InertiaAxis, t_InertiaAxis, InertiaAxis);

      void t_InertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(InertiaAxis), &PY_TYPE_DEF(InertiaAxis), module, "InertiaAxis", 0);
      }

      void t_InertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "class_", make_descriptor(InertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "wrapfn_", make_descriptor(t_InertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InertiaAxis::initializeClass, 1)))
          return NULL;
        return t_InertiaAxis::wrap_Object(InertiaAxis(((t_InertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self)
      {
        InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NullPointerException::class$ = NULL;
    jmethodID *NullPointerException::mids$ = NULL;
    bool NullPointerException::live$ = false;

    jclass NullPointerException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NullPointerException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NullPointerException::NullPointerException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    NullPointerException::NullPointerException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NullPointerException__methods_[] = {
      DECLARE_METHOD(t_NullPointerException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NullPointerException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NullPointerException)[] = {
      { Py_tp_methods, t_NullPointerException__methods_ },
      { Py_tp_init, (void *) t_NullPointerException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NullPointerException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(NullPointerException, t_NullPointerException, NullPointerException);

    void t_NullPointerException::install(PyObject *module)
    {
      installType(&PY_TYPE(NullPointerException), &PY_TYPE_DEF(NullPointerException), module, "NullPointerException", 0);
    }

    void t_NullPointerException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "class_", make_descriptor(NullPointerException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "wrapfn_", make_descriptor(t_NullPointerException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NullPointerException::initializeClass, 1)))
        return NULL;
      return t_NullPointerException::wrap_Object(NullPointerException(((t_NullPointerException *) arg)->object.this$));
    }
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NullPointerException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NullPointerException object((jobject) NULL);

          INT_CALL(object = NullPointerException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NullPointerException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NullPointerException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericModel::class$ = NULL;
          jmethodID *PythonIonosphericModel::mids$ = NULL;
          bool PythonIonosphericModel::live$ = false;

          jclass PythonIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_f040a403cffae196] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_bea489d08473aa2e] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_28325ab4dabb069a] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericModel::PythonIonosphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonIonosphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonIonosphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonIonosphericModel::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self);
          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data);
          static PyGetSetDef t_PythonIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericModel)[] = {
            { Py_tp_methods, t_PythonIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericModel_init_ },
            { Py_tp_getset, t_PythonIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericModel, t_PythonIonosphericModel, PythonIonosphericModel);

          void t_PythonIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericModel), &PY_TYPE_DEF(PythonIonosphericModel), module, "PythonIonosphericModel", 1);
          }

          void t_PythonIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "class_", make_descriptor(PythonIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "wrapfn_", make_descriptor(t_PythonIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonIonosphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIonosphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_pathDelay3 },
              { "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D", (void *) t_PythonIonosphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericModel::wrap_Object(PythonIonosphericModel(((t_PythonIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericModel object((jobject) NULL);

            INT_CALL(object = PythonIonosphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jdouble>(a3).wrap();
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data)
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
#include "org/orekit/files/general/OrekitEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile::class$ = NULL;
        jmethodID *OrekitEphemerisFile::mids$ = NULL;
        bool OrekitEphemerisFile::live$ = false;

        jclass OrekitEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_2da7f9c5f2e66e29] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris;");
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile::OrekitEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris OrekitEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_2da7f9c5f2e66e29], a0.this$));
        }

        ::java::util::Map OrekitEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
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
        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self);
        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile, t_OrekitEphemerisFile, OrekitEphemerisFile);

        void t_OrekitEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile), &PY_TYPE_DEF(OrekitEphemerisFile), module, "OrekitEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitSatelliteEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment)));
        }

        void t_OrekitEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "class_", make_descriptor(OrekitEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "wrapfn_", make_descriptor(t_OrekitEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile::wrap_Object(OrekitEphemerisFile(((t_OrekitEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris));
        }

        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Sum::class$ = NULL;
          jmethodID *Sum::mids$ = NULL;
          bool Sum::live$ = false;

          jclass Sum::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Sum");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_6f8404103d85250f] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Sum;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_bd1d7d03386ddc9e] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Sum;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_2634be61548fc62b] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sum::Sum() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void Sum::aggregate(const Sum & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_6f8404103d85250f], a0.this$);
          }

          void Sum::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Sum Sum::copy() const
          {
            return Sum(env->callObjectMethod(this$, mids$[mid_copy_bd1d7d03386ddc9e]));
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_2634be61548fc62b], a0.this$, a1.this$, a2, a3);
          }

          jlong Sum::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Sum::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Sum::increment(jdouble a0) const
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
        namespace summary {
          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg);
          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_get__n(t_Sum *self, void *data);
          static PyObject *t_Sum_get__result(t_Sum *self, void *data);
          static PyGetSetDef t_Sum__fields_[] = {
            DECLARE_GET_FIELD(t_Sum, n),
            DECLARE_GET_FIELD(t_Sum, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sum__methods_[] = {
            DECLARE_METHOD(t_Sum, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, aggregate, METH_O),
            DECLARE_METHOD(t_Sum, clear, METH_VARARGS),
            DECLARE_METHOD(t_Sum, copy, METH_VARARGS),
            DECLARE_METHOD(t_Sum, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getN, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Sum, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sum)[] = {
            { Py_tp_methods, t_Sum__methods_ },
            { Py_tp_init, (void *) t_Sum_init_ },
            { Py_tp_getset, t_Sum__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sum)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Sum, t_Sum, Sum);

          void t_Sum::install(PyObject *module)
          {
            installType(&PY_TYPE(Sum), &PY_TYPE_DEF(Sum), module, "Sum", 0);
          }

          void t_Sum::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "class_", make_descriptor(Sum::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "wrapfn_", make_descriptor(t_Sum::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sum::initializeClass, 1)))
              return NULL;
            return t_Sum::wrap_Object(Sum(((t_Sum *) arg)->object.this$));
          }
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sum::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds)
          {
            Sum object((jobject) NULL);

            INT_CALL(object = Sum());
            self->object = object;

            return 0;
          }

          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg)
          {
            Sum a0((jobject) NULL);

            if (!parseArg(arg, "k", Sum::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args)
          {
            Sum result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Sum::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
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
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Sum_get__n(t_Sum *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Sum_get__result(t_Sum *self, void *data)
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
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractODEStateInterpolator::mids$ = NULL;
        bool AbstractODEStateInterpolator::live$ = false;

        jclass AbstractODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_72cfc96c3e58d15e] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_72cfc96c3e58d15e] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_72cfc96c3e58d15e] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_f01efdb3ab1bad7f] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_72cfc96c3e58d15e] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_7be5f5a0bf70adb5] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");
            mids$[mid_getMapper_b352b1a7f73df8de] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_43408383ccb9423d] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/EquationsMapper;DDDD)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_create_512799c2e2de4970] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_72cfc96c3e58d15e]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_72cfc96c3e58d15e]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_72cfc96c3e58d15e]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_f01efdb3ab1bad7f], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_72cfc96c3e58d15e]));
        }

        jboolean AbstractODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd]);
        }

        jboolean AbstractODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        jboolean AbstractODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd]);
        }

        AbstractODEStateInterpolator AbstractODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return AbstractODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_7be5f5a0bf70adb5], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEStateInterpolator, t_AbstractODEStateInterpolator, AbstractODEStateInterpolator);

        void t_AbstractODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEStateInterpolator), &PY_TYPE_DEF(AbstractODEStateInterpolator), module, "AbstractODEStateInterpolator", 0);
        }

        void t_AbstractODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "class_", make_descriptor(AbstractODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractODEStateInterpolator::wrap_Object(AbstractODEStateInterpolator(((t_AbstractODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          AbstractODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractODEStateInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHIJjsPolynomials::class$ = NULL;
            jmethodID *FieldGHIJjsPolynomials::mids$ = NULL;
            bool FieldGHIJjsPolynomials::live$ = false;

            jclass FieldGHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f70e12a452183042] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGjs_d0525157bc3abb83] = env->getMethodID(cls, "getGjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHjs_d0525157bc3abb83] = env->getMethodID(cls, "getHjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getIjs_d0525157bc3abb83] = env->getMethodID(cls, "getIjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getJjs_d0525157bc3abb83] = env->getMethodID(cls, "getJjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdAlpha_d0525157bc3abb83] = env->getMethodID(cls, "getdGjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdBeta_d0525157bc3abb83] = env->getMethodID(cls, "getdGjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdh_d0525157bc3abb83] = env->getMethodID(cls, "getdGjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdk_d0525157bc3abb83] = env->getMethodID(cls, "getdGjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdAlpha_d0525157bc3abb83] = env->getMethodID(cls, "getdHjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdBeta_d0525157bc3abb83] = env->getMethodID(cls, "getdHjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdh_d0525157bc3abb83] = env->getMethodID(cls, "getdHjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdk_d0525157bc3abb83] = env->getMethodID(cls, "getdHjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdAlpha_d0525157bc3abb83] = env->getMethodID(cls, "getdIjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdBeta_d0525157bc3abb83] = env->getMethodID(cls, "getdIjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdh_d0525157bc3abb83] = env->getMethodID(cls, "getdIjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdk_d0525157bc3abb83] = env->getMethodID(cls, "getdIjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdAlpha_d0525157bc3abb83] = env->getMethodID(cls, "getdJjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdBeta_d0525157bc3abb83] = env->getMethodID(cls, "getdJjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdh_d0525157bc3abb83] = env->getMethodID(cls, "getdJjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdk_d0525157bc3abb83] = env->getMethodID(cls, "getdJjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHIJjsPolynomials::FieldGHIJjsPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f70e12a452183042, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGjs_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHjs_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIjs_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getJjs_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdAlpha_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdBeta_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdh_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdk_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdAlpha_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdBeta_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdh_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdk_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdAlpha_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdBeta_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdh_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdk_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdAlpha_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdBeta_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdh_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdk_d0525157bc3abb83], a0, a1));
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
            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHIJjsPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHIJjsPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHIJjsPolynomials)[] = {
              { Py_tp_methods, t_FieldGHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHIJjsPolynomials_init_ },
              { Py_tp_getset, t_FieldGHIJjsPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHIJjsPolynomials, t_FieldGHIJjsPolynomials, FieldGHIJjsPolynomials);
            PyObject *t_FieldGHIJjsPolynomials::wrap_Object(const FieldGHIJjsPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHIJjsPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHIJjsPolynomials), &PY_TYPE_DEF(FieldGHIJjsPolynomials), module, "FieldGHIJjsPolynomials", 0);
            }

            void t_FieldGHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "class_", make_descriptor(FieldGHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "wrapfn_", make_descriptor(t_FieldGHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHIJjsPolynomials::wrap_Object(FieldGHIJjsPolynomials(((t_FieldGHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzerSelector::class$ = NULL;
            jmethodID *LexicalAnalyzerSelector::mids$ = NULL;
            bool LexicalAnalyzerSelector::live$ = false;

            jclass LexicalAnalyzerSelector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_select_7d53572d5e02d65f] = env->getStaticMethodID(cls, "select", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/utils/lexical/LexicalAnalyzer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer LexicalAnalyzerSelector::select(const ::org::orekit::data::DataSource & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer(env->callStaticObjectMethod(cls, mids$[mid_select_7d53572d5e02d65f], a0.this$));
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
            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzerSelector__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzerSelector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, select, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzerSelector)[] = {
              { Py_tp_methods, t_LexicalAnalyzerSelector__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzerSelector)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzerSelector, t_LexicalAnalyzerSelector, LexicalAnalyzerSelector);

            void t_LexicalAnalyzerSelector::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzerSelector), &PY_TYPE_DEF(LexicalAnalyzerSelector), module, "LexicalAnalyzerSelector", 0);
            }

            void t_LexicalAnalyzerSelector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "class_", make_descriptor(LexicalAnalyzerSelector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "wrapfn_", make_descriptor(t_LexicalAnalyzerSelector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzerSelector::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzerSelector::wrap_Object(LexicalAnalyzerSelector(((t_LexicalAnalyzerSelector *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzerSelector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzerSelector::select(a0));
                return ::org::orekit::files::ccsds::utils::lexical::t_LexicalAnalyzer::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "select", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_IGNITION = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_ee07b639d24a1961] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;)Z");
                  mids$[mid_valueOf_4c6f65db38c8333d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");
                  mids$[mid_values_b48e9fca7e1455da] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_1", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_2", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_3", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_EPOCH_IGNITION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_IGNITION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_ee07b639d24a1961], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4c6f65db38c8333d], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b48e9fca7e1455da]));
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
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_IGNITION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_IGNITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader$ITRFVersionConfiguration::class$ = NULL;
      jmethodID *ITRFVersionLoader$ITRFVersionConfiguration::mids$ = NULL;
      bool ITRFVersionLoader$ITRFVersionConfiguration::live$ = false;

      jclass ITRFVersionLoader$ITRFVersionConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_48fe94404927ad1e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/frames/ITRFVersion;II)V");
          mids$[mid_appliesTo_7edad2c2f64f4d68] = env->getMethodID(cls, "appliesTo", "(Ljava/lang/String;)Z");
          mids$[mid_getVersion_8a73c81b6e5084ce] = env->getMethodID(cls, "getVersion", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_isValid_b6e9be1df30aebaf] = env->getMethodID(cls, "isValid", "(I)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader$ITRFVersionConfiguration::ITRFVersionLoader$ITRFVersionConfiguration(const ::java::lang::String & a0, const ::org::orekit::frames::ITRFVersion & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48fe94404927ad1e, a0.this$, a1.this$, a2, a3)) {}

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::appliesTo(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_appliesTo_7edad2c2f64f4d68], a0.this$);
      }

      ::org::orekit::frames::ITRFVersion ITRFVersionLoader$ITRFVersionConfiguration::getVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getVersion_8a73c81b6e5084ce]));
      }

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::isValid(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isValid_b6e9be1df30aebaf], a0);
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
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data);
      static PyGetSetDef t_ITRFVersionLoader$ITRFVersionConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersionLoader$ITRFVersionConfiguration, version),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersionLoader$ITRFVersionConfiguration__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, appliesTo, METH_O),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, getVersion, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, isValid, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        { Py_tp_methods, t_ITRFVersionLoader$ITRFVersionConfiguration__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader$ITRFVersionConfiguration_init_ },
        { Py_tp_getset, t_ITRFVersionLoader$ITRFVersionConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader$ITRFVersionConfiguration, t_ITRFVersionLoader$ITRFVersionConfiguration, ITRFVersionLoader$ITRFVersionConfiguration);

      void t_ITRFVersionLoader$ITRFVersionConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), &PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration), module, "ITRFVersionLoader$ITRFVersionConfiguration", 0);
      }

      void t_ITRFVersionLoader$ITRFVersionConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "class_", make_descriptor(ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "wrapfn_", make_descriptor(t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(ITRFVersionLoader$ITRFVersionConfiguration(((t_ITRFVersionLoader$ITRFVersionConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
        PyTypeObject **p1;
        jint a2;
        jint a3;
        ITRFVersionLoader$ITRFVersionConfiguration object((jobject) NULL);

        if (!parseArgs(args, "sKII", ::org::orekit::frames::ITRFVersion::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2, &a3))
        {
          INT_CALL(object = ITRFVersionLoader$ITRFVersionConfiguration(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.appliesTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "appliesTo", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.isValid(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isValid", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative::class$ = NULL;
        jmethodID *FieldUnivariateDerivative::mids$ = NULL;
        bool FieldUnivariateDerivative::live$ = false;

        jclass FieldUnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_93058f0552012043] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_46366c1e17d1d442] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative::FieldUnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_93058f0552012043], a0));
        }

        jint FieldUnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_46366c1e17d1d442], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240]));
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
        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args);
        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data);
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative, t_FieldUnivariateDerivative, FieldUnivariateDerivative);
        PyObject *t_FieldUnivariateDerivative::wrap_Object(const FieldUnivariateDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative), &PY_TYPE_DEF(FieldUnivariateDerivative), module, "FieldUnivariateDerivative", 0);
        }

        void t_FieldUnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "class_", make_descriptor(FieldUnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative::wrap_Object(FieldUnivariateDerivative(((t_FieldUnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          FieldUnivariateDerivative object((jobject) NULL);

          INT_CALL(object = FieldUnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
