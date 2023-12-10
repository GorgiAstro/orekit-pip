#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerBounds::class$ = NULL;
        jmethodID *StepNormalizerBounds::mids$ = NULL;
        bool StepNormalizerBounds::live$ = false;
        StepNormalizerBounds *StepNormalizerBounds::BOTH = NULL;
        StepNormalizerBounds *StepNormalizerBounds::FIRST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::LAST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::NEITHER = NULL;

        jclass StepNormalizerBounds::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerBounds");

            mids$ = new jmethodID[max_mid];
            mids$[mid_firstIncluded_b108b35ef48e27bd] = env->getMethodID(cls, "firstIncluded", "()Z");
            mids$[mid_lastIncluded_b108b35ef48e27bd] = env->getMethodID(cls, "lastIncluded", "()Z");
            mids$[mid_valueOf_bfccb03065d36240] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");
            mids$[mid_values_72e4fffeed635b5c] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new StepNormalizerBounds(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            FIRST = new StepNormalizerBounds(env->getStaticObjectField(cls, "FIRST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            LAST = new StepNormalizerBounds(env->getStaticObjectField(cls, "LAST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            NEITHER = new StepNormalizerBounds(env->getStaticObjectField(cls, "NEITHER", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean StepNormalizerBounds::firstIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_firstIncluded_b108b35ef48e27bd]);
        }

        jboolean StepNormalizerBounds::lastIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_lastIncluded_b108b35ef48e27bd]);
        }

        StepNormalizerBounds StepNormalizerBounds::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerBounds(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bfccb03065d36240], a0.this$));
        }

        JArray< StepNormalizerBounds > StepNormalizerBounds::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerBounds >(env->callStaticObjectMethod(cls, mids$[mid_values_72e4fffeed635b5c]));
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
        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args);
        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data);
        static PyGetSetDef t_StepNormalizerBounds__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerBounds, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerBounds__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerBounds, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, firstIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, lastIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerBounds)[] = {
          { Py_tp_methods, t_StepNormalizerBounds__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerBounds__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerBounds)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerBounds, t_StepNormalizerBounds, StepNormalizerBounds);
        PyObject *t_StepNormalizerBounds::wrap_Object(const StepNormalizerBounds& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerBounds::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerBounds::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerBounds), &PY_TYPE_DEF(StepNormalizerBounds), module, "StepNormalizerBounds", 0);
        }

        void t_StepNormalizerBounds::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "class_", make_descriptor(StepNormalizerBounds::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "wrapfn_", make_descriptor(t_StepNormalizerBounds::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerBounds::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "BOTH", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "FIRST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::FIRST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "LAST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::LAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "NEITHER", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::NEITHER)));
        }

        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerBounds::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerBounds::wrap_Object(StepNormalizerBounds(((t_StepNormalizerBounds *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerBounds::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.firstIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.lastIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerBounds result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::valueOf(a0));
            return t_StepNormalizerBounds::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type)
        {
          JArray< StepNormalizerBounds > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerBounds::wrap_jobject);
        }
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricFieldGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricFieldGaussIntegrator::mids$ = NULL;
          bool SymmetricFieldGaussIntegrator::live$ = false;

          jclass SymmetricFieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3fca46bb93fd3e69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_cbc98e7d0c0477db] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_integrate_d4d4f68a6723feee] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3fca46bb93fd3e69, a0.this$)) {}

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cbc98e7d0c0477db, a0.this$, a1.this$)) {}

          ::org::hipparchus::CalculusFieldElement SymmetricFieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_d4d4f68a6723feee], a0.this$));
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
          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_SymmetricFieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_SymmetricFieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SymmetricFieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricFieldGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricFieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricFieldGaussIntegrator_init_ },
            { Py_tp_getset, t_SymmetricFieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricFieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricFieldGaussIntegrator, t_SymmetricFieldGaussIntegrator, SymmetricFieldGaussIntegrator);
          PyObject *t_SymmetricFieldGaussIntegrator::wrap_Object(const SymmetricFieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SymmetricFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SymmetricFieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricFieldGaussIntegrator), &PY_TYPE_DEF(SymmetricFieldGaussIntegrator), module, "SymmetricFieldGaussIntegrator", 0);
          }

          void t_SymmetricFieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "class_", make_descriptor(SymmetricFieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricFieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricFieldGaussIntegrator::wrap_Object(SymmetricFieldGaussIntegrator(((t_SymmetricFieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SymmetricFieldGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatelliteRangeModifier::class$ = NULL;
          jmethodID *ShapiroInterSatelliteRangeModifier::mids$ = NULL;
          bool ShapiroInterSatelliteRangeModifier::live$ = false;

          jclass ShapiroInterSatelliteRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatelliteRangeModifier::ShapiroInterSatelliteRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::java::util::List ShapiroInterSatelliteRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void ShapiroInterSatelliteRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatelliteRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatelliteRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatelliteRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatelliteRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatelliteRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatelliteRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatelliteRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatelliteRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatelliteRangeModifier, t_ShapiroInterSatelliteRangeModifier, ShapiroInterSatelliteRangeModifier);

          void t_ShapiroInterSatelliteRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatelliteRangeModifier), &PY_TYPE_DEF(ShapiroInterSatelliteRangeModifier), module, "ShapiroInterSatelliteRangeModifier", 0);
          }

          void t_ShapiroInterSatelliteRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "class_", make_descriptor(ShapiroInterSatelliteRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatelliteRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatelliteRangeModifier::wrap_Object(ShapiroInterSatelliteRangeModifier(((t_ShapiroInterSatelliteRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatelliteRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatelliteRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data)
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
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolver::class$ = NULL;
      jmethodID *RiccatiEquationSolver::mids$ = NULL;
      bool RiccatiEquationSolver::live$ = false;

      jclass RiccatiEquationSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getK_688b496048ff947b] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_688b496048ff947b] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getP() const
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
      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data);
      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolver__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolver__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolver)[] = {
        { Py_tp_methods, t_RiccatiEquationSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RiccatiEquationSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolver, t_RiccatiEquationSolver, RiccatiEquationSolver);

      void t_RiccatiEquationSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolver), &PY_TYPE_DEF(RiccatiEquationSolver), module, "RiccatiEquationSolver", 0);
      }

      void t_RiccatiEquationSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "class_", make_descriptor(RiccatiEquationSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "wrapfn_", make_descriptor(t_RiccatiEquationSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolver::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolver::wrap_Object(RiccatiEquationSolver(((t_RiccatiEquationSolver *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data)
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimator::class$ = NULL;
        jmethodID *UnscentedKalmanEstimator::mids$ = NULL;
        bool UnscentedKalmanEstimator::live$ = false;

        jclass UnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_ea9d4e2e9f4a999e] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_cdedbecd168387ff] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_3b3c487cb3322691] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e05aaef10b06b09b] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_ea9d4e2e9f4a999e], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_cdedbecd168387ff], a0.this$));
        }

        void UnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_3b3c487cb3322691], a0.this$);
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
        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_UnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_UnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimator, t_UnscentedKalmanEstimator, UnscentedKalmanEstimator);

        void t_UnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimator), &PY_TYPE_DEF(UnscentedKalmanEstimator), module, "UnscentedKalmanEstimator", 0);
        }

        void t_UnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "class_", make_descriptor(UnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimator::wrap_Object(UnscentedKalmanEstimator(((t_UnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldSecondaryODE::class$ = NULL;
      jmethodID *FieldSecondaryODE::mids$ = NULL;
      bool FieldSecondaryODE::live$ = false;

      jclass FieldSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_074f58e68ab9f435] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_281a8331f0ac6a2e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSecondaryODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_074f58e68ab9f435], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jint FieldSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      void FieldSecondaryODE::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_281a8331f0ac6a2e], a0.this$, a1.this$, a2.this$, a3.this$);
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
      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self);
      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data);
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data);
      static PyGetSetDef t_FieldSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSecondaryODE, dimension),
        DECLARE_GET_FIELD(t_FieldSecondaryODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_FieldSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSecondaryODE)[] = {
        { Py_tp_methods, t_FieldSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSecondaryODE, t_FieldSecondaryODE, FieldSecondaryODE);
      PyObject *t_FieldSecondaryODE::wrap_Object(const FieldSecondaryODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSecondaryODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSecondaryODE), &PY_TYPE_DEF(FieldSecondaryODE), module, "FieldSecondaryODE", 0);
      }

      void t_FieldSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "class_", make_descriptor(FieldSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "wrapfn_", make_descriptor(t_FieldSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_FieldSecondaryODE::wrap_Object(FieldSecondaryODE(((t_FieldSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
        PyTypeObject **p3;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;

        if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_567ea49d447f98c8] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldAbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_567ea49d447f98c8], a0.this$));
        }

        void FieldAbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator$MainStateEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations, t_FieldAbstractIntegratedPropagator$MainStateEquations, FieldAbstractIntegratedPropagator$MainStateEquations);
        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(const FieldAbstractIntegratedPropagator$MainStateEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations), module, "FieldAbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(FieldAbstractIntegratedPropagator$MainStateEquations(((t_FieldAbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SphericalHarmonicsProvider::class$ = NULL;
          jmethodID *SphericalHarmonicsProvider::mids$ = NULL;
          bool SphericalHarmonicsProvider::live$ = false;

          jclass SphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAe_dff5885c2c873297] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_dff5885c2c873297]);
          }

          jint SphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_570ce0828f81a2c1]);
          }

          jint SphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_570ce0828f81a2c1]);
          }

          jdouble SphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
          }

          ::org::orekit::time::AbsoluteDate SphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
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
          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_SphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, referenceDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_SphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_SphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::TideSystemProvider),
            NULL
          };

          DEFINE_TYPE(SphericalHarmonicsProvider, t_SphericalHarmonicsProvider, SphericalHarmonicsProvider);

          void t_SphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalHarmonicsProvider), &PY_TYPE_DEF(SphericalHarmonicsProvider), module, "SphericalHarmonicsProvider", 0);
          }

          void t_SphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "class_", make_descriptor(SphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_SphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_SphericalHarmonicsProvider::wrap_Object(SphericalHarmonicsProvider(((t_SphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateFunction::class$ = NULL;
      jmethodID *FieldMultivariateFunction::mids$ = NULL;
      bool FieldMultivariateFunction::live$ = false;

      jclass FieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateFunction_a04eccf82b7ac6e5] = env->getMethodID(cls, "toCalculusFieldMultivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateFunction;");
          mids$[mid_value_f2dc4f0d2f87d390] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateFunction FieldMultivariateFunction::toCalculusFieldMultivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateFunction_a04eccf82b7ac6e5], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_f2dc4f0d2f87d390], a0.this$));
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
      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, toCalculusFieldMultivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateFunction, t_FieldMultivariateFunction, FieldMultivariateFunction);

      void t_FieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateFunction), &PY_TYPE_DEF(FieldMultivariateFunction), module, "FieldMultivariateFunction", 0);
      }

      void t_FieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "class_", make_descriptor(FieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "wrapfn_", make_descriptor(t_FieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateFunction::wrap_Object(FieldMultivariateFunction(((t_FieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularIonosphericDelayModifier::class$ = NULL;
          jmethodID *AngularIonosphericDelayModifier::mids$ = NULL;
          bool AngularIonosphericDelayModifier::live$ = false;

          jclass AngularIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88af61602f29e4c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularIonosphericDelayModifier::AngularIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88af61602f29e4c4, a0.this$, a1)) {}

          ::java::util::List AngularIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void AngularIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self);
          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularIonosphericDelayModifier, t_AngularIonosphericDelayModifier, AngularIonosphericDelayModifier);

          void t_AngularIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularIonosphericDelayModifier), &PY_TYPE_DEF(AngularIonosphericDelayModifier), module, "AngularIonosphericDelayModifier", 0);
          }

          void t_AngularIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "class_", make_descriptor(AngularIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "wrapfn_", make_descriptor(t_AngularIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularIonosphericDelayModifier::wrap_Object(AngularIonosphericDelayModifier(((t_AngularIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            AngularIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Range::class$ = NULL;
        jmethodID *Range::mids$ = NULL;
        bool Range::live$ = false;
        ::java::lang::String *Range::MEASUREMENT_TYPE = NULL;

        jclass Range::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Range");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d61b0753fbc5ddd9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Range::Range(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_d61b0753fbc5ddd9, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_of_(t_Range *self, PyObject *args);
        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data);
        static PyGetSetDef t_Range__fields_[] = {
          DECLARE_GET_FIELD(t_Range, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Range__methods_[] = {
          DECLARE_METHOD(t_Range, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Range)[] = {
          { Py_tp_methods, t_Range__methods_ },
          { Py_tp_init, (void *) t_Range_init_ },
          { Py_tp_getset, t_Range__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Range)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(Range, t_Range, Range);
        PyObject *t_Range::wrap_Object(const Range& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Range::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Range::install(PyObject *module)
        {
          installType(&PY_TYPE(Range), &PY_TYPE_DEF(Range), module, "Range", 0);
        }

        void t_Range::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "class_", make_descriptor(Range::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "wrapfn_", make_descriptor(t_Range::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "boxfn_", make_descriptor(boxObject));
          env->getClass(Range::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "MEASUREMENT_TYPE", make_descriptor(j2p(*Range::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Range::initializeClass, 1)))
            return NULL;
          return t_Range::wrap_Object(Range(((t_Range *) arg)->object.this$));
        }
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Range::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Range_of_(t_Range *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          Range object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Range(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleBased::class$ = NULL;
      jmethodID *PositionAngleBased::mids$ = NULL;
      bool PositionAngleBased::live$ = false;

      jclass PositionAngleBased::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleBased");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_8cc8ba4fab4c2a60] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/PositionAngleBased;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::PositionAngleType PositionAngleBased::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c]));
      }

      jboolean PositionAngleBased::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
      }

      PositionAngleBased PositionAngleBased::removeRates() const
      {
        return PositionAngleBased(env->callObjectMethod(this$, mids$[mid_removeRates_8cc8ba4fab4c2a60]));
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
      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data);
      static PyGetSetDef t_PositionAngleBased__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleBased, cachedPositionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleBased__methods_[] = {
        DECLARE_METHOD(t_PositionAngleBased, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, removeRates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleBased)[] = {
        { Py_tp_methods, t_PositionAngleBased__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleBased__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleBased)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PositionAngleBased, t_PositionAngleBased, PositionAngleBased);

      void t_PositionAngleBased::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleBased), &PY_TYPE_DEF(PositionAngleBased), module, "PositionAngleBased", 0);
      }

      void t_PositionAngleBased::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "class_", make_descriptor(PositionAngleBased::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "wrapfn_", make_descriptor(t_PositionAngleBased::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleBased::initializeClass, 1)))
          return NULL;
        return t_PositionAngleBased::wrap_Object(PositionAngleBased(((t_PositionAngleBased *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleBased::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self)
      {
        PositionAngleBased result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_PositionAngleBased::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_dff5885c2c873297] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_25793e429590ca38] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonRawSphericalHarmonicsProvider::PythonRawSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonRawSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonRawSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonRawSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
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
#include "org/orekit/rugged/intersection/ConstantElevationAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *ConstantElevationAlgorithm::class$ = NULL;
        jmethodID *ConstantElevationAlgorithm::mids$ = NULL;
        bool ConstantElevationAlgorithm::live$ = false;

        jclass ConstantElevationAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/ConstantElevationAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getAlgorithmId_da9f33328b8f3962] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_86ffecc08a63eff0] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_943aab8456e3784b] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_860353a3ab3d03aa] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantElevationAlgorithm::ConstantElevationAlgorithm(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::orekit::rugged::api::AlgorithmId ConstantElevationAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_da9f33328b8f3962]));
        }

        jdouble ConstantElevationAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_86ffecc08a63eff0], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_943aab8456e3784b], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_860353a3ab3d03aa], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self);
        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data);
        static PyGetSetDef t_ConstantElevationAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantElevationAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantElevationAlgorithm__methods_[] = {
          DECLARE_METHOD(t_ConstantElevationAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantElevationAlgorithm)[] = {
          { Py_tp_methods, t_ConstantElevationAlgorithm__methods_ },
          { Py_tp_init, (void *) t_ConstantElevationAlgorithm_init_ },
          { Py_tp_getset, t_ConstantElevationAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantElevationAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantElevationAlgorithm, t_ConstantElevationAlgorithm, ConstantElevationAlgorithm);

        void t_ConstantElevationAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantElevationAlgorithm), &PY_TYPE_DEF(ConstantElevationAlgorithm), module, "ConstantElevationAlgorithm", 0);
        }

        void t_ConstantElevationAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "class_", make_descriptor(ConstantElevationAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "wrapfn_", make_descriptor(t_ConstantElevationAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantElevationAlgorithm::initializeClass, 1)))
            return NULL;
          return t_ConstantElevationAlgorithm::wrap_Object(ConstantElevationAlgorithm(((t_ConstantElevationAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantElevationAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantElevationAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantElevationAlgorithm(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args)
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

        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args)
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

        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args)
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

        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationExtremumDetector::class$ = NULL;
        jmethodID *ElevationExtremumDetector::mids$ = NULL;
        bool ElevationExtremumDetector::live$ = false;

        jclass ElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_359d9aed85301acb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_0f402cc32c5bccb2] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevation_432f3d328c15ec82] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getTopocentricFrame_e17d4157ae504252] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_4d12cf9fa078dc58] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationExtremumDetector::ElevationExtremumDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_359d9aed85301acb, a0.this$)) {}

        ElevationExtremumDetector::ElevationExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0f402cc32c5bccb2, a0, a1, a2.this$)) {}

        jdouble ElevationExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        jdouble ElevationExtremumDetector::getElevation(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::frames::TopocentricFrame ElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_e17d4157ae504252]));
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
        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args);
        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self);
        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data);
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_ElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_ElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationExtremumDetector)[] = {
          { Py_tp_methods, t_ElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationExtremumDetector_init_ },
          { Py_tp_getset, t_ElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationExtremumDetector, t_ElevationExtremumDetector, ElevationExtremumDetector);
        PyObject *t_ElevationExtremumDetector::wrap_Object(const ElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationExtremumDetector), &PY_TYPE_DEF(ElevationExtremumDetector), module, "ElevationExtremumDetector", 0);
        }

        void t_ElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "class_", make_descriptor(ElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "wrapfn_", make_descriptor(t_ElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationExtremumDetector::wrap_Object(ElevationExtremumDetector(((t_ElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
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

        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06::class$ = NULL;
              jmethodID *SsrIgm06::mids$ = NULL;
              bool SsrIgm06::live$ = false;

              jclass SsrIgm06::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_be132917c655f519] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm06Data_6f5a75ccd8c04465] = env->getMethodID(cls, "getSsrIgm06Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06::SsrIgm06(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_be132917c655f519, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm06::getSsrIgm06Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm06Data_6f5a75ccd8c04465]));
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
              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args);
              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self);
              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data);
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data);
              static PyGetSetDef t_SsrIgm06__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06, ssrIgm06Data),
                DECLARE_GET_FIELD(t_SsrIgm06, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm06, getSsrIgm06Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06)[] = {
                { Py_tp_methods, t_SsrIgm06__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06_init_ },
                { Py_tp_getset, t_SsrIgm06__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm06, t_SsrIgm06, SsrIgm06);
              PyObject *t_SsrIgm06::wrap_Object(const SsrIgm06& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm06::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm06::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06), &PY_TYPE_DEF(SsrIgm06), module, "SsrIgm06", 0);
              }

              void t_SsrIgm06::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "class_", make_descriptor(SsrIgm06::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "wrapfn_", make_descriptor(t_SsrIgm06::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06::wrap_Object(SsrIgm06(((t_SsrIgm06 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm06 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm06(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonGeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *PythonGeneratedMeasurementSubscriber::mids$ = NULL;
          bool PythonGeneratedMeasurementSubscriber::live$ = false;

          jclass PythonGeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_handleGeneratedMeasurement_558d7f8249b8a2bc] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGeneratedMeasurementSubscriber::PythonGeneratedMeasurementSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonGeneratedMeasurementSubscriber::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonGeneratedMeasurementSubscriber::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonGeneratedMeasurementSubscriber::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data);
          static PyGetSetDef t_PythonGeneratedMeasurementSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGeneratedMeasurementSubscriber, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_PythonGeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) t_PythonGeneratedMeasurementSubscriber_init_ },
            { Py_tp_getset, t_PythonGeneratedMeasurementSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGeneratedMeasurementSubscriber, t_PythonGeneratedMeasurementSubscriber, PythonGeneratedMeasurementSubscriber);

          void t_PythonGeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGeneratedMeasurementSubscriber), &PY_TYPE_DEF(PythonGeneratedMeasurementSubscriber), module, "PythonGeneratedMeasurementSubscriber", 1);
          }

          void t_PythonGeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "class_", make_descriptor(PythonGeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_PythonGeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGeneratedMeasurementSubscriber::initializeClass);
            JNINativeMethod methods[] = {
              { "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V", (void *) t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonGeneratedMeasurementSubscriber_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonGeneratedMeasurementSubscriber_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_PythonGeneratedMeasurementSubscriber::wrap_Object(PythonGeneratedMeasurementSubscriber(((t_PythonGeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds)
          {
            PythonGeneratedMeasurementSubscriber object((jobject) NULL);

            INT_CALL(object = PythonGeneratedMeasurementSubscriber());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args)
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

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *result = PyObject_CallMethod(obj, "handleGeneratedMeasurement", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data)
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
#include "org/hipparchus/linear/DefaultFieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixChangingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixChangingVisitor::live$ = false;

      jclass DefaultFieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f96eb0f00086e90d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_99097cb60cf2d774] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_67d71003e110b686] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixChangingVisitor::DefaultFieldMatrixChangingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f96eb0f00086e90d, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_99097cb60cf2d774]));
      }

      void DefaultFieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_67d71003e110b686], a0, a1, a2.this$));
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
      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixChangingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixChangingVisitor, t_DefaultFieldMatrixChangingVisitor, DefaultFieldMatrixChangingVisitor);
      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_Object(const DefaultFieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixChangingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixChangingVisitor), module, "DefaultFieldMatrixChangingVisitor", 0);
      }

      void t_DefaultFieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "class_", make_descriptor(DefaultFieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixChangingVisitor::wrap_Object(DefaultFieldMatrixChangingVisitor(((t_DefaultFieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixChangingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixChangingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder$InterpolationFactory::class$ = NULL;
      jmethodID *WaypointPVBuilder$InterpolationFactory::mids$ = NULL;
      bool WaypointPVBuilder$InterpolationFactory::live$ = false;

      jclass WaypointPVBuilder$InterpolationFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder$InterpolationFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_092e4309578f48b7] = env->getMethodID(cls, "create", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder$InterpolationFactory::create(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::bodies::GeodeticPoint & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_create_092e4309578f48b7], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args);

      static PyMethodDef t_WaypointPVBuilder$InterpolationFactory__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, create, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder$InterpolationFactory)[] = {
        { Py_tp_methods, t_WaypointPVBuilder$InterpolationFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder$InterpolationFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder$InterpolationFactory, t_WaypointPVBuilder$InterpolationFactory, WaypointPVBuilder$InterpolationFactory);

      void t_WaypointPVBuilder$InterpolationFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder$InterpolationFactory), &PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory), module, "WaypointPVBuilder$InterpolationFactory", 0);
      }

      void t_WaypointPVBuilder$InterpolationFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "class_", make_descriptor(WaypointPVBuilder$InterpolationFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "wrapfn_", make_descriptor(t_WaypointPVBuilder$InterpolationFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder$InterpolationFactory::wrap_Object(WaypointPVBuilder$InterpolationFactory(((t_WaypointPVBuilder$InterpolationFactory *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.create(a0, a1, a2, a3, a4));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "create", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Enumeration.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Enumeration::class$ = NULL;
    jmethodID *Enumeration::mids$ = NULL;
    bool Enumeration::live$ = false;

    jclass Enumeration::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Enumeration");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asIterator_4d23511a9f0db098] = env->getMethodID(cls, "asIterator", "()Ljava/util/Iterator;");
        mids$[mid_hasMoreElements_b108b35ef48e27bd] = env->getMethodID(cls, "hasMoreElements", "()Z");
        mids$[mid_nextElement_4d26fd885228c716] = env->getMethodID(cls, "nextElement", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Enumeration::asIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_asIterator_4d23511a9f0db098]));
    }

    jboolean Enumeration::hasMoreElements() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasMoreElements_b108b35ef48e27bd]);
    }

    ::java::lang::Object Enumeration::nextElement() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_nextElement_4d26fd885228c716]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Enumeration_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enumeration_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enumeration_of_(t_Enumeration *self, PyObject *args);
    static PyObject *t_Enumeration_asIterator(t_Enumeration *self);
    static PyObject *t_Enumeration_hasMoreElements(t_Enumeration *self);
    static PyObject *t_Enumeration_nextElement(t_Enumeration *self);
    static PyObject *t_Enumeration_get__parameters_(t_Enumeration *self, void *data);
    static PyGetSetDef t_Enumeration__fields_[] = {
      DECLARE_GET_FIELD(t_Enumeration, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enumeration__methods_[] = {
      DECLARE_METHOD(t_Enumeration, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enumeration, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enumeration, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enumeration, asIterator, METH_NOARGS),
      DECLARE_METHOD(t_Enumeration, hasMoreElements, METH_NOARGS),
      DECLARE_METHOD(t_Enumeration, nextElement, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enumeration)[] = {
      { Py_tp_methods, t_Enumeration__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enumeration__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Enumeration *)) get_generic_enumeration_next< ::java::util::t_Enumeration,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enumeration)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enumeration, t_Enumeration, Enumeration);
    PyObject *t_Enumeration::wrap_Object(const Enumeration& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enumeration::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enumeration *self = (t_Enumeration *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enumeration::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enumeration::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enumeration *self = (t_Enumeration *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enumeration::install(PyObject *module)
    {
      installType(&PY_TYPE(Enumeration), &PY_TYPE_DEF(Enumeration), module, "Enumeration", 0);
    }

    void t_Enumeration::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "class_", make_descriptor(Enumeration::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "wrapfn_", make_descriptor(t_Enumeration::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enumeration_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enumeration::initializeClass, 1)))
        return NULL;
      return t_Enumeration::wrap_Object(Enumeration(((t_Enumeration *) arg)->object.this$));
    }
    static PyObject *t_Enumeration_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enumeration::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enumeration_of_(t_Enumeration *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enumeration_asIterator(t_Enumeration *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.asIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enumeration_hasMoreElements(t_Enumeration *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasMoreElements());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Enumeration_nextElement(t_Enumeration *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.nextElement());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }
    static PyObject *t_Enumeration_get__parameters_(t_Enumeration *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector::class$ = NULL;
      jmethodID *RealVector::mids$ = NULL;
      bool RealVector::live$ = false;

      jclass RealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_613347e28dd909cd] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_addToEntry_bb79ca80d85d0a66] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_613347e28dd909cd] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_5df18376713b9c4f] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_62008467377fb126] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combineToSelf_62008467377fb126] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_copy_aab4fbf77867daa8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_cosine_c579a73494d20c67] = env->getMethodID(cls, "cosine", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_dotProduct_c579a73494d20c67] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_613347e28dd909cd] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_ebeMultiply_613347e28dd909cd] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_c579a73494d20c67] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_46f85b53d9aedd96] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_c579a73494d20c67] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_dff5885c2c873297] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_c579a73494d20c67] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_dff5885c2c873297] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getMaxIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIndex", "()I");
          mids$[mid_getMaxValue_dff5885c2c873297] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMinIndex", "()I");
          mids$[mid_getMinValue_dff5885c2c873297] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_38329ff0125c5584] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
          mids$[mid_map_ad908208161b523f] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAdd_5df18376713b9c4f] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAddToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivide_5df18376713b9c4f] = env->getMethodID(cls, "mapDivide", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiply_5df18376713b9c4f] = env->getMethodID(cls, "mapMultiply", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtract_5df18376713b9c4f] = env->getMethodID(cls, "mapSubtract", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_ad908208161b523f] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_outerProduct_54d602014b6af984] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_projection_613347e28dd909cd] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_set_17db3a65980d3441] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_bb79ca80d85d0a66] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_18388821294f273e] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_4d23511a9f0db098] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_613347e28dd909cd] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_60c7040667a7dc5c] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_aab4fbf77867daa8] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unitize_0fa09c18fee449d5] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_unmodifiableRealVector_613347e28dd909cd] = env->getStaticMethodID(cls, "unmodifiableRealVector", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_walkInDefaultOrder_7fcbb8310174b200] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_1dd342028e49eba0] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_d74abf24a85ccc3b] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_2debe8623b864ef6] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_7fcbb8310174b200] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_1dd342028e49eba0] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_d74abf24a85ccc3b] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_2debe8623b864ef6] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_bdf205176b90cff1] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkVectorDimensions_99803b0791f320ff] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkIndices_6f37635c3285dbdf] = env->getMethodID(cls, "checkIndices", "(II)V");
          mids$[mid_checkIndex_99803b0791f320ff] = env->getMethodID(cls, "checkIndex", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector::RealVector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      RealVector RealVector::add(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_add_613347e28dd909cd], a0.this$));
      }

      void RealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_bb79ca80d85d0a66], a0, a1);
      }

      RealVector RealVector::append(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_613347e28dd909cd], a0.this$));
      }

      RealVector RealVector::append(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_5df18376713b9c4f], a0));
      }

      RealVector RealVector::combine(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combine_62008467377fb126], a0, a1, a2.this$));
      }

      RealVector RealVector::combineToSelf(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_62008467377fb126], a0, a1, a2.this$));
      }

      RealVector RealVector::copy() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_copy_aab4fbf77867daa8]));
      }

      jdouble RealVector::cosine(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosine_c579a73494d20c67], a0.this$);
      }

      jdouble RealVector::dotProduct(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_c579a73494d20c67], a0.this$);
      }

      RealVector RealVector::ebeDivide(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_613347e28dd909cd], a0.this$));
      }

      RealVector RealVector::ebeMultiply(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_613347e28dd909cd], a0.this$));
      }

      jboolean RealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jint RealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      jdouble RealVector::getDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_c579a73494d20c67], a0.this$);
      }

      jdouble RealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_46f85b53d9aedd96], a0);
      }

      jdouble RealVector::getL1Distance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_c579a73494d20c67], a0.this$);
      }

      jdouble RealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_dff5885c2c873297]);
      }

      jdouble RealVector::getLInfDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_c579a73494d20c67], a0.this$);
      }

      jdouble RealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_dff5885c2c873297]);
      }

      jint RealVector::getMaxIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIndex_570ce0828f81a2c1]);
      }

      jdouble RealVector::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_dff5885c2c873297]);
      }

      jint RealVector::getMinIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinIndex_570ce0828f81a2c1]);
      }

      jdouble RealVector::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_dff5885c2c873297]);
      }

      jdouble RealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
      }

      RealVector RealVector::getSubVector(jint a0, jint a1) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_38329ff0125c5584], a0, a1));
      }

      jint RealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean RealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      jboolean RealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
      }

      ::java::util::Iterator RealVector::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
      }

      RealVector RealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_map_ad908208161b523f], a0.this$));
      }

      RealVector RealVector::mapAdd(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapAddToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapDivide(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivide_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapDivideToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapMultiply(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapSubtract(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapSubtractToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_5df18376713b9c4f], a0));
      }

      RealVector RealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_ad908208161b523f], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealVector::outerProduct(const RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_54d602014b6af984], a0.this$));
      }

      RealVector RealVector::projection(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_projection_613347e28dd909cd], a0.this$));
      }

      void RealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_17db3a65980d3441], a0);
      }

      void RealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_bb79ca80d85d0a66], a0, a1);
      }

      void RealVector::setSubVector(jint a0, const RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_18388821294f273e], a0, a1.this$);
      }

      ::java::util::Iterator RealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_4d23511a9f0db098]));
      }

      RealVector RealVector::subtract(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_subtract_613347e28dd909cd], a0.this$));
      }

      JArray< jdouble > RealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_60c7040667a7dc5c]));
      }

      RealVector RealVector::unitVector() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_unitVector_aab4fbf77867daa8]));
      }

      void RealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_0fa09c18fee449d5]);
      }

      RealVector RealVector::unmodifiableRealVector(const RealVector & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVector(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableRealVector_613347e28dd909cd], a0.this$));
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_7fcbb8310174b200], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_1dd342028e49eba0], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_d74abf24a85ccc3b], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_2debe8623b864ef6], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_7fcbb8310174b200], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_1dd342028e49eba0], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_d74abf24a85ccc3b], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_2debe8623b864ef6], a0.this$, a1, a2);
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
      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_copy(t_RealVector *self);
      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_getDimension(t_RealVector *self);
      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Norm(t_RealVector *self);
      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self);
      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMaxValue(t_RealVector *self);
      static PyObject *t_RealVector_getMinIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMinValue(t_RealVector *self);
      static PyObject *t_RealVector_getNorm(t_RealVector *self);
      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_isInfinite(t_RealVector *self);
      static PyObject *t_RealVector_isNaN(t_RealVector *self);
      static PyObject *t_RealVector_iterator(t_RealVector *self);
      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_sparseIterator(t_RealVector *self);
      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_toArray(t_RealVector *self);
      static PyObject *t_RealVector_unitVector(t_RealVector *self);
      static PyObject *t_RealVector_unitize(t_RealVector *self);
      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data);
      static PyGetSetDef t_RealVector__fields_[] = {
        DECLARE_GET_FIELD(t_RealVector, dimension),
        DECLARE_GET_FIELD(t_RealVector, infinite),
        DECLARE_GET_FIELD(t_RealVector, l1Norm),
        DECLARE_GET_FIELD(t_RealVector, lInfNorm),
        DECLARE_GET_FIELD(t_RealVector, maxIndex),
        DECLARE_GET_FIELD(t_RealVector, maxValue),
        DECLARE_GET_FIELD(t_RealVector, minIndex),
        DECLARE_GET_FIELD(t_RealVector, minValue),
        DECLARE_GET_FIELD(t_RealVector, naN),
        DECLARE_GET_FIELD(t_RealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector__methods_[] = {
        DECLARE_METHOD(t_RealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, add, METH_O),
        DECLARE_METHOD(t_RealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, cosine, METH_O),
        DECLARE_METHOD(t_RealVector, dotProduct, METH_O),
        DECLARE_METHOD(t_RealVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_RealVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getEntry, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Distance, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Norm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getLInfDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getLInfNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, iterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, map, METH_O),
        DECLARE_METHOD(t_RealVector, mapAdd, METH_O),
        DECLARE_METHOD(t_RealVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivide, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, outerProduct, METH_O),
        DECLARE_METHOD(t_RealVector, projection, METH_O),
        DECLARE_METHOD(t_RealVector, set, METH_O),
        DECLARE_METHOD(t_RealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, sparseIterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, subtract, METH_O),
        DECLARE_METHOD(t_RealVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitVector, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitize, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unmodifiableRealVector, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector)[] = {
        { Py_tp_methods, t_RealVector__methods_ },
        { Py_tp_init, (void *) t_RealVector_init_ },
        { Py_tp_getset, t_RealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector, t_RealVector, RealVector);

      void t_RealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector), &PY_TYPE_DEF(RealVector), module, "RealVector", 0);
      }

      void t_RealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "class_", make_descriptor(RealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "wrapfn_", make_descriptor(t_RealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector::initializeClass, 1)))
          return NULL;
        return t_RealVector::wrap_Object(RealVector(((t_RealVector *) arg)->object.this$));
      }
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds)
      {
        RealVector object((jobject) NULL);

        INT_CALL(object = RealVector());
        self->object = object;

        return 0;
      }

      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            RealVector a0((jobject) NULL);
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combine", args);
        return NULL;
      }

      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combineToSelf", args);
        return NULL;
      }

      static PyObject *t_RealVector_copy(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.cosine(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cosine", arg);
        return NULL;
      }

      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_RealVector_getDimension(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL1Distance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Norm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL1Norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLInfDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMaxValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMinIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMinValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_RealVector_isInfinite(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_isNaN(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_iterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_sparseIterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.sparseIterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_toArray(t_RealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }

      static PyObject *t_RealVector_unitVector(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.unitVector());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_unitize(t_RealVector *self)
      {
        OBJ_CALL(self->object.unitize());
        Py_RETURN_NONE;
      }

      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::RealVector::unmodifiableRealVector(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unmodifiableRealVector", arg);
        return NULL;
      }

      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileUpdater::class$ = NULL;
        jmethodID *TileUpdater::mids$ = NULL;
        bool TileUpdater::live$ = false;

        jclass TileUpdater::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileUpdater");

            mids$ = new jmethodID[max_mid];
            mids$[mid_updateTile_6f7ad702ca10d6b8] = env->getMethodID(cls, "updateTile", "(DDLorg/orekit/rugged/raster/UpdatableTile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TileUpdater::updateTile(jdouble a0, jdouble a1, const ::org::orekit::rugged::raster::UpdatableTile & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateTile_6f7ad702ca10d6b8], a0, a1, a2.this$);
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
        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args);

        static PyMethodDef t_TileUpdater__methods_[] = {
          DECLARE_METHOD(t_TileUpdater, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, updateTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileUpdater)[] = {
          { Py_tp_methods, t_TileUpdater__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileUpdater)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileUpdater, t_TileUpdater, TileUpdater);

        void t_TileUpdater::install(PyObject *module)
        {
          installType(&PY_TYPE(TileUpdater), &PY_TYPE_DEF(TileUpdater), module, "TileUpdater", 0);
        }

        void t_TileUpdater::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "class_", make_descriptor(TileUpdater::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "wrapfn_", make_descriptor(t_TileUpdater::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileUpdater::initializeClass, 1)))
            return NULL;
          return t_TileUpdater::wrap_Object(TileUpdater(((t_TileUpdater *) arg)->object.this$));
        }
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileUpdater::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::UpdatableTile a2((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::rugged::raster::UpdatableTile::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateTile(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateTile", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_432f3d328c15ec82] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_432f3d328c15ec82], a0.this$);
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
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *LeastSquaresTleGenerationAlgorithm::class$ = NULL;
            jmethodID *LeastSquaresTleGenerationAlgorithm::mids$ = NULL;
            bool LeastSquaresTleGenerationAlgorithm::live$ = false;
            jint LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS = (jint) 0;

            jclass LeastSquaresTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_f75877695db6cf2c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_bce44986dbf601d6] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_34f09d826252bcec] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_getRms_dff5885c2c873297] = env->getMethodID(cls, "getRms", "()D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f75877695db6cf2c, a0, a1.this$, a2.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_bce44986dbf601d6], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_34f09d826252bcec], a0.this$, a1.this$));
            }

            jdouble LeastSquaresTleGenerationAlgorithm::getRms() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRms_dff5885c2c873297]);
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
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_LeastSquaresTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresTleGenerationAlgorithm, rms),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, generate, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, getRms, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_LeastSquaresTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_LeastSquaresTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresTleGenerationAlgorithm, t_LeastSquaresTleGenerationAlgorithm, LeastSquaresTleGenerationAlgorithm);

            void t_LeastSquaresTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresTleGenerationAlgorithm), &PY_TYPE_DEF(LeastSquaresTleGenerationAlgorithm), module, "LeastSquaresTleGenerationAlgorithm", 0);
            }

            void t_LeastSquaresTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "class_", make_descriptor(LeastSquaresTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_LeastSquaresTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(LeastSquaresTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "DEFAULT_MAX_ITERATIONS", make_descriptor(LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS));
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresTleGenerationAlgorithm::wrap_Object(LeastSquaresTleGenerationAlgorithm(((t_LeastSquaresTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = LeastSquaresTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jint a0;
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "Ikk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0, a1, a2));
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

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRms());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRms());
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
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectorResults::class$ = NULL;
          jmethodID *CycleSlipDetectorResults::mids$ = NULL;
          bool CycleSlipDetectorResults::live$ = false;

          jclass CycleSlipDetectorResults::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getBeginDate_d36ded8f0487ea65] = env->getMethodID(cls, "getBeginDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCycleSlipMap_6f5a75ccd8c04465] = env->getMethodID(cls, "getCycleSlipMap", "()Ljava/util/Map;");
              mids$[mid_getEndDate_d36ded8f0487ea65] = env->getMethodID(cls, "getEndDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getSatelliteName_11b109bd155ca898] = env->getMethodID(cls, "getSatelliteName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getBeginDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeginDate_d36ded8f0487ea65], a0.this$));
          }

          ::java::util::Map CycleSlipDetectorResults::getCycleSlipMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCycleSlipMap_6f5a75ccd8c04465]));
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getEndDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_d36ded8f0487ea65], a0.this$));
          }

          ::java::lang::String CycleSlipDetectorResults::getSatelliteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSatelliteName_11b109bd155ca898]));
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
          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data);
          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data);
          static PyGetSetDef t_CycleSlipDetectorResults__fields_[] = {
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, cycleSlipMap),
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, satelliteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CycleSlipDetectorResults__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectorResults, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getBeginDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getCycleSlipMap, METH_NOARGS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getEndDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getSatelliteName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectorResults)[] = {
            { Py_tp_methods, t_CycleSlipDetectorResults__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CycleSlipDetectorResults__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectorResults)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectorResults, t_CycleSlipDetectorResults, CycleSlipDetectorResults);

          void t_CycleSlipDetectorResults::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectorResults), &PY_TYPE_DEF(CycleSlipDetectorResults), module, "CycleSlipDetectorResults", 0);
          }

          void t_CycleSlipDetectorResults::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "class_", make_descriptor(CycleSlipDetectorResults::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "wrapfn_", make_descriptor(t_CycleSlipDetectorResults::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectorResults::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectorResults::wrap_Object(CycleSlipDetectorResults(((t_CycleSlipDetectorResults *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectorResults::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getBeginDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBeginDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getEndDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEndDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteName());
            return j2p(result);
          }

          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolatingFunction::class$ = NULL;
        jmethodID *BilinearInterpolatingFunction::mids$ = NULL;
        bool BilinearInterpolatingFunction::live$ = false;

        jclass BilinearInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2656072909750fef] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_getXInf_dff5885c2c873297] = env->getMethodID(cls, "getXInf", "()D");
            mids$[mid_getXSup_dff5885c2c873297] = env->getMethodID(cls, "getXSup", "()D");
            mids$[mid_getYInf_dff5885c2c873297] = env->getMethodID(cls, "getYInf", "()D");
            mids$[mid_getYSup_dff5885c2c873297] = env->getMethodID(cls, "getYSup", "()D");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_6746cc1cd9210d54] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolatingFunction::BilinearInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2656072909750fef, a0.this$, a1.this$, a2.this$)) {}

        jdouble BilinearInterpolatingFunction::getXInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXInf_dff5885c2c873297]);
        }

        jdouble BilinearInterpolatingFunction::getXSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSup_dff5885c2c873297]);
        }

        jdouble BilinearInterpolatingFunction::getYInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYInf_dff5885c2c873297]);
        }

        jdouble BilinearInterpolatingFunction::getYSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYSup_dff5885c2c873297]);
        }

        jdouble BilinearInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement BilinearInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6746cc1cd9210d54], a0.this$, a1.this$));
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
        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data);
        static PyGetSetDef t_BilinearInterpolatingFunction__fields_[] = {
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xSup),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, yInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, ySup),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BilinearInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolatingFunction)[] = {
          { Py_tp_methods, t_BilinearInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolatingFunction_init_ },
          { Py_tp_getset, t_BilinearInterpolatingFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolatingFunction, t_BilinearInterpolatingFunction, BilinearInterpolatingFunction);

        void t_BilinearInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolatingFunction), &PY_TYPE_DEF(BilinearInterpolatingFunction), module, "BilinearInterpolatingFunction", 0);
        }

        void t_BilinearInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "class_", make_descriptor(BilinearInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "wrapfn_", make_descriptor(t_BilinearInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolatingFunction::wrap_Object(BilinearInterpolatingFunction(((t_BilinearInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          BilinearInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = BilinearInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
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
                OBJ_CALL(result = self->object.value(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSup());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYSup());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *AbstractRuleFactory::class$ = NULL;
          jmethodID *AbstractRuleFactory::mids$ = NULL;
          bool AbstractRuleFactory::live$ = false;

          jclass AbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/AbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getRule_e670405dd33862ee] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_5052ee4f5e957843] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/UnivariateFunction;)[D");
              mids$[mid_enforceSymmetry_fa9d415d19f69361] = env->getMethodID(cls, "enforceSymmetry", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRuleFactory::AbstractRuleFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::util::Pair AbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_e670405dd33862ee], a0));
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
          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg);

          static PyMethodDef t_AbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_AbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRuleFactory)[] = {
            { Py_tp_methods, t_AbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_AbstractRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRuleFactory, t_AbstractRuleFactory, AbstractRuleFactory);

          void t_AbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRuleFactory), &PY_TYPE_DEF(AbstractRuleFactory), module, "AbstractRuleFactory", 0);
          }

          void t_AbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "class_", make_descriptor(AbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "wrapfn_", make_descriptor(t_AbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_AbstractRuleFactory::wrap_Object(AbstractRuleFactory(((t_AbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            AbstractRuleFactory object((jobject) NULL);

            INT_CALL(object = AbstractRuleFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MeasurementBuilder::class$ = NULL;
          jmethodID *MeasurementBuilder::mids$ = NULL;
          bool MeasurementBuilder::live$ = false;

          jclass MeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_baf3397e6fffc21d] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_ae909064be36023e] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_getModifiers_2afa36052df4765d] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_f81b672126a6576d] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_baf3397e6fffc21d], a0.this$);
          }

          ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_build_ae909064be36023e], a0.this$, a1.this$));
          }

          ::java::util::List MeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_2afa36052df4765d]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_f81b672126a6576d]));
          }

          void MeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_a9e71d848b81c8f8], a0.this$, a1.this$);
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
          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data);
          static PyGetSetDef t_MeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_MeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementBuilder)[] = {
            { Py_tp_methods, t_MeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementBuilder, t_MeasurementBuilder, MeasurementBuilder);
          PyObject *t_MeasurementBuilder::wrap_Object(const MeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementBuilder), &PY_TYPE_DEF(MeasurementBuilder), module, "MeasurementBuilder", 0);
          }

          void t_MeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "class_", make_descriptor(MeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "wrapfn_", make_descriptor(t_MeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MeasurementBuilder::wrap_Object(MeasurementBuilder(((t_MeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args)
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
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/GroundPointing.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *GroundPointing::class$ = NULL;
      jmethodID *GroundPointing::mids$ = NULL;
      bool GroundPointing::live$ = false;

      jclass GroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/GroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_29422c22de775b74] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_53a81d4d17b13463] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getBodyFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPosition_ed512b95aefae7df] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTargetPosition_35628cd92ea82231] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude GroundPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude GroundPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_29422c22de775b74], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_53a81d4d17b13463], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame GroundPointing::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_b86f9f61d97a7244]));
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
      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self);
      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data);
      static PyGetSetDef t_GroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_GroundPointing, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GroundPointing__methods_[] = {
        DECLARE_METHOD(t_GroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getBodyFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GroundPointing)[] = {
        { Py_tp_methods, t_GroundPointing__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GroundPointing)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GroundPointing, t_GroundPointing, GroundPointing);

      void t_GroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(GroundPointing), &PY_TYPE_DEF(GroundPointing), module, "GroundPointing", 0);
      }

      void t_GroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "class_", make_descriptor(GroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "wrapfn_", make_descriptor(t_GroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GroundPointing::initializeClass, 1)))
          return NULL;
        return t_GroundPointing::wrap_Object(GroundPointing(((t_GroundPointing *) arg)->object.this$));
      }
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args)
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

      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args)
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

      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
