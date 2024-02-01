#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder.h"
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

        ::java::lang::Class *DormandPrince54IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54IntegratorBuilder::mids$ = NULL;
        bool DormandPrince54IntegratorBuilder::live$ = false;

        jclass DormandPrince54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54IntegratorBuilder::DormandPrince54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince54IntegratorBuilder, t_DormandPrince54IntegratorBuilder, DormandPrince54IntegratorBuilder);

        void t_DormandPrince54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54IntegratorBuilder), &PY_TYPE_DEF(DormandPrince54IntegratorBuilder), module, "DormandPrince54IntegratorBuilder", 0);
        }

        void t_DormandPrince54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "class_", make_descriptor(DormandPrince54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54IntegratorBuilder::wrap_Object(DormandPrince54IntegratorBuilder(((t_DormandPrince54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/forces/empirical/PolynomialAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PolynomialAccelerationModel::class$ = NULL;
        jmethodID *PolynomialAccelerationModel::mids$ = NULL;
        bool PolynomialAccelerationModel::live$ = false;

        jclass PolynomialAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PolynomialAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5e76661c77d61083] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;I)V");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_6c8e6cd5d59063ae] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_4222abdadde032f5] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialAccelerationModel::PolynomialAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e76661c77d61083, a0.this$, a1.this$, a2)) {}

        ::java::util::List PolynomialAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        void PolynomialAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_6c8e6cd5d59063ae], a0.this$, a1.this$));
        }

        jdouble PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_4222abdadde032f5], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self);
        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data);
        static PyGetSetDef t_PolynomialAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PolynomialAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialAccelerationModel)[] = {
          { Py_tp_methods, t_PolynomialAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PolynomialAccelerationModel_init_ },
          { Py_tp_getset, t_PolynomialAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialAccelerationModel, t_PolynomialAccelerationModel, PolynomialAccelerationModel);

        void t_PolynomialAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialAccelerationModel), &PY_TYPE_DEF(PolynomialAccelerationModel), module, "PolynomialAccelerationModel", 0);
        }

        void t_PolynomialAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "class_", make_descriptor(PolynomialAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "wrapfn_", make_descriptor(t_PolynomialAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PolynomialAccelerationModel::wrap_Object(PolynomialAccelerationModel(((t_PolynomialAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          PolynomialAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PolynomialAccelerationModel(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args)
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

        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/KthSelector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile$EstimationType::class$ = NULL;
          jmethodID *Percentile$EstimationType::mids$ = NULL;
          bool Percentile$EstimationType::live$ = false;
          Percentile$EstimationType *Percentile$EstimationType::LEGACY = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_1 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_2 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_3 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_4 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_5 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_6 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_7 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_8 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_9 = NULL;

          jclass Percentile$EstimationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile$EstimationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_evaluate_40f8c5a8d896f7d7] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_valueOf_5f307f0c6bdc5c00] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_values_1999714e96378d74] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_estimate_5a9d289d70e241d5] = env->getMethodID(cls, "estimate", "([D[IDILorg/hipparchus/util/KthSelector;)D");
              mids$[mid_evaluate_7afaa0cf3b64fdce] = env->getMethodID(cls, "evaluate", "([D[IDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_index_988810e80d644418] = env->getMethodID(cls, "index", "(DI)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              LEGACY = new Percentile$EstimationType(env->getStaticObjectField(cls, "LEGACY", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_1 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_1", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_2 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_2", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_3 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_3", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_4 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_4", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_5 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_5", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_6 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_6", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_7 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_7", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_8 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_8", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_9 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_9", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble Percentile$EstimationType::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::util::KthSelector & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_40f8c5a8d896f7d7], a0.this$, a1, a2.this$);
          }

          Percentile$EstimationType Percentile$EstimationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Percentile$EstimationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5f307f0c6bdc5c00], a0.this$));
          }

          JArray< Percentile$EstimationType > Percentile$EstimationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Percentile$EstimationType >(env->callStaticObjectMethod(cls, mids$[mid_values_1999714e96378d74]));
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
          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type);
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data);
          static PyGetSetDef t_Percentile$EstimationType__fields_[] = {
            DECLARE_GET_FIELD(t_Percentile$EstimationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile$EstimationType__methods_[] = {
            DECLARE_METHOD(t_Percentile$EstimationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile$EstimationType)[] = {
            { Py_tp_methods, t_Percentile$EstimationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Percentile$EstimationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile$EstimationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Percentile$EstimationType, t_Percentile$EstimationType, Percentile$EstimationType);
          PyObject *t_Percentile$EstimationType::wrap_Object(const Percentile$EstimationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Percentile$EstimationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Percentile$EstimationType::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile$EstimationType), &PY_TYPE_DEF(Percentile$EstimationType), module, "Percentile$EstimationType", 0);
          }

          void t_Percentile$EstimationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "class_", make_descriptor(Percentile$EstimationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "wrapfn_", make_descriptor(t_Percentile$EstimationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(Percentile$EstimationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "LEGACY", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::LEGACY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_1", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_2", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_3", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_4", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_5", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_6", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_7", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_8", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_9", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_9)));
          }

          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile$EstimationType::initializeClass, 1)))
              return NULL;
            return t_Percentile$EstimationType::wrap_Object(Percentile$EstimationType(((t_Percentile$EstimationType *) arg)->object.this$));
          }
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile$EstimationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::util::KthSelector a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[DDk", ::org::hipparchus::util::KthSelector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "evaluate", args);
            return NULL;
          }

          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Percentile$EstimationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::valueOf(a0));
              return t_Percentile$EstimationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type)
          {
            JArray< Percentile$EstimationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::values());
            return JArray<jobject>(result.this$).wrap(t_Percentile$EstimationType::wrap_jobject);
          }
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data)
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
#include "org/orekit/attitudes/SpinStabilized.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *SpinStabilized::class$ = NULL;
      jmethodID *SpinStabilized::mids$ = NULL;
      bool SpinStabilized::live$ = false;

      jclass SpinStabilized::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/SpinStabilized");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a79f3bfa422e2758] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpinStabilized::SpinStabilized(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a79f3bfa422e2758, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::attitudes::Attitude SpinStabilized::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude SpinStabilized::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider SpinStabilized::getUnderlyingAttitudeProvider() const
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
      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args);
      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self);
      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data);
      static PyGetSetDef t_SpinStabilized__fields_[] = {
        DECLARE_GET_FIELD(t_SpinStabilized, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpinStabilized__methods_[] = {
        DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_SpinStabilized, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
        { Py_tp_methods, t_SpinStabilized__methods_ },
        { Py_tp_init, (void *) t_SpinStabilized_init_ },
        { Py_tp_getset, t_SpinStabilized__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

      void t_SpinStabilized::install(PyObject *module)
      {
        installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
      }

      void t_SpinStabilized::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
          return NULL;
        return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
      }
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpinStabilized::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        SpinStabilized object((jobject) NULL);

        if (!parseArgs(args, "kkkD", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = SpinStabilized(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data)
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
#include "org/hipparchus/analysis/FieldMultivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
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
          mids$[mid_toCalculusFieldMultivariateFunction_cc608d3113c1098a] = env->getMethodID(cls, "toCalculusFieldMultivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateFunction;");
          mids$[mid_value_c04968ee695d037c] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateFunction FieldMultivariateFunction::toCalculusFieldMultivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateFunction_cc608d3113c1098a], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_c04968ee695d037c], a0.this$));
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999.h"
#include "java/lang/Throwable.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractAlfriend1999::class$ = NULL;
              jmethodID *PythonAbstractAlfriend1999::mids$ = NULL;
              bool PythonAbstractAlfriend1999::live$ = false;

              jclass PythonAbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_computeValue_db06d8c3fc3d9670] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_3130e338b3b4d904] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractAlfriend1999::PythonAbstractAlfriend1999(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

              void PythonAbstractAlfriend1999::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
              }

              jlong PythonAbstractAlfriend1999::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
              }

              void PythonAbstractAlfriend1999::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self);
              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args);
              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data);
              static PyGetSetDef t_PythonAbstractAlfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractAlfriend1999, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAlfriend1999)[] = {
                { Py_tp_methods, t_PythonAbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractAlfriend1999_init_ },
                { Py_tp_getset, t_PythonAbstractAlfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(PythonAbstractAlfriend1999, t_PythonAbstractAlfriend1999, PythonAbstractAlfriend1999);

              void t_PythonAbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractAlfriend1999), &PY_TYPE_DEF(PythonAbstractAlfriend1999), module, "PythonAbstractAlfriend1999", 1);
              }

              void t_PythonAbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "class_", make_descriptor(PythonAbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "wrapfn_", make_descriptor(t_PythonAbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractAlfriend1999::initializeClass);
                JNINativeMethod methods[] = {
                  { "computeValue", "(DDD)D", (void *) t_PythonAbstractAlfriend1999_computeValue0 },
                  { "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractAlfriend1999_computeValue1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractAlfriend1999_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractAlfriend1999_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractAlfriend1999::wrap_Object(PythonAbstractAlfriend1999(((t_PythonAbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractAlfriend1999 object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractAlfriend1999(a0));
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

              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args)
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

              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jdouble value;
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "ddd", (double) a0, (double) a1, (double) a2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "D", &value))
                {
                  throwTypeError("computeValue", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jdouble) 0;
              }

              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "OOO", o0, o1, o2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
                {
                  throwTypeError("computeValue", result);
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

              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FootprintOverlapDetector::class$ = NULL;
        jmethodID *FootprintOverlapDetector::mids$ = NULL;
        bool FootprintOverlapDetector::live$ = false;

        jclass FootprintOverlapDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FootprintOverlapDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8e55a16f0253c2cf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/geometry/fov/FieldOfView;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f2d25f6f71d01ca] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getFOV_6fdfc08762f52cd9] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getZone_17b2f5c9c3ed683f] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_create_62127083ddf4e895] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FootprintOverlapDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FootprintOverlapDetector::FootprintOverlapDetector(const ::org::orekit::geometry::fov::FieldOfView & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8e55a16f0253c2cf, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble FootprintOverlapDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::bodies::BodyShape FootprintOverlapDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f2d25f6f71d01ca]));
        }

        ::org::orekit::geometry::fov::FieldOfView FootprintOverlapDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_6fdfc08762f52cd9]));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet FootprintOverlapDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_17b2f5c9c3ed683f]));
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
        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args);
        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args);
        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data);
        static PyGetSetDef t_FootprintOverlapDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, body),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, fOV),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, zone),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FootprintOverlapDetector__methods_[] = {
          DECLARE_METHOD(t_FootprintOverlapDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getZone, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FootprintOverlapDetector)[] = {
          { Py_tp_methods, t_FootprintOverlapDetector__methods_ },
          { Py_tp_init, (void *) t_FootprintOverlapDetector_init_ },
          { Py_tp_getset, t_FootprintOverlapDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FootprintOverlapDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FootprintOverlapDetector, t_FootprintOverlapDetector, FootprintOverlapDetector);
        PyObject *t_FootprintOverlapDetector::wrap_Object(const FootprintOverlapDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FootprintOverlapDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FootprintOverlapDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FootprintOverlapDetector), &PY_TYPE_DEF(FootprintOverlapDetector), module, "FootprintOverlapDetector", 0);
        }

        void t_FootprintOverlapDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "class_", make_descriptor(FootprintOverlapDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "wrapfn_", make_descriptor(t_FootprintOverlapDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FootprintOverlapDetector::initializeClass, 1)))
            return NULL;
          return t_FootprintOverlapDetector::wrap_Object(FootprintOverlapDetector(((t_FootprintOverlapDetector *) arg)->object.this$));
        }
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FootprintOverlapDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::geometry::fov::FieldOfView a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          FootprintOverlapDetector object((jobject) NULL);

          if (!parseArgs(args, "kkKD", ::org::orekit::geometry::fov::FieldOfView::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a3))
          {
            INT_CALL(object = FootprintOverlapDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FootprintOverlapDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FootprintOverlapDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data)
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
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *ExtendedKalmanFilter::class$ = NULL;
          jmethodID *ExtendedKalmanFilter::mids$ = NULL;
          bool ExtendedKalmanFilter::live$ = false;

          jclass ExtendedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bc88388598771a87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/extended/NonLinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_d720d2299c73357d] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ExtendedKalmanFilter::ExtendedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_bc88388598771a87, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate ExtendedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_d720d2299c73357d], a0.this$));
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
    namespace filtering {
      namespace kalman {
        namespace extended {
          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args);
          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args);
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data);
          static PyGetSetDef t_ExtendedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ExtendedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ExtendedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_ExtendedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ExtendedKalmanFilter)[] = {
            { Py_tp_methods, t_ExtendedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_ExtendedKalmanFilter_init_ },
            { Py_tp_getset, t_ExtendedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ExtendedKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(ExtendedKalmanFilter, t_ExtendedKalmanFilter, ExtendedKalmanFilter);
          PyObject *t_ExtendedKalmanFilter::wrap_Object(const ExtendedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ExtendedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ExtendedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ExtendedKalmanFilter), &PY_TYPE_DEF(ExtendedKalmanFilter), module, "ExtendedKalmanFilter", 0);
          }

          void t_ExtendedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "class_", make_descriptor(ExtendedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "wrapfn_", make_descriptor(t_ExtendedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ExtendedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_ExtendedKalmanFilter::wrap_Object(ExtendedKalmanFilter(((t_ExtendedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ExtendedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ExtendedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_NonLinearProcess::parameters_, &a2))
            {
              INT_CALL(object = ExtendedKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ExtendedKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data)
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
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularCoordinates::class$ = NULL;
      jmethodID *AngularCoordinates::mids$ = NULL;
      bool AngularCoordinates::live$ = false;
      AngularCoordinates *AngularCoordinates::IDENTITY = NULL;

      jclass AngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_93243f17280cd27c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_c7213d7f3b4952c4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_b41e491e04b11d1e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ab901f2964604b53] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_6063ee1a397a70de] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_a73b464c97fbf565] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_fb16ffcb3278ad25] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_applyTo_42f03a1654758e56] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_d354398d2df6ac32] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_applyTo_1bd1ef8a7bbb7399] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_923313623a7fdc2f] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_d79d566761fbef0c] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_estimateRate_614e518be6bc5074] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getModifiedRodrigues_c62f25b3978e0d21] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[D");
          mids$[mid_getRotation_4d68cff5f6e4403a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_032312bdeb3f2f93] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_032312bdeb3f2f93] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_revert_76b9e5ce5fa05103] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_rotationShiftedBy_5199c191fa93e606] = env->getMethodID(cls, "rotationShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_shiftedBy_fc5d05a0e9c43705] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_subtractOffset_fb16ffcb3278ad25] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_6d38f548acbe7c0a] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_5c8e6f300713559c] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_5c8e6f300713559c] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new AngularCoordinates(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/AngularCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularCoordinates::AngularCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_93243f17280cd27c, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7213d7f3b4952c4, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b41e491e04b11d1e, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab901f2964604b53, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6063ee1a397a70de, a0.this$, a1.this$, a2.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a73b464c97fbf565, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      AngularCoordinates AngularCoordinates::addOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_fb16ffcb3278ad25], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_42f03a1654758e56], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_d354398d2df6ac32], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_1bd1ef8a7bbb7399], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_923313623a7fdc2f], a0.this$));
      }

      AngularCoordinates AngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_d79d566761fbef0c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_614e518be6bc5074], a0.this$, a1.this$, a2));
      }

      JArray< JArray< jdouble > > AngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_c62f25b3978e0d21], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_4d68cff5f6e4403a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_032312bdeb3f2f93]));
      }

      AngularCoordinates AngularCoordinates::revert() const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_76b9e5ce5fa05103]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::rotationShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_5199c191fa93e606], a0));
      }

      AngularCoordinates AngularCoordinates::shiftedBy(jdouble a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_fc5d05a0e9c43705], a0));
      }

      AngularCoordinates AngularCoordinates::subtractOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_fb16ffcb3278ad25], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_6d38f548acbe7c0a], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_5c8e6f300713559c]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_5c8e6f300713559c]));
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
      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args);
      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data);
      static PyGetSetDef t_AngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_AngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_AngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularCoordinates)[] = {
        { Py_tp_methods, t_AngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_AngularCoordinates_init_ },
        { Py_tp_getset, t_AngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AngularCoordinates, t_AngularCoordinates, AngularCoordinates);

      void t_AngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularCoordinates), &PY_TYPE_DEF(AngularCoordinates), module, "AngularCoordinates", 0);
      }

      void t_AngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "class_", make_descriptor(AngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "wrapfn_", make_descriptor(t_AngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "IDENTITY", make_descriptor(t_AngularCoordinates::wrap_Object(*AngularCoordinates::IDENTITY)));
      }

      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_AngularCoordinates::wrap_Object(AngularCoordinates(((t_AngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AngularCoordinates object((jobject) NULL);

            INT_CALL(object = AngularCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            jdouble a4;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::createFromModifiedRodrigues(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::estimateRate(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self)
      {
        AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool FieldAbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b744963488fb11c5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_77d14de7cb3c9585] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_d72d0265fbc6575b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_cb151471db4570f0] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_0b46fb1c546ea631] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b744963488fb11c5, a0, a1.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_77d14de7cb3c9585, a0, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d72d0265fbc6575b, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldAbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_b9dfc27d8c56b5de]));
      }

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_cb151471db4570f0]));
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
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator, t_FieldAbsolutePVCoordinatesHermiteInterpolator, FieldAbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const FieldAbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(FieldAbsolutePVCoordinatesHermiteInterpolator), module, "FieldAbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(FieldAbsolutePVCoordinatesHermiteInterpolator(((t_FieldAbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
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
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
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
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L2Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L2Frame::class$ = NULL;
      jmethodID *L2Frame::mids$ = NULL;
      bool L2Frame::live$ = false;

      jclass L2Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L2Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6a627f83556e9294] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L2Frame::L2Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_6a627f83556e9294, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L2Frame__methods_[] = {
        DECLARE_METHOD(t_L2Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L2Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L2Frame)[] = {
        { Py_tp_methods, t_L2Frame__methods_ },
        { Py_tp_init, (void *) t_L2Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L2Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L2Frame, t_L2Frame, L2Frame);

      void t_L2Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L2Frame), &PY_TYPE_DEF(L2Frame), module, "L2Frame", 0);
      }

      void t_L2Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "class_", make_descriptor(L2Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "wrapfn_", make_descriptor(t_L2Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L2Frame::initializeClass, 1)))
          return NULL;
        return t_L2Frame::wrap_Object(L2Frame(((t_L2Frame *) arg)->object.this$));
      }
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L2Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L2Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L2Frame(a0, a1));
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
#include "org/orekit/rugged/los/FixedZHomothety.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedZHomothety::class$ = NULL;
        jmethodID *FixedZHomothety::mids$ = NULL;
        bool FixedZHomothety::live$ = false;

        jclass FixedZHomothety::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedZHomothety");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a1c1c41794e71b1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_228f1c415ce966c1] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_abcb5ae819a3f86b] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedZHomothety::FixedZHomothety(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a1c1c41794e71b1, a0.this$, a1)) {}

        ::java::util::stream::Stream FixedZHomothety::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_11e4ca8182c1933d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_228f1c415ce966c1], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_abcb5ae819a3f86b], a0, a1.this$, a2.this$));
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
        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self);
        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args);
        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data);
        static PyGetSetDef t_FixedZHomothety__fields_[] = {
          DECLARE_GET_FIELD(t_FixedZHomothety, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedZHomothety__methods_[] = {
          DECLARE_METHOD(t_FixedZHomothety, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedZHomothety, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedZHomothety)[] = {
          { Py_tp_methods, t_FixedZHomothety__methods_ },
          { Py_tp_init, (void *) t_FixedZHomothety_init_ },
          { Py_tp_getset, t_FixedZHomothety__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedZHomothety)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedZHomothety, t_FixedZHomothety, FixedZHomothety);

        void t_FixedZHomothety::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedZHomothety), &PY_TYPE_DEF(FixedZHomothety), module, "FixedZHomothety", 0);
        }

        void t_FixedZHomothety::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "class_", make_descriptor(FixedZHomothety::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "wrapfn_", make_descriptor(t_FixedZHomothety::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedZHomothety::initializeClass, 1)))
            return NULL;
          return t_FixedZHomothety::wrap_Object(FixedZHomothety(((t_FixedZHomothety *) arg)->object.this$));
        }
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedZHomothety::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          FixedZHomothety object((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            INT_CALL(object = FixedZHomothety(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args)
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

        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D::class$ = NULL;
          jmethodID *Euclidean1D::mids$ = NULL;
          bool Euclidean1D::live$ = false;

          jclass Euclidean1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_5e8604308fdd6caa] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");
              mids$[mid_getSubSpace_a30bf0b437744017] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          Euclidean1D Euclidean1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_5e8604308fdd6caa]));
          }

          ::org::hipparchus::geometry::Space Euclidean1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_a30bf0b437744017]));
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
          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data);
          static PyGetSetDef t_Euclidean1D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean1D, dimension),
            DECLARE_GET_FIELD(t_Euclidean1D, instance),
            DECLARE_GET_FIELD(t_Euclidean1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean1D__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D)[] = {
            { Py_tp_methods, t_Euclidean1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean1D, t_Euclidean1D, Euclidean1D);

          void t_Euclidean1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D), &PY_TYPE_DEF(Euclidean1D), module, "Euclidean1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Euclidean1D$NoSubSpaceException)));
          }

          void t_Euclidean1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "class_", make_descriptor(Euclidean1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "wrapfn_", make_descriptor(t_Euclidean1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D::wrap_Object(Euclidean1D(((t_Euclidean1D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type)
          {
            Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Euclidean1D::getInstance());
            return t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data)
          {
            Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean1D::wrap_Object(value);
          }

          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldIntegratedEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldIntegratedEphemeris::class$ = NULL;
        jmethodID *FieldIntegratedEphemeris::mids$ = NULL;
        bool FieldIntegratedEphemeris::live$ = false;

        jclass FieldIntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldIntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_07450e81a75653f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/integration/FieldStateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/FieldDenseOutputModel;Lorg/orekit/utils/FieldArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_a74be2e38786f3b6] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMaxDate_1fea28374011eef5] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getMinDate_1fea28374011eef5] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getMass_cf010978f3c5a913] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_updateAdditionalStates_59bc90ab93a43079] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagateOrbit_78985b34baac5c8e] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_basicPropagate_fb689a9c0f30b938] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_resetIntermediateState_e90aea08a7a0ab5e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldIntegratedEphemeris::FieldIntegratedEphemeris(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::propagation::integration::FieldStateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::FieldDenseOutputModel & a5, const ::org::orekit::utils::FieldArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_07450e81a75653f5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame FieldIntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldIntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_a74be2e38786f3b6]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_1fea28374011eef5]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_1fea28374011eef5]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldIntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
        }

        ::java::util::List FieldIntegratedEphemeris::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        void FieldIntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
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
        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args);
        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data);
        static PyGetSetDef t_FieldIntegratedEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, minDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldIntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_FieldIntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldIntegratedEphemeris)[] = {
          { Py_tp_methods, t_FieldIntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_FieldIntegratedEphemeris_init_ },
          { Py_tp_getset, t_FieldIntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldIntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldIntegratedEphemeris, t_FieldIntegratedEphemeris, FieldIntegratedEphemeris);
        PyObject *t_FieldIntegratedEphemeris::wrap_Object(const FieldIntegratedEphemeris& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldIntegratedEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldIntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldIntegratedEphemeris), &PY_TYPE_DEF(FieldIntegratedEphemeris), module, "FieldIntegratedEphemeris", 0);
        }

        void t_FieldIntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "class_", make_descriptor(FieldIntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "wrapfn_", make_descriptor(t_FieldIntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldIntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_FieldIntegratedEphemeris::wrap_Object(FieldIntegratedEphemeris(((t_FieldIntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldIntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::propagation::integration::FieldStateMapper a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::FieldDenseOutputModel a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::orekit::utils::FieldArrayDictionary a6((jobject) NULL);
          PyTypeObject **p6;
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          FieldIntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK[s[I", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::FieldDenseOutputModel::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::propagation::integration::t_FieldStateMapper::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &p5, ::org::hipparchus::ode::t_FieldDenseOutputModel::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = FieldIntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/KlobucharIonoModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoModel::class$ = NULL;
          jmethodID *KlobucharIonoModel::mids$ = NULL;
          bool KlobucharIonoModel::live$ = false;

          jclass KlobucharIonoModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_24ca2746f3be6434] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_c84aeff9124fe654] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_d2f5e0e8b7e00e80] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_c3e1ecc00df5a08c] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;DDD[D)D");
              mids$[mid_pathDelay_090a1c7812c03bfb] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24ca2746f3be6434, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List KlobucharIonoModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_c84aeff9124fe654], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_d2f5e0e8b7e00e80], a0.this$, a1.this$, a2, a3.this$);
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jdouble a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_c3e1ecc00df5a08c], a0.this$, a1.this$, a2, a3, a4, a5.this$);
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, const JArray< ::org::hipparchus::CalculusFieldElement > & a5) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_090a1c7812c03bfb], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
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
          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self);
          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args);
          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data);
          static PyGetSetDef t_KlobucharIonoModel__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoModel__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoModel)[] = {
            { Py_tp_methods, t_KlobucharIonoModel__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoModel_init_ },
            { Py_tp_getset, t_KlobucharIonoModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoModel, t_KlobucharIonoModel, KlobucharIonoModel);

          void t_KlobucharIonoModel::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoModel), &PY_TYPE_DEF(KlobucharIonoModel), module, "KlobucharIonoModel", 0);
          }

          void t_KlobucharIonoModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "class_", make_descriptor(KlobucharIonoModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "wrapfn_", make_descriptor(t_KlobucharIonoModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoModel::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoModel::wrap_Object(KlobucharIonoModel(((t_KlobucharIonoModel *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1, a2));
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

          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 6:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                JArray< ::org::hipparchus::CalculusFieldElement > a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKD[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                jdouble a2;
                jdouble a3;
                jdouble a4;
                JArray< jdouble > a5((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkDDD[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2D::class$ = NULL;
          jmethodID *Vector2D::mids$ = NULL;
          bool Vector2D::live$ = false;
          Vector2D *Vector2D::MINUS_I = NULL;
          Vector2D *Vector2D::MINUS_J = NULL;
          Vector2D *Vector2D::NEGATIVE_INFINITY = NULL;
          Vector2D *Vector2D::NaN = NULL;
          Vector2D *Vector2D::PLUS_I = NULL;
          Vector2D *Vector2D::PLUS_J = NULL;
          Vector2D *Vector2D::POSITIVE_INFINITY = NULL;
          Vector2D *Vector2D::ZERO = NULL;

          jclass Vector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_17caf3ea31472651] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_208d350da024ec62] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_c408028e80098f1b] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_9333c632f204af9c] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_bf5660dd5343a17c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_add_128d62dd1c6c0a55] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_angle_36879f891eec9695] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_crossProduct_36879f891eec9695] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance_277cb62c4ec87155] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_36879f891eec9695] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance1_54eca2a6b3ac81a2] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_36879f891eec9695] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceInf_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_36879f891eec9695] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceSq_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_36879f891eec9695] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_dotProduct_54eca2a6b3ac81a2] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_72faff9b05f5ed5e] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_9981f74b2d109da6] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_9981f74b2d109da6] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_9981f74b2d109da6] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_a30bf0b437744017] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZero_0490d0574aafb07c] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_0490d0574aafb07c] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_orientation_143a69c4b35f658a] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_scalarMultiply_22e63043f272734b] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_bf5660dd5343a17c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_128d62dd1c6c0a55] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toArray_be783177b060994b] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aeac32100fe35ffe] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector2D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              MINUS_J = new Vector2D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NEGATIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NaN = new Vector2D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_I = new Vector2D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_J = new Vector2D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              POSITIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              ZERO = new Vector2D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2D::Vector2D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17caf3ea31472651, a0, a1.this$)) {}

          Vector2D::Vector2D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_208d350da024ec62, a0, a1.this$, a2, a3.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c408028e80098f1b, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5, jdouble a6, const Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9333c632f204af9c, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector2D Vector2D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_bf5660dd5343a17c], a0.this$));
          }

          Vector2D Vector2D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_128d62dd1c6c0a55], a0, a1.this$));
          }

          jdouble Vector2D::angle(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_36879f891eec9695], a0.this$, a1.this$);
          }

          jdouble Vector2D::crossProduct(const Vector2D & a0, const Vector2D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_crossProduct_36879f891eec9695], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_277cb62c4ec87155], a0.this$);
          }

          jdouble Vector2D::distance(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_36879f891eec9695], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector2D::distance1(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_36879f891eec9695], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector2D::distanceInf(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_36879f891eec9695], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector2D::distanceSq(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_36879f891eec9695], a0.this$, a1.this$);
          }

          jdouble Vector2D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_54eca2a6b3ac81a2], a0.this$);
          }

          jboolean Vector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jboolean Vector2D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_72faff9b05f5ed5e], a0.this$);
          }

          jdouble Vector2D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
          }

          jdouble Vector2D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_9981f74b2d109da6]);
          }

          jdouble Vector2D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_9981f74b2d109da6]);
          }

          jdouble Vector2D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::Space Vector2D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_a30bf0b437744017]));
          }

          jdouble Vector2D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
          }

          jdouble Vector2D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
          }

          Vector2D Vector2D::getZero() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_getZero_0490d0574aafb07c]));
          }

          jint Vector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean Vector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
          }

          jboolean Vector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
          }

          Vector2D Vector2D::negate() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_negate_0490d0574aafb07c]));
          }

          jdouble Vector2D::orientation(const Vector2D & a0, const Vector2D & a1, const Vector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_orientation_143a69c4b35f658a], a0.this$, a1.this$, a2.this$);
          }

          Vector2D Vector2D::scalarMultiply(jdouble a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_22e63043f272734b], a0));
          }

          Vector2D Vector2D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_bf5660dd5343a17c], a0.this$));
          }

          Vector2D Vector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_128d62dd1c6c0a55], a0, a1.this$));
          }

          JArray< jdouble > Vector2D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_be783177b060994b]));
          }

          ::java::lang::String Vector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          ::java::lang::String Vector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aeac32100fe35ffe], a0.this$));
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
          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_getNorm(t_Vector2D *self);
          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self);
          static PyObject *t_Vector2D_getSpace(t_Vector2D *self);
          static PyObject *t_Vector2D_getX(t_Vector2D *self);
          static PyObject *t_Vector2D_getY(t_Vector2D *self);
          static PyObject *t_Vector2D_getZero(t_Vector2D *self);
          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self);
          static PyObject *t_Vector2D_isNaN(t_Vector2D *self);
          static PyObject *t_Vector2D_negate(t_Vector2D *self);
          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_toArray(t_Vector2D *self);
          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data);
          static PyGetSetDef t_Vector2D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2D, infinite),
            DECLARE_GET_FIELD(t_Vector2D, naN),
            DECLARE_GET_FIELD(t_Vector2D, norm),
            DECLARE_GET_FIELD(t_Vector2D, norm1),
            DECLARE_GET_FIELD(t_Vector2D, normInf),
            DECLARE_GET_FIELD(t_Vector2D, normSq),
            DECLARE_GET_FIELD(t_Vector2D, space),
            DECLARE_GET_FIELD(t_Vector2D, x),
            DECLARE_GET_FIELD(t_Vector2D, y),
            DECLARE_GET_FIELD(t_Vector2D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2D__methods_[] = {
            DECLARE_METHOD(t_Vector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, distance, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2D)[] = {
            { Py_tp_methods, t_Vector2D__methods_ },
            { Py_tp_init, (void *) t_Vector2D_init_ },
            { Py_tp_getset, t_Vector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector2D, t_Vector2D, Vector2D);

          void t_Vector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2D), &PY_TYPE_DEF(Vector2D), module, "Vector2D", 0);
          }

          void t_Vector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "class_", make_descriptor(Vector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "wrapfn_", make_descriptor(t_Vector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NEGATIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NaN", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "POSITIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "ZERO", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::ZERO)));
          }

          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2D::initializeClass, 1)))
              return NULL;
            return t_Vector2D::wrap_Object(Vector2D(((t_Vector2D *) arg)->object.this$));
          }
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                jdouble a6;
                Vector2D a7((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.crossProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg)
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

          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg)
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

          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg)
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

          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg)
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

          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg)
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

          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg)
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

          static PyObject *t_Vector2D_getNorm(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getSpace(t_Vector2D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector2D_getX(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getY(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getZero(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_isNaN(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_negate(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            Vector2D a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::orientation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg)
          {
            jdouble a0;
            Vector2D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector2D_toArray(t_Vector2D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data)
          {
            Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericMappingFunction::class$ = NULL;
          jmethodID *IonosphericMappingFunction::mids$ = NULL;
          bool IonosphericMappingFunction::live$ = false;

          jclass IonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactor_bf28ed64d6e8576b] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_a3b854adede8eaaa] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble IonosphericMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_bf28ed64d6e8576b], a0);
          }

          ::org::hipparchus::CalculusFieldElement IonosphericMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_a3b854adede8eaaa], a0.this$));
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
          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args);

          static PyMethodDef t_IonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_IonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericMappingFunction)[] = {
            { Py_tp_methods, t_IonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IonosphericMappingFunction, t_IonosphericMappingFunction, IonosphericMappingFunction);

          void t_IonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericMappingFunction), &PY_TYPE_DEF(IonosphericMappingFunction), module, "IonosphericMappingFunction", 0);
          }

          void t_IonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "class_", make_descriptor(IonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "wrapfn_", make_descriptor(t_IonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_IonosphericMappingFunction::wrap_Object(IonosphericMappingFunction(((t_IonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractConstituentParser::class$ = NULL;
            jmethodID *AbstractConstituentParser::mids$ = NULL;
            bool AbstractConstituentParser::live$ = false;

            jclass AbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getConventions_635853a14837ea6f] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
                mids$[mid_getDataContext_66ee964ea58dd871] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
                mids$[mid_getHeader_a5bdfcd14307795f] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
                mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_isSimpleEOP_eee3de00fe971136] = env->getMethodID(cls, "isSimpleEOP", "()Z");
                mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AbstractConstituentParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
            }

            ::org::orekit::utils::IERSConventions AbstractConstituentParser::getConventions() const
            {
              return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_635853a14837ea6f]));
            }

            ::org::orekit::data::DataContext AbstractConstituentParser::getDataContext() const
            {
              return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_66ee964ea58dd871]));
            }

            ::org::orekit::files::ccsds::section::Header AbstractConstituentParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_a5bdfcd14307795f]));
            }

            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior AbstractConstituentParser::getParsedUnitsBehavior() const
            {
              return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7]));
            }

            jboolean AbstractConstituentParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::isSimpleEOP() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
            }

            jboolean AbstractConstituentParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
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
          namespace parsing {
            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args);
            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data);
            static PyGetSetDef t_AbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConstituentParser, conventions),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, dataContext),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, header),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parsedUnitsBehavior),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, simpleEOP),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_AbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getConventions, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getDataContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getParsedUnitsBehavior, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, isSimpleEOP, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareMetadata, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConstituentParser)[] = {
              { Py_tp_methods, t_AbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(AbstractConstituentParser, t_AbstractConstituentParser, AbstractConstituentParser);
            PyObject *t_AbstractConstituentParser::wrap_Object(const AbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConstituentParser), &PY_TYPE_DEF(AbstractConstituentParser), module, "AbstractConstituentParser", 0);
            }

            void t_AbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "class_", make_descriptor(AbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "wrapfn_", make_descriptor(t_AbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_AbstractConstituentParser::wrap_Object(AbstractConstituentParser(((t_AbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self)
            {
              ::org::orekit::utils::IERSConventions result((jobject) NULL);
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self)
            {
              ::org::orekit::data::DataContext result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
              OBJ_CALL(result = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSimpleEOP());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareMetadata());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::utils::IERSConventions value((jobject) NULL);
              OBJ_CALL(value = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::data::DataContext value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
              OBJ_CALL(value = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Add.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Add::class$ = NULL;
        jmethodID *Add::mids$ = NULL;
        bool Add::live$ = false;

        jclass Add::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Add");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Add::Add() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Add::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Add_value(t_Add *self, PyObject *args);

        static PyMethodDef t_Add__methods_[] = {
          DECLARE_METHOD(t_Add, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Add)[] = {
          { Py_tp_methods, t_Add__methods_ },
          { Py_tp_init, (void *) t_Add_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Add)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Add, t_Add, Add);

        void t_Add::install(PyObject *module)
        {
          installType(&PY_TYPE(Add), &PY_TYPE_DEF(Add), module, "Add", 0);
        }

        void t_Add::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "class_", make_descriptor(Add::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "wrapfn_", make_descriptor(t_Add::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Add::initializeClass, 1)))
            return NULL;
          return t_Add::wrap_Object(Add(((t_Add *) arg)->object.this$));
        }
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Add::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds)
        {
          Add object((jobject) NULL);

          INT_CALL(object = Add());
          self->object = object;

          return 0;
        }

        static PyObject *t_Add_value(t_Add *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
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
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckFieldTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckFieldTransformer::mids$ = NULL;
        bool AdamsNordsieckFieldTransformer::live$ = false;

        jclass AdamsNordsieckFieldTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_11df1b2d9879e5df] = env->getStaticMethodID(cls, "getInstance", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer;");
            mids$[mid_initializeHighOrderDerivatives_59a89abbfffc5f1c] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_51bcd4a8a90d8d6b] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_5846b27571ec7191] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckFieldTransformer AdamsNordsieckFieldTransformer::getInstance(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckFieldTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_11df1b2d9879e5df], a0.this$, a1));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::initializeHighOrderDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_59a89abbfffc5f1c], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_51bcd4a8a90d8d6b], a0.this$));
        }

        void AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_5846b27571ec7191], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data);
        static PyGetSetDef t_AdamsNordsieckFieldTransformer__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsNordsieckFieldTransformer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsNordsieckFieldTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, getInstance, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckFieldTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckFieldTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdamsNordsieckFieldTransformer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckFieldTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckFieldTransformer, t_AdamsNordsieckFieldTransformer, AdamsNordsieckFieldTransformer);
        PyObject *t_AdamsNordsieckFieldTransformer::wrap_Object(const AdamsNordsieckFieldTransformer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsNordsieckFieldTransformer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsNordsieckFieldTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckFieldTransformer), &PY_TYPE_DEF(AdamsNordsieckFieldTransformer), module, "AdamsNordsieckFieldTransformer", 0);
        }

        void t_AdamsNordsieckFieldTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "class_", make_descriptor(AdamsNordsieckFieldTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckFieldTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckFieldTransformer::wrap_Object(AdamsNordsieckFieldTransformer(((t_AdamsNordsieckFieldTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          AdamsNordsieckFieldTransformer result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckFieldTransformer::getInstance(a0, a1));
            return t_AdamsNordsieckFieldTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArgs(args, "K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataKey::class$ = NULL;
            jmethodID *CommonMetadataKey::mids$ = NULL;
            bool CommonMetadataKey::live$ = false;
            CommonMetadataKey *CommonMetadataKey::CENTER_NAME = NULL;
            CommonMetadataKey *CommonMetadataKey::OBJECT_ID = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME_EPOCH = NULL;

            jclass CommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_245fc75ea43a4a8e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;)Z");
                mids$[mid_valueOf_d73686f76a80faa8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");
                mids$[mid_values_0c07b94e54ede357] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new CommonMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                OBJECT_ID = new CommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME_EPOCH = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_245fc75ea43a4a8e], a0.this$, a1.this$, a2.this$);
            }

            CommonMetadataKey CommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d73686f76a80faa8], a0.this$));
            }

            JArray< CommonMetadataKey > CommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0c07b94e54ede357]));
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
            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data);
            static PyGetSetDef t_CommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataKey)[] = {
              { Py_tp_methods, t_CommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CommonMetadataKey, t_CommonMetadataKey, CommonMetadataKey);
            PyObject *t_CommonMetadataKey::wrap_Object(const CommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataKey), &PY_TYPE_DEF(CommonMetadataKey), module, "CommonMetadataKey", 0);
            }

            void t_CommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "class_", make_descriptor(CommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "wrapfn_", make_descriptor(t_CommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "CENTER_NAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "OBJECT_ID", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::OBJECT_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME_EPOCH", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME_EPOCH)));
            }

            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataKey::wrap_Object(CommonMetadataKey(((t_CommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::valueOf(a0));
                return t_CommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< CommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Calibration::class$ = NULL;
        jmethodID *CRD$Calibration::mids$ = NULL;
        bool CRD$Calibration::live$ = false;

        jclass CRD$Calibration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Calibration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6c7b9069bc71a9b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDelayShift_9981f74b2d109da6] = env->getMethodID(cls, "getDelayShift", "()D");
            mids$[mid_getDetectorChannel_d6ab429752e7c267] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getKurtosis_9981f74b2d109da6] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getNumberOfPointsRecorded_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfPointsRecorded", "()I");
            mids$[mid_getNumberOfPointsUsed_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfPointsUsed", "()I");
            mids$[mid_getOneWayDistance_9981f74b2d109da6] = env->getMethodID(cls, "getOneWayDistance", "()D");
            mids$[mid_getPeakMinusMean_9981f74b2d109da6] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getReturnRate_9981f74b2d109da6] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getRms_9981f74b2d109da6] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getShiftTypeIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getShiftTypeIndicator", "()I");
            mids$[mid_getSkew_9981f74b2d109da6] = env->getMethodID(cls, "getSkew", "()D");
            mids$[mid_getSpan_d6ab429752e7c267] = env->getMethodID(cls, "getSpan", "()I");
            mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getSystemDelay_9981f74b2d109da6] = env->getMethodID(cls, "getSystemDelay", "()D");
            mids$[mid_getTypeIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getTypeIndicator", "()I");
            mids$[mid_getTypeOfData_d6ab429752e7c267] = env->getMethodID(cls, "getTypeOfData", "()I");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Calibration::CRD$Calibration(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c7b9069bc71a9b1, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::org::orekit::time::AbsoluteDate CRD$Calibration::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jdouble CRD$Calibration::getDelayShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDelayShift_9981f74b2d109da6]);
        }

        jint CRD$Calibration::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_d6ab429752e7c267]);
        }

        jdouble CRD$Calibration::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_9981f74b2d109da6]);
        }

        jint CRD$Calibration::getNumberOfPointsRecorded() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsRecorded_d6ab429752e7c267]);
        }

        jint CRD$Calibration::getNumberOfPointsUsed() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsUsed_d6ab429752e7c267]);
        }

        jdouble CRD$Calibration::getOneWayDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOneWayDistance_9981f74b2d109da6]);
        }

        jdouble CRD$Calibration::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_9981f74b2d109da6]);
        }

        jdouble CRD$Calibration::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_9981f74b2d109da6]);
        }

        jdouble CRD$Calibration::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_9981f74b2d109da6]);
        }

        jint CRD$Calibration::getShiftTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getShiftTypeIndicator_d6ab429752e7c267]);
        }

        jdouble CRD$Calibration::getSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkew_9981f74b2d109da6]);
        }

        jint CRD$Calibration::getSpan() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpan_d6ab429752e7c267]);
        }

        ::java::lang::String CRD$Calibration::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e]));
        }

        jdouble CRD$Calibration::getSystemDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSystemDelay_9981f74b2d109da6]);
        }

        jint CRD$Calibration::getTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeIndicator_d6ab429752e7c267]);
        }

        jint CRD$Calibration::getTypeOfData() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeOfData_d6ab429752e7c267]);
        }

        ::java::lang::String CRD$Calibration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$Calibration::toString() const
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
        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args);
        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data);
        static PyGetSetDef t_CRD$Calibration__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Calibration, date),
          DECLARE_GET_FIELD(t_CRD$Calibration, delayShift),
          DECLARE_GET_FIELD(t_CRD$Calibration, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$Calibration, kurtosis),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsRecorded),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsUsed),
          DECLARE_GET_FIELD(t_CRD$Calibration, oneWayDistance),
          DECLARE_GET_FIELD(t_CRD$Calibration, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$Calibration, returnRate),
          DECLARE_GET_FIELD(t_CRD$Calibration, rms),
          DECLARE_GET_FIELD(t_CRD$Calibration, shiftTypeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, skew),
          DECLARE_GET_FIELD(t_CRD$Calibration, span),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemDelay),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeOfData),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Calibration__methods_[] = {
          DECLARE_METHOD(t_CRD$Calibration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDelayShift, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsRecorded, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsUsed, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getOneWayDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getShiftTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSpan, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemDelay, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeOfData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Calibration)[] = {
          { Py_tp_methods, t_CRD$Calibration__methods_ },
          { Py_tp_init, (void *) t_CRD$Calibration_init_ },
          { Py_tp_getset, t_CRD$Calibration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Calibration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Calibration, t_CRD$Calibration, CRD$Calibration);

        void t_CRD$Calibration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Calibration), &PY_TYPE_DEF(CRD$Calibration), module, "CRD$Calibration", 0);
        }

        void t_CRD$Calibration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "class_", make_descriptor(CRD$Calibration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "wrapfn_", make_descriptor(t_CRD$Calibration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Calibration::initializeClass, 1)))
            return NULL;
          return t_CRD$Calibration::wrap_Object(CRD$Calibration(((t_CRD$Calibration *) arg)->object.this$));
        }
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Calibration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$Calibration object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$Calibration(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDelayShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpan());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeOfData());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$Calibration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDelayShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpan());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeOfData());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/ZipfDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *ZipfDistribution::class$ = NULL;
        jmethodID *ZipfDistribution::mids$ = NULL;
        bool ZipfDistribution::live$ = false;

        jclass ZipfDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/ZipfDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getExponent_9981f74b2d109da6] = env->getMethodID(cls, "getExponent", "()D");
            mids$[mid_getNumberOfElements_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfElements", "()I");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_calculateNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "calculateNumericalMean", "()D");
            mids$[mid_calculateNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "calculateNumericalVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ZipfDistribution::ZipfDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

        jdouble ZipfDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jdouble ZipfDistribution::getExponent() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getExponent_9981f74b2d109da6]);
        }

        jint ZipfDistribution::getNumberOfElements() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfElements_d6ab429752e7c267]);
        }

        jdouble ZipfDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble ZipfDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jint ZipfDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint ZipfDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jboolean ZipfDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble ZipfDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
        }

        jdouble ZipfDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
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
      namespace discrete {
        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data);
        static PyGetSetDef t_ZipfDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ZipfDistribution, exponent),
          DECLARE_GET_FIELD(t_ZipfDistribution, numberOfElements),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ZipfDistribution__methods_[] = {
          DECLARE_METHOD(t_ZipfDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumberOfElements, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ZipfDistribution)[] = {
          { Py_tp_methods, t_ZipfDistribution__methods_ },
          { Py_tp_init, (void *) t_ZipfDistribution_init_ },
          { Py_tp_getset, t_ZipfDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ZipfDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(ZipfDistribution, t_ZipfDistribution, ZipfDistribution);

        void t_ZipfDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ZipfDistribution), &PY_TYPE_DEF(ZipfDistribution), module, "ZipfDistribution", 0);
        }

        void t_ZipfDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "class_", make_descriptor(ZipfDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "wrapfn_", make_descriptor(t_ZipfDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ZipfDistribution::initializeClass, 1)))
            return NULL;
          return t_ZipfDistribution::wrap_Object(ZipfDistribution(((t_ZipfDistribution *) arg)->object.this$));
        }
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ZipfDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          ZipfDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = ZipfDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getExponent());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfElements());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getExponent());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfElements());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *NelderMeadSimplex::class$ = NULL;
            jmethodID *NelderMeadSimplex::mids$ = NULL;
            bool NelderMeadSimplex::live$ = false;

            jclass NelderMeadSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_62f39157f73b7444] = env->getMethodID(cls, "<init>", "([DDDDD)V");
                mids$[mid_init$_f6c604f2b911dbbf] = env->getMethodID(cls, "<init>", "([[DDDDD)V");
                mids$[mid_init$_a1282fa5ba2ed7b2] = env->getMethodID(cls, "<init>", "(IDDDD)V");
                mids$[mid_init$_7af3e591f794c538] = env->getMethodID(cls, "<init>", "(IDDDDD)V");
                mids$[mid_iterate_db1894c33fb140cf] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_62f39157f73b7444, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_f6c604f2b911dbbf, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_a1282fa5ba2ed7b2, a0, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_7af3e591f794c538, a0, a1, a2, a3, a4, a5)) {}

            void NelderMeadSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_db1894c33fb140cf], a0.this$, a1.this$);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args);

            static PyMethodDef t_NelderMeadSimplex__methods_[] = {
              DECLARE_METHOD(t_NelderMeadSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NelderMeadSimplex)[] = {
              { Py_tp_methods, t_NelderMeadSimplex__methods_ },
              { Py_tp_init, (void *) t_NelderMeadSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NelderMeadSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(NelderMeadSimplex, t_NelderMeadSimplex, NelderMeadSimplex);

            void t_NelderMeadSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(NelderMeadSimplex), &PY_TYPE_DEF(NelderMeadSimplex), module, "NelderMeadSimplex", 0);
            }

            void t_NelderMeadSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "class_", make_descriptor(NelderMeadSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "wrapfn_", make_descriptor(t_NelderMeadSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NelderMeadSimplex::initializeClass, 1)))
                return NULL;
              return t_NelderMeadSimplex::wrap_Object(NelderMeadSimplex(((t_NelderMeadSimplex *) arg)->object.this$));
            }
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NelderMeadSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4, a5));
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

            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(NelderMeadSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor::class$ = NULL;
        jmethodID *BSPTreeVisitor::mids$ = NULL;
        bool BSPTreeVisitor::live$ = false;

        jclass BSPTreeVisitor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_visitInternalNode_f5df8cefa4689121] = env->getMethodID(cls, "visitInternalNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitLeafNode_f5df8cefa4689121] = env->getMethodID(cls, "visitLeafNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitOrder_6d9d99e5d696c4f5] = env->getMethodID(cls, "visitOrder", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BSPTreeVisitor::visitInternalNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitInternalNode_f5df8cefa4689121], a0.this$);
        }

        void BSPTreeVisitor::visitLeafNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitLeafNode_f5df8cefa4689121], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order BSPTreeVisitor::visitOrder(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order(env->callObjectMethod(this$, mids$[mid_visitOrder_6d9d99e5d696c4f5], a0.this$));
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
        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor, visitInternalNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitLeafNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitOrder, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor)[] = {
          { Py_tp_methods, t_BSPTreeVisitor__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor, t_BSPTreeVisitor, BSPTreeVisitor);
        PyObject *t_BSPTreeVisitor::wrap_Object(const BSPTreeVisitor& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor), &PY_TYPE_DEF(BSPTreeVisitor), module, "BSPTreeVisitor", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "Order", make_descriptor(&PY_TYPE_DEF(BSPTreeVisitor$Order)));
        }

        void t_BSPTreeVisitor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "class_", make_descriptor(BSPTreeVisitor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "wrapfn_", make_descriptor(t_BSPTreeVisitor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor::wrap_Object(BSPTreeVisitor(((t_BSPTreeVisitor *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitInternalNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitInternalNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitLeafNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitLeafNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.visitOrder(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "visitOrder", arg);
          return NULL;
        }
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationDetector::class$ = NULL;
        jmethodID *FieldElevationDetector::mids$ = NULL;
        bool FieldElevationDetector::live$ = false;

        jclass FieldElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_436068c1e3731f99] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_81061941a46d050d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevationMask_6e01f84e52d7314a] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_9981f74b2d109da6] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_426fe98fa4f4b893] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_d0e5c3c9d5578806] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_fef41422b7c30441] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withElevationMask_a25b97231c4f33fc] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withRefraction_0ec508eb922ace36] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_create_513df2e4a69421da] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_436068c1e3731f99, a0.this$, a1.this$)) {}

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_81061941a46d050d, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::utils::ElevationMask FieldElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_6e01f84e52d7314a]));
        }

        jdouble FieldElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_9981f74b2d109da6]);
        }

        ::org::orekit::models::AtmosphericRefractionModel FieldElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_426fe98fa4f4b893]));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_d0e5c3c9d5578806]));
        }

        FieldElevationDetector FieldElevationDetector::withConstantElevation(jdouble a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_fef41422b7c30441], a0));
        }

        FieldElevationDetector FieldElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_a25b97231c4f33fc], a0.this$));
        }

        FieldElevationDetector FieldElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_0ec508eb922ace36], a0.this$));
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
        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args);
        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args);
        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data);
        static PyGetSetDef t_FieldElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_FieldElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_FieldElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_FieldElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationDetector)[] = {
          { Py_tp_methods, t_FieldElevationDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationDetector_init_ },
          { Py_tp_getset, t_FieldElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationDetector, t_FieldElevationDetector, FieldElevationDetector);
        PyObject *t_FieldElevationDetector::wrap_Object(const FieldElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationDetector), &PY_TYPE_DEF(FieldElevationDetector), module, "FieldElevationDetector", 0);
        }

        void t_FieldElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "class_", make_descriptor(FieldElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "wrapfn_", make_descriptor(t_FieldElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationDetector::wrap_Object(FieldElevationDetector(((t_FieldElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data)
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
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
            mids$[mid_estimationStep_a6cfa97380122d5a] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_87799e9d173bae53] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_2002169216358a3a] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e73dd18a212e3cd0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_a6cfa97380122d5a], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_87799e9d173bae53], a0.this$));
        }

        void UnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_2002169216358a3a], a0.this$);
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
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientField::class$ = NULL;
        jmethodID *GradientField::mids$ = NULL;
        bool GradientField::live$ = false;

        jclass GradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_a9b016a0e8d69230] = env->getStaticMethodID(cls, "getField", "(I)Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getOne_9d89382e9667f8f2] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_9d89382e9667f8f2] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean GradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        GradientField GradientField::getField(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_a9b016a0e8d69230], a0));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getOne_9d89382e9667f8f2]));
        }

        ::java::lang::Class GradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getZero_9d89382e9667f8f2]));
        }

        jint GradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_getOne(t_GradientField *self);
        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self);
        static PyObject *t_GradientField_getZero(t_GradientField *self);
        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data);
        static PyGetSetDef t_GradientField__fields_[] = {
          DECLARE_GET_FIELD(t_GradientField, one),
          DECLARE_GET_FIELD(t_GradientField, runtimeClass),
          DECLARE_GET_FIELD(t_GradientField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GradientField__methods_[] = {
          DECLARE_METHOD(t_GradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_GradientField, getField, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientField)[] = {
          { Py_tp_methods, t_GradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientField, t_GradientField, GradientField);

        void t_GradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientField), &PY_TYPE_DEF(GradientField), module, "GradientField", 0);
        }

        void t_GradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "class_", make_descriptor(GradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "wrapfn_", make_descriptor(t_GradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientField::initializeClass, 1)))
            return NULL;
          return t_GradientField::wrap_Object(GradientField(((t_GradientField *) arg)->object.this$));
        }
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          GradientField result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::GradientField::getField(a0));
            return t_GradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", arg);
          return NULL;
        }

        static PyObject *t_GradientField_getOne(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GradientField_getZero(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractVariableStepFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractVariableStepFieldIntegratorBuilder, t_AbstractVariableStepFieldIntegratorBuilder, AbstractVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractVariableStepFieldIntegratorBuilder), module, "AbstractVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(AbstractVariableStepFieldIntegratorBuilder(((t_AbstractVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader$LineParameters::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader$LineParameters::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader$LineParameters::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_8b843ae7da66c9f6] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getAp_9981f74b2d109da6] = env->getMethodID(cls, "getAp", "()D");
                mids$[mid_getF107_9981f74b2d109da6] = env->getMethodID(cls, "getF107", "()D");
                mids$[mid_getFileDate_70bc100457881a79] = env->getMethodID(cls, "getFileDate", "()Lorg/orekit/time/DateComponents;");
                mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_8b843ae7da66c9f6], a0.this$);
            }

            jboolean MarshallSolarActivityFutureEstimationLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getAp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAp_9981f74b2d109da6]);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getF107() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107_9981f74b2d109da6]);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimationLoader$LineParameters::getFileDate() const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_70bc100457881a79]));
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, ap),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, f107),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, fileDate),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getAp, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getF107, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getFileDate, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters, t_MarshallSolarActivityFutureEstimationLoader$LineParameters, MarshallSolarActivityFutureEstimationLoader$LineParameters);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(const MarshallSolarActivityFutureEstimationLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters), module, "MarshallSolarActivityFutureEstimationLoader$LineParameters", 0);
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(MarshallSolarActivityFutureEstimationLoader$LineParameters(((t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              ::org::orekit::time::DateComponents result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAp());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::DateComponents value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationConvention::class$ = NULL;
          jmethodID *RotationConvention::mids$ = NULL;
          bool RotationConvention::live$ = false;
          RotationConvention *RotationConvention::FRAME_TRANSFORM = NULL;
          RotationConvention *RotationConvention::VECTOR_OPERATOR = NULL;

          jclass RotationConvention::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationConvention");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_4aa4524e59c95335] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");
              mids$[mid_values_82f23c5ac7cdf039] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FRAME_TRANSFORM = new RotationConvention(env->getStaticObjectField(cls, "FRAME_TRANSFORM", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              VECTOR_OPERATOR = new RotationConvention(env->getStaticObjectField(cls, "VECTOR_OPERATOR", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RotationConvention RotationConvention::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationConvention(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4aa4524e59c95335], a0.this$));
          }

          JArray< RotationConvention > RotationConvention::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationConvention >(env->callStaticObjectMethod(cls, mids$[mid_values_82f23c5ac7cdf039]));
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
          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args);
          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationConvention_values(PyTypeObject *type);
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data);
          static PyGetSetDef t_RotationConvention__fields_[] = {
            DECLARE_GET_FIELD(t_RotationConvention, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationConvention__methods_[] = {
            DECLARE_METHOD(t_RotationConvention, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationConvention, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationConvention)[] = {
            { Py_tp_methods, t_RotationConvention__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationConvention__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationConvention)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationConvention, t_RotationConvention, RotationConvention);
          PyObject *t_RotationConvention::wrap_Object(const RotationConvention& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationConvention::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationConvention::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationConvention), &PY_TYPE_DEF(RotationConvention), module, "RotationConvention", 0);
          }

          void t_RotationConvention::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "class_", make_descriptor(RotationConvention::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "wrapfn_", make_descriptor(t_RotationConvention::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationConvention::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "FRAME_TRANSFORM", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::FRAME_TRANSFORM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "VECTOR_OPERATOR", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::VECTOR_OPERATOR)));
          }

          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationConvention::initializeClass, 1)))
              return NULL;
            return t_RotationConvention::wrap_Object(RotationConvention(((t_RotationConvention *) arg)->object.this$));
          }
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationConvention::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationConvention result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::valueOf(a0));
              return t_RotationConvention::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationConvention_values(PyTypeObject *type)
          {
            JArray< RotationConvention > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::values());
            return JArray<jobject>(result.this$).wrap(t_RotationConvention::wrap_jobject);
          }
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_5ac4dac69cfaea0e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_a89d7889c8c6100d] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_91f4c05bf9eab1a6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(const ::java::lang::String & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_5ac4dac69cfaea0e, a0.this$, a1.this$, a2)) {}

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
              }

              jlong PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
              }

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), module, "PythonAbstractShortTermEncounter1DNumerical2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0 },
                  { "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(((t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                jint a2;
                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "skI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(a0, a1, a2));
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

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::FieldUnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOOi", o0, o1, o2, o3, o4, o5, (int) a6);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_UnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::UnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "dddddOi", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4, o5, (int) a6);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data)
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
  }
}
