#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ZeisModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ZeisModel::class$ = NULL;
            jmethodID *ZeisModel::mids$ = NULL;
            bool ZeisModel::live$ = false;

            jclass ZeisModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ZeisModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeC2Z_68d64f9221cf9db4] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)D");
                mids$[mid_computeC2Z_1731376d8d9e3d78] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_9e21a8e72403ad02] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_4a156b883cf16de2] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ZeisModel::ZeisModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_computeC2Z_68d64f9221cf9db4], a0.this$);
            }

            ::org::hipparchus::CalculusFieldElement ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeC2Z_1731376d8d9e3d78], a0.this$));
            }

            JArray< jdouble > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_9e21a8e72403ad02], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_4a156b883cf16de2], a0.this$));
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
            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args);
            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args);

            static PyMethodDef t_ZeisModel__methods_[] = {
              DECLARE_METHOD(t_ZeisModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, computeC2Z, METH_VARARGS),
              DECLARE_METHOD(t_ZeisModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ZeisModel)[] = {
              { Py_tp_methods, t_ZeisModel__methods_ },
              { Py_tp_init, (void *) t_ZeisModel_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ZeisModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ZeisModel, t_ZeisModel, ZeisModel);

            void t_ZeisModel::install(PyObject *module)
            {
              installType(&PY_TYPE(ZeisModel), &PY_TYPE_DEF(ZeisModel), module, "ZeisModel", 0);
            }

            void t_ZeisModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "class_", make_descriptor(ZeisModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "wrapfn_", make_descriptor(t_ZeisModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ZeisModel::initializeClass, 1)))
                return NULL;
              return t_ZeisModel::wrap_Object(ZeisModel(((t_ZeisModel *) arg)->object.this$));
            }
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ZeisModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds)
            {
              ZeisModel object((jobject) NULL);

              INT_CALL(object = ZeisModel());
              self->object = object;

              return 0;
            }

            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  jdouble result;

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeC2Z", args);
              return NULL;
            }

            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3c7040adbf9e5f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeIonosphericDelayModifier::BistaticRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_c3c7040adbf9e5f8, a0.this$, a1)) {}

          void BistaticRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void BistaticRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeIonosphericDelayModifier, t_BistaticRangeIonosphericDelayModifier, BistaticRangeIonosphericDelayModifier);

          void t_BistaticRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeIonosphericDelayModifier), module, "BistaticRangeIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeIonosphericDelayModifier::wrap_Object(BistaticRangeIonosphericDelayModifier(((t_BistaticRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
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
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableFunction::mids$ = NULL;
        bool MultivariateDifferentiableFunction::live$ = false;

        jclass MultivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_a789982882efd99b] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure MultivariateDifferentiableFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_value_a789982882efd99b], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableFunction, t_MultivariateDifferentiableFunction, MultivariateDifferentiableFunction);

        void t_MultivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableFunction), &PY_TYPE_DEF(MultivariateDifferentiableFunction), module, "MultivariateDifferentiableFunction", 0);
        }

        void t_MultivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "class_", make_descriptor(MultivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableFunction::wrap_Object(MultivariateDifferentiableFunction(((t_MultivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
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
            mids$[mid_currentInterval_a17ea857ce74d258] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_a17ea857ce74d258], a0.this$);
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
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_bd9461ad5f4f91dd] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_bd9461ad5f4f91dd], a0.this$);
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
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;
      Frequency *Frequency::B01 = NULL;
      Frequency *Frequency::B02 = NULL;
      Frequency *Frequency::B03 = NULL;
      Frequency *Frequency::B08 = NULL;
      Frequency *Frequency::B1A = NULL;
      Frequency *Frequency::B1C = NULL;
      Frequency *Frequency::B2A = NULL;
      Frequency *Frequency::B2B = NULL;
      Frequency *Frequency::B3A = NULL;
      Frequency *Frequency::C01 = NULL;
      Frequency *Frequency::C02 = NULL;
      Frequency *Frequency::C05 = NULL;
      Frequency *Frequency::C06 = NULL;
      Frequency *Frequency::C07 = NULL;
      Frequency *Frequency::C08 = NULL;
      Frequency *Frequency::E01 = NULL;
      Frequency *Frequency::E05 = NULL;
      Frequency *Frequency::E06 = NULL;
      Frequency *Frequency::E07 = NULL;
      Frequency *Frequency::E08 = NULL;
      jdouble Frequency::F0 = (jdouble) 0;
      Frequency *Frequency::G01 = NULL;
      Frequency *Frequency::G02 = NULL;
      Frequency *Frequency::G05 = NULL;
      Frequency *Frequency::I05 = NULL;
      Frequency *Frequency::I09 = NULL;
      Frequency *Frequency::J01 = NULL;
      Frequency *Frequency::J02 = NULL;
      Frequency *Frequency::J05 = NULL;
      Frequency *Frequency::J06 = NULL;
      Frequency *Frequency::R01 = NULL;
      Frequency *Frequency::R02 = NULL;
      Frequency *Frequency::R03 = NULL;
      Frequency *Frequency::R04 = NULL;
      Frequency *Frequency::R06 = NULL;
      Frequency *Frequency::S01 = NULL;
      Frequency *Frequency::S05 = NULL;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMHzFrequency_b74f83833fdad017] = env->getMethodID(cls, "getMHzFrequency", "()D");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getRatio_b74f83833fdad017] = env->getMethodID(cls, "getRatio", "()D");
          mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getWavelength_b74f83833fdad017] = env->getMethodID(cls, "getWavelength", "()D");
          mids$[mid_valueOf_572e5211bb5806db] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_values_5ed00b86a3a6d446] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/Frequency;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          B01 = new Frequency(env->getStaticObjectField(cls, "B01", "Lorg/orekit/gnss/Frequency;"));
          B02 = new Frequency(env->getStaticObjectField(cls, "B02", "Lorg/orekit/gnss/Frequency;"));
          B03 = new Frequency(env->getStaticObjectField(cls, "B03", "Lorg/orekit/gnss/Frequency;"));
          B08 = new Frequency(env->getStaticObjectField(cls, "B08", "Lorg/orekit/gnss/Frequency;"));
          B1A = new Frequency(env->getStaticObjectField(cls, "B1A", "Lorg/orekit/gnss/Frequency;"));
          B1C = new Frequency(env->getStaticObjectField(cls, "B1C", "Lorg/orekit/gnss/Frequency;"));
          B2A = new Frequency(env->getStaticObjectField(cls, "B2A", "Lorg/orekit/gnss/Frequency;"));
          B2B = new Frequency(env->getStaticObjectField(cls, "B2B", "Lorg/orekit/gnss/Frequency;"));
          B3A = new Frequency(env->getStaticObjectField(cls, "B3A", "Lorg/orekit/gnss/Frequency;"));
          C01 = new Frequency(env->getStaticObjectField(cls, "C01", "Lorg/orekit/gnss/Frequency;"));
          C02 = new Frequency(env->getStaticObjectField(cls, "C02", "Lorg/orekit/gnss/Frequency;"));
          C05 = new Frequency(env->getStaticObjectField(cls, "C05", "Lorg/orekit/gnss/Frequency;"));
          C06 = new Frequency(env->getStaticObjectField(cls, "C06", "Lorg/orekit/gnss/Frequency;"));
          C07 = new Frequency(env->getStaticObjectField(cls, "C07", "Lorg/orekit/gnss/Frequency;"));
          C08 = new Frequency(env->getStaticObjectField(cls, "C08", "Lorg/orekit/gnss/Frequency;"));
          E01 = new Frequency(env->getStaticObjectField(cls, "E01", "Lorg/orekit/gnss/Frequency;"));
          E05 = new Frequency(env->getStaticObjectField(cls, "E05", "Lorg/orekit/gnss/Frequency;"));
          E06 = new Frequency(env->getStaticObjectField(cls, "E06", "Lorg/orekit/gnss/Frequency;"));
          E07 = new Frequency(env->getStaticObjectField(cls, "E07", "Lorg/orekit/gnss/Frequency;"));
          E08 = new Frequency(env->getStaticObjectField(cls, "E08", "Lorg/orekit/gnss/Frequency;"));
          F0 = env->getStaticDoubleField(cls, "F0");
          G01 = new Frequency(env->getStaticObjectField(cls, "G01", "Lorg/orekit/gnss/Frequency;"));
          G02 = new Frequency(env->getStaticObjectField(cls, "G02", "Lorg/orekit/gnss/Frequency;"));
          G05 = new Frequency(env->getStaticObjectField(cls, "G05", "Lorg/orekit/gnss/Frequency;"));
          I05 = new Frequency(env->getStaticObjectField(cls, "I05", "Lorg/orekit/gnss/Frequency;"));
          I09 = new Frequency(env->getStaticObjectField(cls, "I09", "Lorg/orekit/gnss/Frequency;"));
          J01 = new Frequency(env->getStaticObjectField(cls, "J01", "Lorg/orekit/gnss/Frequency;"));
          J02 = new Frequency(env->getStaticObjectField(cls, "J02", "Lorg/orekit/gnss/Frequency;"));
          J05 = new Frequency(env->getStaticObjectField(cls, "J05", "Lorg/orekit/gnss/Frequency;"));
          J06 = new Frequency(env->getStaticObjectField(cls, "J06", "Lorg/orekit/gnss/Frequency;"));
          R01 = new Frequency(env->getStaticObjectField(cls, "R01", "Lorg/orekit/gnss/Frequency;"));
          R02 = new Frequency(env->getStaticObjectField(cls, "R02", "Lorg/orekit/gnss/Frequency;"));
          R03 = new Frequency(env->getStaticObjectField(cls, "R03", "Lorg/orekit/gnss/Frequency;"));
          R04 = new Frequency(env->getStaticObjectField(cls, "R04", "Lorg/orekit/gnss/Frequency;"));
          R06 = new Frequency(env->getStaticObjectField(cls, "R06", "Lorg/orekit/gnss/Frequency;"));
          S01 = new Frequency(env->getStaticObjectField(cls, "S01", "Lorg/orekit/gnss/Frequency;"));
          S05 = new Frequency(env->getStaticObjectField(cls, "S05", "Lorg/orekit/gnss/Frequency;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Frequency::getMHzFrequency() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMHzFrequency_b74f83833fdad017]);
      }

      ::java::lang::String Frequency::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble Frequency::getRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRatio_b74f83833fdad017]);
      }

      ::org::orekit::gnss::SatelliteSystem Frequency::getSatelliteSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
      }

      jdouble Frequency::getWavelength() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWavelength_b74f83833fdad017]);
      }

      Frequency Frequency::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Frequency(env->callStaticObjectMethod(cls, mids$[mid_valueOf_572e5211bb5806db], a0.this$));
      }

      JArray< Frequency > Frequency::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Frequency >(env->callStaticObjectMethod(cls, mids$[mid_values_5ed00b86a3a6d446]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self);
      static PyObject *t_Frequency_getName(t_Frequency *self);
      static PyObject *t_Frequency_getRatio(t_Frequency *self);
      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self);
      static PyObject *t_Frequency_getWavelength(t_Frequency *self);
      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frequency_values(PyTypeObject *type);
      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mHzFrequency),
        DECLARE_GET_FIELD(t_Frequency, name),
        DECLARE_GET_FIELD(t_Frequency, ratio),
        DECLARE_GET_FIELD(t_Frequency, satelliteSystem),
        DECLARE_GET_FIELD(t_Frequency, wavelength),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getMHzFrequency, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getRatio, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getSatelliteSystem, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getWavelength, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Frequency, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
        env->getClass(Frequency::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B01", make_descriptor(t_Frequency::wrap_Object(*Frequency::B01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B02", make_descriptor(t_Frequency::wrap_Object(*Frequency::B02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B03", make_descriptor(t_Frequency::wrap_Object(*Frequency::B03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B08", make_descriptor(t_Frequency::wrap_Object(*Frequency::B08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1C", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2B", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B3A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B3A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C01", make_descriptor(t_Frequency::wrap_Object(*Frequency::C01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C02", make_descriptor(t_Frequency::wrap_Object(*Frequency::C02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C05", make_descriptor(t_Frequency::wrap_Object(*Frequency::C05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C06", make_descriptor(t_Frequency::wrap_Object(*Frequency::C06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C07", make_descriptor(t_Frequency::wrap_Object(*Frequency::C07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C08", make_descriptor(t_Frequency::wrap_Object(*Frequency::C08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E01", make_descriptor(t_Frequency::wrap_Object(*Frequency::E01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E05", make_descriptor(t_Frequency::wrap_Object(*Frequency::E05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E06", make_descriptor(t_Frequency::wrap_Object(*Frequency::E06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E07", make_descriptor(t_Frequency::wrap_Object(*Frequency::E07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E08", make_descriptor(t_Frequency::wrap_Object(*Frequency::E08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "F0", make_descriptor(Frequency::F0));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G01", make_descriptor(t_Frequency::wrap_Object(*Frequency::G01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G02", make_descriptor(t_Frequency::wrap_Object(*Frequency::G02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G05", make_descriptor(t_Frequency::wrap_Object(*Frequency::G05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I05", make_descriptor(t_Frequency::wrap_Object(*Frequency::I05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I09", make_descriptor(t_Frequency::wrap_Object(*Frequency::I09)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J01", make_descriptor(t_Frequency::wrap_Object(*Frequency::J01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J02", make_descriptor(t_Frequency::wrap_Object(*Frequency::J02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J05", make_descriptor(t_Frequency::wrap_Object(*Frequency::J05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J06", make_descriptor(t_Frequency::wrap_Object(*Frequency::J06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R01", make_descriptor(t_Frequency::wrap_Object(*Frequency::R01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R02", make_descriptor(t_Frequency::wrap_Object(*Frequency::R02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R03", make_descriptor(t_Frequency::wrap_Object(*Frequency::R03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R04", make_descriptor(t_Frequency::wrap_Object(*Frequency::R04)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R06", make_descriptor(t_Frequency::wrap_Object(*Frequency::R06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S01", make_descriptor(t_Frequency::wrap_Object(*Frequency::S01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S05", make_descriptor(t_Frequency::wrap_Object(*Frequency::S05)));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getName(t_Frequency *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frequency_getRatio(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_Frequency_getWavelength(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWavelength());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Frequency result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::Frequency::valueOf(a0));
          return t_Frequency::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Frequency_values(PyTypeObject *type)
      {
        JArray< Frequency > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::Frequency::values());
        return JArray<jobject>(result.this$).wrap(t_Frequency::wrap_jobject);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWavelength());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthIntegrator::mids$ = NULL;
        bool AdamsBashforthIntegrator::live$ = false;

        jclass AdamsBashforthIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd9af9166e421ead] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_f688d28255ba75ab] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_68d979ce0da3570a] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_a753e4b9b86b52dc] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_bd9af9166e421ead, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f688d28255ba75ab, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsBashforthIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegrator, t_AdamsBashforthIntegrator, AdamsBashforthIntegrator);

        void t_AdamsBashforthIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegrator), &PY_TYPE_DEF(AdamsBashforthIntegrator), module, "AdamsBashforthIntegrator", 0);
        }

        void t_AdamsBashforthIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "class_", make_descriptor(AdamsBashforthIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegrator::wrap_Object(AdamsBashforthIntegrator(((t_AdamsBashforthIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
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
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *SpinStabilizedKey::class$ = NULL;
              jmethodID *SpinStabilizedKey::mids$ = NULL;
              bool SpinStabilizedKey::live$ = false;
              SpinStabilizedKey *SpinStabilizedKey::COMMENT = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PER = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PHASE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_B = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DIR = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_B = NULL;

              jclass SpinStabilizedKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_772c17f367d56c16] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;)Z");
                  mids$[mid_valueOf_1bdc506851a9e825] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");
                  mids$[mid_values_641c29c51f472860] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new SpinStabilizedKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PER = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PER", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PHASE = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PHASE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DIR = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean SpinStabilizedKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_772c17f367d56c16], a0.this$, a1.this$, a2.this$);
              }

              SpinStabilizedKey SpinStabilizedKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return SpinStabilizedKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1bdc506851a9e825], a0.this$));
              }

              JArray< SpinStabilizedKey > SpinStabilizedKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< SpinStabilizedKey >(env->callStaticObjectMethod(cls, mids$[mid_values_641c29c51f472860]));
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
            namespace apm {
              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type);
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data);
              static PyGetSetDef t_SpinStabilizedKey__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilizedKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilizedKey__methods_[] = {
                DECLARE_METHOD(t_SpinStabilizedKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, process, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilizedKey)[] = {
                { Py_tp_methods, t_SpinStabilizedKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_SpinStabilizedKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilizedKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(SpinStabilizedKey, t_SpinStabilizedKey, SpinStabilizedKey);
              PyObject *t_SpinStabilizedKey::wrap_Object(const SpinStabilizedKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_SpinStabilizedKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_SpinStabilizedKey::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilizedKey), &PY_TYPE_DEF(SpinStabilizedKey), module, "SpinStabilizedKey", 0);
              }

              void t_SpinStabilizedKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "class_", make_descriptor(SpinStabilizedKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "wrapfn_", make_descriptor(t_SpinStabilizedKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(SpinStabilizedKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "COMMENT", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PER", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PHASE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PHASE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DIR", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_B)));
              }

              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilizedKey::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilizedKey::wrap_Object(SpinStabilizedKey(((t_SpinStabilizedKey *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilizedKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                SpinStabilizedKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::valueOf(a0));
                  return t_SpinStabilizedKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type)
              {
                JArray< SpinStabilizedKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::values());
                return JArray<jobject>(result.this$).wrap(t_SpinStabilizedKey::wrap_jobject);
              }
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ordering::class$ = NULL;
              jmethodID *Ordering::mids$ = NULL;
              bool Ordering::live$ = false;
              Ordering *Ordering::FULL = NULL;
              Ordering *Ordering::LTM = NULL;
              Ordering *Ordering::LTMWCC = NULL;
              Ordering *Ordering::UTM = NULL;
              Ordering *Ordering::UTMWCC = NULL;

              jclass Ordering::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ordering");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_68de49f77e098ccf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_values_fe9be0cac4ffb03c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FULL = new Ordering(env->getStaticObjectField(cls, "FULL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTM = new Ordering(env->getStaticObjectField(cls, "LTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTMWCC = new Ordering(env->getStaticObjectField(cls, "LTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTM = new Ordering(env->getStaticObjectField(cls, "UTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTMWCC = new Ordering(env->getStaticObjectField(cls, "UTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ordering Ordering::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return Ordering(env->callStaticObjectMethod(cls, mids$[mid_valueOf_68de49f77e098ccf], a0.this$));
              }

              JArray< Ordering > Ordering::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< Ordering >(env->callStaticObjectMethod(cls, mids$[mid_values_fe9be0cac4ffb03c]));
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
              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args);
              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_Ordering_values(PyTypeObject *type);
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data);
              static PyGetSetDef t_Ordering__fields_[] = {
                DECLARE_GET_FIELD(t_Ordering, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ordering__methods_[] = {
                DECLARE_METHOD(t_Ordering, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ordering, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_Ordering, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ordering)[] = {
                { Py_tp_methods, t_Ordering__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_Ordering__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ordering)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(Ordering, t_Ordering, Ordering);
              PyObject *t_Ordering::wrap_Object(const Ordering& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Ordering::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Ordering::install(PyObject *module)
              {
                installType(&PY_TYPE(Ordering), &PY_TYPE_DEF(Ordering), module, "Ordering", 0);
              }

              void t_Ordering::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "class_", make_descriptor(Ordering::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "wrapfn_", make_descriptor(t_Ordering::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ordering::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "FULL", make_descriptor(t_Ordering::wrap_Object(*Ordering::FULL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTMWCC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTMWCC)));
              }

              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ordering::initializeClass, 1)))
                  return NULL;
                return t_Ordering::wrap_Object(Ordering(((t_Ordering *) arg)->object.this$));
              }
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ordering::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                Ordering result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::valueOf(a0));
                  return t_Ordering::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_Ordering_values(PyTypeObject *type)
              {
                JArray< Ordering > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::values());
                return JArray<jobject>(result.this$).wrap(t_Ordering::wrap_jobject);
              }
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TransponderConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TransponderConfiguration::mids$ = NULL;
        bool CRDConfiguration$TransponderConfiguration::live$ = false;

        jclass CRDConfiguration$TransponderConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSpacecraftClockAndDriftApplied_55546ef6a647f39b] = env->getMethodID(cls, "getSpacecraftClockAndDriftApplied", "()I");
            mids$[mid_getStationClockAndDriftApplied_55546ef6a647f39b] = env->getMethodID(cls, "getStationClockAndDriftApplied", "()I");
            mids$[mid_getStationOscDrift_b74f83833fdad017] = env->getMethodID(cls, "getStationOscDrift", "()D");
            mids$[mid_getStationUTCOffset_b74f83833fdad017] = env->getMethodID(cls, "getStationUTCOffset", "()D");
            mids$[mid_getTranspClkRefTime_b74f83833fdad017] = env->getMethodID(cls, "getTranspClkRefTime", "()D");
            mids$[mid_getTranspOscDrift_b74f83833fdad017] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspUTCOffset_b74f83833fdad017] = env->getMethodID(cls, "getTranspUTCOffset", "()D");
            mids$[mid_getTransponderId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTransponderId", "()Ljava/lang/String;");
            mids$[mid_isSpacecraftTimeSimplified_9ab94ac1dc23b105] = env->getMethodID(cls, "isSpacecraftTimeSimplified", "()Z");
            mids$[mid_setIsSpacecraftTimeSimplified_fcb96c98de6fad04] = env->getMethodID(cls, "setIsSpacecraftTimeSimplified", "(Z)V");
            mids$[mid_setSpacecraftClockAndDriftApplied_44ed599e93e8a30c] = env->getMethodID(cls, "setSpacecraftClockAndDriftApplied", "(I)V");
            mids$[mid_setStationClockAndDriftApplied_44ed599e93e8a30c] = env->getMethodID(cls, "setStationClockAndDriftApplied", "(I)V");
            mids$[mid_setStationOscDrift_8ba9fe7a847cecad] = env->getMethodID(cls, "setStationOscDrift", "(D)V");
            mids$[mid_setStationUTCOffset_8ba9fe7a847cecad] = env->getMethodID(cls, "setStationUTCOffset", "(D)V");
            mids$[mid_setTranspClkRefTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setTranspClkRefTime", "(D)V");
            mids$[mid_setTranspOscDrift_8ba9fe7a847cecad] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspUTCOffset_8ba9fe7a847cecad] = env->getMethodID(cls, "setTranspUTCOffset", "(D)V");
            mids$[mid_setTransponderId_734b91ac30d5f9b4] = env->getMethodID(cls, "setTransponderId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TransponderConfiguration::CRDConfiguration$TransponderConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jint CRDConfiguration$TransponderConfiguration::getSpacecraftClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftClockAndDriftApplied_55546ef6a647f39b]);
        }

        jint CRDConfiguration$TransponderConfiguration::getStationClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getStationClockAndDriftApplied_55546ef6a647f39b]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationOscDrift_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationUTCOffset_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspClkRefTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRefTime_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUTCOffset_b74f83833fdad017]);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::getTransponderId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransponderId_1c1fa1e935d6cdcf]));
        }

        jboolean CRDConfiguration$TransponderConfiguration::isSpacecraftTimeSimplified() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSpacecraftTimeSimplified_9ab94ac1dc23b105]);
        }

        void CRDConfiguration$TransponderConfiguration::setIsSpacecraftTimeSimplified(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsSpacecraftTimeSimplified_fcb96c98de6fad04], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setSpacecraftClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftClockAndDriftApplied_44ed599e93e8a30c], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationClockAndDriftApplied_44ed599e93e8a30c], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationOscDrift_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationUTCOffset_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspClkRefTime(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRefTime_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUTCOffset_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTransponderId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransponderId_734b91ac30d5f9b4], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TransponderConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftClockAndDriftApplied),
          DECLARE_GET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftTimeSimplified),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationClockAndDriftApplied),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpClkRefTime),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transponderId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TransponderConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getSpacecraftClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspClkRefTime, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTransponderId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, isSpacecraftTimeSimplified, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setIsSpacecraftTimeSimplified, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setSpacecraftClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspClkRefTime, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTransponderId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TransponderConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TransponderConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TransponderConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TransponderConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TransponderConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TransponderConfiguration, t_CRDConfiguration$TransponderConfiguration, CRDConfiguration$TransponderConfiguration);

        void t_CRDConfiguration$TransponderConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TransponderConfiguration), &PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration), module, "CRDConfiguration$TransponderConfiguration", 0);
        }

        void t_CRDConfiguration$TransponderConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "class_", make_descriptor(CRDConfiguration$TransponderConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TransponderConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TransponderConfiguration::wrap_Object(CRDConfiguration$TransponderConfiguration(((t_CRDConfiguration$TransponderConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TransponderConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TransponderConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransponderId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsSpacecraftTimeSimplified(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsSpacecraftTimeSimplified", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSpacecraftClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpacecraftClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStationClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRefTime(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRefTime", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTransponderId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransponderId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSpacecraftClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spacecraftClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStationClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRefTime(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRefTime", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTransponderId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transponderId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisData::class$ = NULL;
              jmethodID *RtcmEphemerisData::mids$ = NULL;
              bool RtcmEphemerisData::live$ = false;

              jclass RtcmEphemerisData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAccuracyProvider_8088de65fb6ae567] = env->getMethodID(cls, "getAccuracyProvider", "()Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;");
                  mids$[mid_getSatelliteID_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setAccuracyProvider_3b6061b08132bc3a] = env->getMethodID(cls, "setAccuracyProvider", "(Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;)V");
                  mids$[mid_setSatelliteID_44ed599e93e8a30c] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisData::RtcmEphemerisData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::gnss::metric::messages::common::AccuracyProvider RtcmEphemerisData::getAccuracyProvider() const
              {
                return ::org::orekit::gnss::metric::messages::common::AccuracyProvider(env->callObjectMethod(this$, mids$[mid_getAccuracyProvider_8088de65fb6ae567]));
              }

              jint RtcmEphemerisData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_55546ef6a647f39b]);
              }

              void RtcmEphemerisData::setAccuracyProvider(const ::org::orekit::gnss::metric::messages::common::AccuracyProvider & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccuracyProvider_3b6061b08132bc3a], a0.this$);
              }

              void RtcmEphemerisData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_44ed599e93e8a30c], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmEphemerisData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, accuracyProvider),
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisData__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, getAccuracyProvider, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, setAccuracyProvider, METH_O),
                DECLARE_METHOD(t_RtcmEphemerisData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisData)[] = {
                { Py_tp_methods, t_RtcmEphemerisData__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisData_init_ },
                { Py_tp_getset, t_RtcmEphemerisData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisData, t_RtcmEphemerisData, RtcmEphemerisData);

              void t_RtcmEphemerisData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisData), &PY_TYPE_DEF(RtcmEphemerisData), module, "RtcmEphemerisData", 0);
              }

              void t_RtcmEphemerisData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "class_", make_descriptor(RtcmEphemerisData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "wrapfn_", make_descriptor(t_RtcmEphemerisData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisData::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisData::wrap_Object(RtcmEphemerisData(((t_RtcmEphemerisData *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds)
              {
                RtcmEphemerisData object((jobject) NULL);

                INT_CALL(object = RtcmEphemerisData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(result);
              }

              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAccuracyProvider(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccuracyProvider", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(value);
              }
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccuracyProvider(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accuracyProvider", arg);
                return -1;
              }

              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::class$ = NULL;
          jmethodID *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::mids$ = NULL;
          bool DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::live$ = false;

          jclass DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_partialsComputed_502cf79b50556673] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/linear/RealMatrix;[D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::linear::RealMatrix & a1, const JArray< jdouble > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_partialsComputed_502cf79b50556673], a0.this$, a1.this$, a2.this$);
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
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args);

          static PyMethodDef t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_[] = {
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, partialsComputed, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            { Py_tp_methods, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver);

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), &PY_TYPE_DEF(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), module, "DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver", 0);
          }

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "class_", make_descriptor(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "wrapfn_", make_descriptor(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1)))
              return NULL;
            return t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_Object(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver(((t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *) arg)->object.this$));
          }
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GLONASSDate.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSDate::class$ = NULL;
      jmethodID *GLONASSDate::mids$ = NULL;
      bool GLONASSDate::live$ = false;

      jclass GLONASSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02135a6ef25adb4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_805befaa637d6dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_94fe8d9ffeb50676] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_3d28d2f6b328edfa] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDayNumber_55546ef6a647f39b] = env->getMethodID(cls, "getDayNumber", "()I");
          mids$[mid_getGMST_b74f83833fdad017] = env->getMethodID(cls, "getGMST", "()D");
          mids$[mid_getIntervalNumber_55546ef6a647f39b] = env->getMethodID(cls, "getIntervalNumber", "()I");
          mids$[mid_getJD0_b74f83833fdad017] = env->getMethodID(cls, "getJD0", "()D");
          mids$[mid_getSecInDay_b74f83833fdad017] = env->getMethodID(cls, "getSecInDay", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02135a6ef25adb4b, a0.this$)) {}

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_805befaa637d6dd5, a0.this$, a1.this$)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94fe8d9ffeb50676, a0, a1, a2)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d28d2f6b328edfa, a0, a1, a2, a3.this$)) {}

      ::org::orekit::time::AbsoluteDate GLONASSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jint GLONASSDate::getDayNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayNumber_55546ef6a647f39b]);
      }

      jdouble GLONASSDate::getGMST() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGMST_b74f83833fdad017]);
      }

      jint GLONASSDate::getIntervalNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getIntervalNumber_55546ef6a647f39b]);
      }

      jdouble GLONASSDate::getJD0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getJD0_b74f83833fdad017]);
      }

      jdouble GLONASSDate::getSecInDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecInDay_b74f83833fdad017]);
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
      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data);
      static PyGetSetDef t_GLONASSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSDate, date),
        DECLARE_GET_FIELD(t_GLONASSDate, dayNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, gMST),
        DECLARE_GET_FIELD(t_GLONASSDate, intervalNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, jD0),
        DECLARE_GET_FIELD(t_GLONASSDate, secInDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSDate__methods_[] = {
        DECLARE_METHOD(t_GLONASSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getDayNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getGMST, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getIntervalNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getJD0, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getSecInDay, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSDate)[] = {
        { Py_tp_methods, t_GLONASSDate__methods_ },
        { Py_tp_init, (void *) t_GLONASSDate_init_ },
        { Py_tp_getset, t_GLONASSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSDate, t_GLONASSDate, GLONASSDate);

      void t_GLONASSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSDate), &PY_TYPE_DEF(GLONASSDate), module, "GLONASSDate", 0);
      }

      void t_GLONASSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "class_", make_descriptor(GLONASSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "wrapfn_", make_descriptor(t_GLONASSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSDate::initializeClass, 1)))
          return NULL;
        return t_GLONASSDate::wrap_Object(GLONASSDate(((t_GLONASSDate *) arg)->object.this$));
      }
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              INT_CALL(object = GLONASSDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GLONASSDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2, a3));
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

      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGMST());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIntervalNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getJD0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecInDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGMST());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIntervalNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getJD0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecInDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
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
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_3ae426f140e5e927] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_55546ef6a647f39b] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_da9c9656f83ca27e] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_56b7531fea488c5a] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_44ed599e93e8a30c] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_b2cd6b761acba879] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Data::SsrIgm03Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm03Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_3ae426f140e5e927]));
              }

              jint SsrIgm03Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_55546ef6a647f39b]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm03Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_da9c9656f83ca27e]));
              }

              void SsrIgm03Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_56b7531fea488c5a], a0.this$);
              }

              void SsrIgm03Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_44ed599e93e8a30c], a0);
              }

              void SsrIgm03Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_b2cd6b761acba879], a0.this$);
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
#include "org/orekit/models/earth/tessellation/AlongTrackAiming.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *AlongTrackAiming::class$ = NULL;
          jmethodID *AlongTrackAiming::mids$ = NULL;
          bool AlongTrackAiming::live$ = false;

          jclass AlongTrackAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/AlongTrackAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_528c9375c20215da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/orbits/Orbit;Z)V");
              mids$[mid_alongTileDirection_636e2b82319b8646] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AlongTrackAiming::AlongTrackAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_528c9375c20215da, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AlongTrackAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_636e2b82319b8646], a0.this$, a1.this$));
          }

          ::java::util::List AlongTrackAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_e62d3bb06d56d7e3]));
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
          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args);
          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self);
          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data);
          static PyGetSetDef t_AlongTrackAiming__fields_[] = {
            DECLARE_GET_FIELD(t_AlongTrackAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AlongTrackAiming__methods_[] = {
            DECLARE_METHOD(t_AlongTrackAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_AlongTrackAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AlongTrackAiming)[] = {
            { Py_tp_methods, t_AlongTrackAiming__methods_ },
            { Py_tp_init, (void *) t_AlongTrackAiming_init_ },
            { Py_tp_getset, t_AlongTrackAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AlongTrackAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AlongTrackAiming, t_AlongTrackAiming, AlongTrackAiming);

          void t_AlongTrackAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(AlongTrackAiming), &PY_TYPE_DEF(AlongTrackAiming), module, "AlongTrackAiming", 0);
          }

          void t_AlongTrackAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "class_", make_descriptor(AlongTrackAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "wrapfn_", make_descriptor(t_AlongTrackAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AlongTrackAiming::initializeClass, 1)))
              return NULL;
            return t_AlongTrackAiming::wrap_Object(AlongTrackAiming(((t_AlongTrackAiming *) arg)->object.this$));
          }
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AlongTrackAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            jboolean a2;
            AlongTrackAiming object((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AlongTrackAiming(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelType::class$ = NULL;
          jmethodID *ViennaModelType::mids$ = NULL;
          bool ViennaModelType::live$ = false;
          ViennaModelType *ViennaModelType::VIENNA_ONE = NULL;
          ViennaModelType *ViennaModelType::VIENNA_THREE = NULL;

          jclass ViennaModelType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_643745c6b50383cf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/troposphere/ViennaModelType;");
              mids$[mid_values_0c5841a9777828bb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/troposphere/ViennaModelType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VIENNA_ONE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_ONE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              VIENNA_THREE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_THREE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelType ViennaModelType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ViennaModelType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_643745c6b50383cf], a0.this$));
          }

          JArray< ViennaModelType > ViennaModelType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ViennaModelType >(env->callStaticObjectMethod(cls, mids$[mid_values_0c5841a9777828bb]));
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
          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args);
          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ViennaModelType_values(PyTypeObject *type);
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data);
          static PyGetSetDef t_ViennaModelType__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelType__methods_[] = {
            DECLARE_METHOD(t_ViennaModelType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, of_, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelType)[] = {
            { Py_tp_methods, t_ViennaModelType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ViennaModelType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ViennaModelType, t_ViennaModelType, ViennaModelType);
          PyObject *t_ViennaModelType::wrap_Object(const ViennaModelType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ViennaModelType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ViennaModelType::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelType), &PY_TYPE_DEF(ViennaModelType), module, "ViennaModelType", 0);
          }

          void t_ViennaModelType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "class_", make_descriptor(ViennaModelType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "wrapfn_", make_descriptor(t_ViennaModelType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_ONE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_THREE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_THREE)));
          }

          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelType::initializeClass, 1)))
              return NULL;
            return t_ViennaModelType::wrap_Object(ViennaModelType(((t_ViennaModelType *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ViennaModelType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::valueOf(a0));
              return t_ViennaModelType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ViennaModelType_values(PyTypeObject *type)
          {
            JArray< ViennaModelType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::values());
            return JArray<jobject>(result.this$).wrap(t_ViennaModelType::wrap_jobject);
          }
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data)
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
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedPCVS::class$ = NULL;
        jmethodID *AppliedPCVS::mids$ = NULL;
        bool AppliedPCVS::live$ = false;

        jclass AppliedPCVS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedPCVS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ffc5087441db4aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgPCVS_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProgPCVS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourcePCVS_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourcePCVS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedPCVS::AppliedPCVS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ffc5087441db4aa, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedPCVS::getProgPCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgPCVS_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedPCVS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
        }

        ::java::lang::String AppliedPCVS::getSourcePCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourcePCVS_1c1fa1e935d6cdcf]));
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
        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data);
        static PyGetSetDef t_AppliedPCVS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedPCVS, progPCVS),
          DECLARE_GET_FIELD(t_AppliedPCVS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedPCVS, sourcePCVS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedPCVS__methods_[] = {
          DECLARE_METHOD(t_AppliedPCVS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, getProgPCVS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSourcePCVS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedPCVS)[] = {
          { Py_tp_methods, t_AppliedPCVS__methods_ },
          { Py_tp_init, (void *) t_AppliedPCVS_init_ },
          { Py_tp_getset, t_AppliedPCVS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedPCVS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedPCVS, t_AppliedPCVS, AppliedPCVS);

        void t_AppliedPCVS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedPCVS), &PY_TYPE_DEF(AppliedPCVS), module, "AppliedPCVS", 0);
        }

        void t_AppliedPCVS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "class_", make_descriptor(AppliedPCVS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "wrapfn_", make_descriptor(t_AppliedPCVS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedPCVS::initializeClass, 1)))
            return NULL;
          return t_AppliedPCVS::wrap_Object(AppliedPCVS(((t_AppliedPCVS *) arg)->object.this$));
        }
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedPCVS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedPCVS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedPCVS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgPCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourcePCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgPCVS());
          return j2p(value);
        }

        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourcePCVS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SymmLQ.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SymmLQ::class$ = NULL;
      jmethodID *SymmLQ::mids$ = NULL;
      bool SymmLQ::live$ = false;

      jclass SymmLQ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SymmLQ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_da450846491b522c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_911582bb3a73ac58] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_9ab94ac1dc23b105] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solve_756296b1f68e7038] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_8e7f7f43cd6eb914] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_3a7358168b964bea] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_0f4c606f88ffcaeb] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_6a13ae8d5dc12800] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_78453d0930241759] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_8e7f7f43cd6eb914] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_0f4c606f88ffcaeb] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_7b731b81e5b5e103] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SymmLQ::SymmLQ(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_da450846491b522c, a0.this$, a1, a2)) {}

      SymmLQ::SymmLQ(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_911582bb3a73ac58, a0, a1, a2)) {}

      jboolean SymmLQ::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_756296b1f68e7038], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_8e7f7f43cd6eb914], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_3a7358168b964bea], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0f4c606f88ffcaeb], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, jboolean a2, jdouble a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_6a13ae8d5dc12800], a0.this$, a1.this$, a2, a3));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, jboolean a3, jdouble a4) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_78453d0930241759], a0.this$, a1.this$, a2.this$, a3, a4));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_8e7f7f43cd6eb914], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_0f4c606f88ffcaeb], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jboolean a4, jdouble a5) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_7b731b81e5b5e103], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
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
      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self);
      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args);
      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args);

      static PyMethodDef t_SymmLQ__methods_[] = {
        DECLARE_METHOD(t_SymmLQ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_SymmLQ, solve, METH_VARARGS),
        DECLARE_METHOD(t_SymmLQ, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SymmLQ)[] = {
        { Py_tp_methods, t_SymmLQ__methods_ },
        { Py_tp_init, (void *) t_SymmLQ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SymmLQ)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(SymmLQ, t_SymmLQ, SymmLQ);

      void t_SymmLQ::install(PyObject *module)
      {
        installType(&PY_TYPE(SymmLQ), &PY_TYPE_DEF(SymmLQ), module, "SymmLQ", 0);
      }

      void t_SymmLQ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "class_", make_descriptor(SymmLQ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "wrapfn_", make_descriptor(t_SymmLQ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SymmLQ::initializeClass, 1)))
          return NULL;
        return t_SymmLQ::wrap_Object(SymmLQ(((t_SymmLQ *) arg)->object.this$));
      }
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SymmLQ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
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

      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jboolean a4;
            jdouble a5;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator$DifferentialEffect::class$ = NULL;
        jmethodID *AdapterPropagator$DifferentialEffect::mids$ = NULL;
        bool AdapterPropagator$DifferentialEffect::live$ = false;

        jclass AdapterPropagator$DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_c3c52b1257139045] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator$DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_c3c52b1257139045], a0.this$));
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
        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg);

        static PyMethodDef t_AdapterPropagator$DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, apply, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator$DifferentialEffect)[] = {
          { Py_tp_methods, t_AdapterPropagator$DifferentialEffect__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator$DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator$DifferentialEffect, t_AdapterPropagator$DifferentialEffect, AdapterPropagator$DifferentialEffect);

        void t_AdapterPropagator$DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator$DifferentialEffect), &PY_TYPE_DEF(AdapterPropagator$DifferentialEffect), module, "AdapterPropagator$DifferentialEffect", 0);
        }

        void t_AdapterPropagator$DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "class_", make_descriptor(AdapterPropagator$DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "wrapfn_", make_descriptor(t_AdapterPropagator$DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator$DifferentialEffect::wrap_Object(AdapterPropagator$DifferentialEffect(((t_AdapterPropagator$DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList::class$ = NULL;
      jmethodID *ParameterDriversList::mids$ = NULL;
      bool ParameterDriversList::live$ = false;

      jclass ParameterDriversList::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_5791d10af4720a8e] = env->getMethodID(cls, "add", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_filter_fcb96c98de6fad04] = env->getMethodID(cls, "filter", "(Z)V");
          mids$[mid_findByName_23e679f46eb9cdb6] = env->getMethodID(cls, "findByName", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriversList$DelegatingDriver;");
          mids$[mid_findDelegatingSpanNameBySpanName_6f0f3576df9f75ee] = env->getMethodID(cls, "findDelegatingSpanNameBySpanName", "(Ljava/lang/String;)Ljava/lang/String;");
          mids$[mid_getDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
          mids$[mid_getNbParams_55546ef6a647f39b] = env->getMethodID(cls, "getNbParams", "()I");
          mids$[mid_getNbValuesToEstimate_55546ef6a647f39b] = env->getMethodID(cls, "getNbValuesToEstimate", "()I");
          mids$[mid_sort_a1fa5dae97ea5ed2] = env->getMethodID(cls, "sort", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriversList::ParameterDriversList() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void ParameterDriversList::add(const ::org::orekit::utils::ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_5791d10af4720a8e], a0.this$);
      }

      void ParameterDriversList::filter(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_filter_fcb96c98de6fad04], a0);
      }

      ::org::orekit::utils::ParameterDriversList$DelegatingDriver ParameterDriversList::findByName(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriversList$DelegatingDriver(env->callObjectMethod(this$, mids$[mid_findByName_23e679f46eb9cdb6], a0.this$));
      }

      ::java::lang::String ParameterDriversList::findDelegatingSpanNameBySpanName(const ::java::lang::String & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_findDelegatingSpanNameBySpanName_6f0f3576df9f75ee], a0.this$));
      }

      ::java::util::List ParameterDriversList::getDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDrivers_e62d3bb06d56d7e3]));
      }

      jint ParameterDriversList::getNbParams() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParams_55546ef6a647f39b]);
      }

      jint ParameterDriversList::getNbValuesToEstimate() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbValuesToEstimate_55546ef6a647f39b]);
      }

      void ParameterDriversList::sort() const
      {
        env->callVoidMethod(this$, mids$[mid_sort_a1fa5dae97ea5ed2]);
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
      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data);
      static PyGetSetDef t_ParameterDriversList__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList, drivers),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbParams),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbValuesToEstimate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, add, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, filter, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findByName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findDelegatingSpanNameBySpanName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, getDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbParams, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbValuesToEstimate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, sort, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList)[] = {
        { Py_tp_methods, t_ParameterDriversList__methods_ },
        { Py_tp_init, (void *) t_ParameterDriversList_init_ },
        { Py_tp_getset, t_ParameterDriversList__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList, t_ParameterDriversList, ParameterDriversList);

      void t_ParameterDriversList::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList), &PY_TYPE_DEF(ParameterDriversList), module, "ParameterDriversList", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "DelegatingDriver", make_descriptor(&PY_TYPE_DEF(ParameterDriversList$DelegatingDriver)));
      }

      void t_ParameterDriversList::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "class_", make_descriptor(ParameterDriversList::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "wrapfn_", make_descriptor(t_ParameterDriversList::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList::wrap_Object(ParameterDriversList(((t_ParameterDriversList *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds)
      {
        ParameterDriversList object((jobject) NULL);

        INT_CALL(object = ParameterDriversList());
        self->object = object;

        return 0;
      }

      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.add(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.filter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriversList$DelegatingDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findByName(a0));
          return ::org::orekit::utils::t_ParameterDriversList$DelegatingDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findByName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findDelegatingSpanNameBySpanName(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findDelegatingSpanNameBySpanName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriversList$DelegatingDriver));
      }

      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParams());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self)
      {
        OBJ_CALL(self->object.sort());
        Py_RETURN_NONE;
      }

      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParams());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldBlendable::class$ = NULL;
      jmethodID *FieldBlendable::mids$ = NULL;
      bool FieldBlendable::live$ = false;

      jclass FieldBlendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldBlendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_9ea0603b1b5dc5e7] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;Lorg/hipparchus/FieldElement;)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object FieldBlendable::blendArithmeticallyWith(const ::java::lang::Object & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_9ea0603b1b5dc5e7], a0.this$, a1.this$));
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
      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data);
      static PyGetSetDef t_FieldBlendable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBlendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBlendable__methods_[] = {
        DECLARE_METHOD(t_FieldBlendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBlendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBlendable)[] = {
        { Py_tp_methods, t_FieldBlendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBlendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBlendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBlendable, t_FieldBlendable, FieldBlendable);
      PyObject *t_FieldBlendable::wrap_Object(const FieldBlendable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldBlendable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldBlendable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBlendable), &PY_TYPE_DEF(FieldBlendable), module, "FieldBlendable", 0);
      }

      void t_FieldBlendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "class_", make_descriptor(FieldBlendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "wrapfn_", make_descriptor(t_FieldBlendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBlendable::initializeClass, 1)))
          return NULL;
        return t_FieldBlendable::wrap_Object(FieldBlendable(((t_FieldBlendable *) arg)->object.this$));
      }
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBlendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OK", self->parameters[0], ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Multiply.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Multiply::class$ = NULL;
        jmethodID *Multiply::mids$ = NULL;
        bool Multiply::live$ = false;

        jclass Multiply::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Multiply");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Multiply::Multiply() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Multiply::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
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
        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args);

        static PyMethodDef t_Multiply__methods_[] = {
          DECLARE_METHOD(t_Multiply, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Multiply)[] = {
          { Py_tp_methods, t_Multiply__methods_ },
          { Py_tp_init, (void *) t_Multiply_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Multiply)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Multiply, t_Multiply, Multiply);

        void t_Multiply::install(PyObject *module)
        {
          installType(&PY_TYPE(Multiply), &PY_TYPE_DEF(Multiply), module, "Multiply", 0);
        }

        void t_Multiply::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "class_", make_descriptor(Multiply::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "wrapfn_", make_descriptor(t_Multiply::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Multiply::initializeClass, 1)))
            return NULL;
          return t_Multiply::wrap_Object(Multiply(((t_Multiply *) arg)->object.this$));
        }
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Multiply::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds)
        {
          Multiply object((jobject) NULL);

          INT_CALL(object = Multiply());
          self->object = object;

          return 0;
        }

        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args)
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
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *ParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool ParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass ParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6d40c356abc56b92] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_f707b8d915bcbfb2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDurationDriver_a59daa5e273117e1] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_b77c61c859c7ff3e] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_b77c61c859c7ff3e] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_b77c61c859c7ff3e] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_d54066f0626c2606] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;");

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

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6d40c356abc56b92, a0.this$, a1.this$, a2.this$)) {}

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f707b8d915bcbfb2, a0.this$, a1.this$, a2)) {}

        jdouble ParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_b77c61c859c7ff3e]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_b77c61c859c7ff3e]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_b77c61c859c7ff3e]));
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
        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_ParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_ParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_ParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_ParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ParameterDrivenDateIntervalDetector, t_ParameterDrivenDateIntervalDetector, ParameterDrivenDateIntervalDetector);
        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_Object(const ParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(ParameterDrivenDateIntervalDetector), module, "ParameterDrivenDateIntervalDetector", 0);
        }

        void t_ParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "class_", make_descriptor(ParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_ParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(ParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_ParameterDrivenDateIntervalDetector::wrap_Object(ParameterDrivenDateIntervalDetector(((t_ParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
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
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateMatrixFunction::mids$ = NULL;
      bool CalculusFieldMultivariateMatrixFunction::live$ = false;

      jclass CalculusFieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_627e74fafe9198e9] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_627e74fafe9198e9], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateMatrixFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateMatrixFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateMatrixFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateMatrixFunction, t_CalculusFieldMultivariateMatrixFunction, CalculusFieldMultivariateMatrixFunction);
      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_Object(const CalculusFieldMultivariateMatrixFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateMatrixFunction), &PY_TYPE_DEF(CalculusFieldMultivariateMatrixFunction), module, "CalculusFieldMultivariateMatrixFunction", 0);
      }

      void t_CalculusFieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "class_", make_descriptor(CalculusFieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateMatrixFunction::wrap_Object(CalculusFieldMultivariateMatrixFunction(((t_CalculusFieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbit::class$ = NULL;
      jmethodID *FieldOrbit::mids$ = NULL;
      bool FieldOrbit::live$ = false;

      jclass FieldOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_99dd76219aa0c8c0] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_81520b552cb3fa26] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_81520b552cb3fa26] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_81520b552cb3fa26] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_81520b552cb3fa26] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_81520b552cb3fa26] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_81520b552cb3fa26] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_81520b552cb3fa26] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_81520b552cb3fa26] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getJacobianWrtCartesian_8aa4695fdadcc0d6] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getJacobianWrtParameters_8aa4695fdadcc0d6] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getKeplerianMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_81520b552cb3fa26] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_81520b552cb3fa26] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_81520b552cb3fa26] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_81520b552cb3fa26] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_81520b552cb3fa26] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_81520b552cb3fa26] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_81520b552cb3fa26] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDotWrtA_81520b552cb3fa26] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_81520b552cb3fa26] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_dda5a3346286675e] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_566ff18e6be34b64] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_9ab94ac1dc23b105] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_5be75d7ca54c3a6a] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_toOrbit_b6e68c5f730fb347] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_initPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_fillHalfRow_acd9dd5c30f32078] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_38d3fa4fe5604b07] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_22ffa112852b90d7] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_1cd05351c148497f] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_e5fa9ebdbeacf659] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_fea8e9abd8514037] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_hasNonKeplerianAcceleration_b1b0ef58b05e98c2] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Z");
          mids$[mid_getZero_81520b552cb3fa26] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOne_81520b552cb3fa26] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_99dd76219aa0c8c0], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_81520b552cb3fa26]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldOrbit::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_81520b552cb3fa26]));
      }

      ::org::orekit::frames::Frame FieldOrbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_81520b552cb3fa26]));
      }

      void FieldOrbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_8aa4695fdadcc0d6], a0.this$, a1.this$);
      }

      void FieldOrbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_8aa4695fdadcc0d6], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMeanAnomalyDotWrtA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_81520b552cb3fa26]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_243debd9cc1dd623]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_dda5a3346286675e], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_566ff18e6be34b64], a0.this$));
      }

      ::org::orekit::orbits::OrbitType FieldOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean FieldOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_9ab94ac1dc23b105]);
      }

      jboolean FieldOrbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_9ab94ac1dc23b105]);
      }

      FieldOrbit FieldOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_5be75d7ca54c3a6a], a0.this$));
      }

      ::org::orekit::orbits::Orbit FieldOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_toOrbit_b6e68c5f730fb347]));
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
      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg);
      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data);
      static PyGetSetDef t_FieldOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbit, a),
        DECLARE_GET_FIELD(t_FieldOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldOrbit, date),
        DECLARE_GET_FIELD(t_FieldOrbit, e),
        DECLARE_GET_FIELD(t_FieldOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldOrbit, elliptical),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, frame),
        DECLARE_GET_FIELD(t_FieldOrbit, hx),
        DECLARE_GET_FIELD(t_FieldOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldOrbit, hy),
        DECLARE_GET_FIELD(t_FieldOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, i),
        DECLARE_GET_FIELD(t_FieldOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldOrbit, lE),
        DECLARE_GET_FIELD(t_FieldOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lM),
        DECLARE_GET_FIELD(t_FieldOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lv),
        DECLARE_GET_FIELD(t_FieldOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldOrbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_FieldOrbit, mu),
        DECLARE_GET_FIELD(t_FieldOrbit, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldOrbit, position),
        DECLARE_GET_FIELD(t_FieldOrbit, type),
        DECLARE_GET_FIELD(t_FieldOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, shiftedBy, METH_O),
        DECLARE_METHOD(t_FieldOrbit, toOrbit, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbit)[] = {
        { Py_tp_methods, t_FieldOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrbit, t_FieldOrbit, FieldOrbit);
      PyObject *t_FieldOrbit::wrap_Object(const FieldOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbit), &PY_TYPE_DEF(FieldOrbit), module, "FieldOrbit", 0);
      }

      void t_FieldOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "class_", make_descriptor(FieldOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "wrapfn_", make_descriptor(t_FieldOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldOrbit::wrap_Object(FieldOrbit(((t_FieldOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getADot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHxDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getIDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLvDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
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
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldOrbit result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data)
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
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BoundedAttitudeProvider::class$ = NULL;
      jmethodID *BoundedAttitudeProvider::mids$ = NULL;
      bool BoundedAttitudeProvider::live$ = false;

      jclass BoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
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
      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data);
      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_BoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_BoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_BoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(BoundedAttitudeProvider, t_BoundedAttitudeProvider, BoundedAttitudeProvider);

      void t_BoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedAttitudeProvider), &PY_TYPE_DEF(BoundedAttitudeProvider), module, "BoundedAttitudeProvider", 0);
      }

      void t_BoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "class_", make_descriptor(BoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "wrapfn_", make_descriptor(t_BoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_BoundedAttitudeProvider::wrap_Object(BoundedAttitudeProvider(((t_BoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresBuilder::class$ = NULL;
            jmethodID *LeastSquaresBuilder::mids$ = NULL;
            bool LeastSquaresBuilder::live$ = false;

            jclass LeastSquaresBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_00bdcaec353b70ba] = env->getMethodID(cls, "build", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_checker_0f571033218bc643] = env->getMethodID(cls, "checker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_checkerPair_0f571033218bc643] = env->getMethodID(cls, "checkerPair", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_lazyEvaluation_a8aa9a0ab753ee72] = env->getMethodID(cls, "lazyEvaluation", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxEvaluations_0ae4a82fce2b6f66] = env->getMethodID(cls, "maxEvaluations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxIterations_0ae4a82fce2b6f66] = env->getMethodID(cls, "maxIterations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_dd37728866f56fe4] = env->getMethodID(cls, "model", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_e0f6a3e65c5e4d40] = env->getMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_parameterValidator_7b494e394ef83b4d] = env->getMethodID(cls, "parameterValidator", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_dd7620b63ee35e61] = env->getMethodID(cls, "start", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_83e5093ddc424384] = env->getMethodID(cls, "start", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_dd7620b63ee35e61] = env->getMethodID(cls, "target", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_83e5093ddc424384] = env->getMethodID(cls, "target", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_weight_d83f45543005ce21] = env->getMethodID(cls, "weight", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresBuilder::LeastSquaresBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresBuilder::build() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_00bdcaec353b70ba]));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checker_0f571033218bc643], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checkerPair(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checkerPair_0f571033218bc643], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::lazyEvaluation(jboolean a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_lazyEvaluation_a8aa9a0ab753ee72], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxEvaluations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxEvaluations_0ae4a82fce2b6f66], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxIterations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxIterations_0ae4a82fce2b6f66], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_dd37728866f56fe4], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_e0f6a3e65c5e4d40], a0.this$, a1.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::parameterValidator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_parameterValidator_7b494e394ef83b4d], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_dd7620b63ee35e61], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_83e5093ddc424384], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_dd7620b63ee35e61], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_83e5093ddc424384], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::weight(const ::org::hipparchus::linear::RealMatrix & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_weight_d83f45543005ce21], a0.this$));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self);
            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresBuilder__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, build, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, checker, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, checkerPair, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, lazyEvaluation, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxEvaluations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxIterations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, model, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, parameterValidator, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, start, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, target, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, weight, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresBuilder)[] = {
              { Py_tp_methods, t_LeastSquaresBuilder__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresBuilder, t_LeastSquaresBuilder, LeastSquaresBuilder);

            void t_LeastSquaresBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresBuilder), &PY_TYPE_DEF(LeastSquaresBuilder), module, "LeastSquaresBuilder", 0);
            }

            void t_LeastSquaresBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "class_", make_descriptor(LeastSquaresBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "wrapfn_", make_descriptor(t_LeastSquaresBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresBuilder::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresBuilder::wrap_Object(LeastSquaresBuilder(((t_LeastSquaresBuilder *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds)
            {
              LeastSquaresBuilder object((jobject) NULL);

              INT_CALL(object = LeastSquaresBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checker(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checkerPair(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checkerPair", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jboolean a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.lazyEvaluation(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "lazyEvaluation", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxEvaluations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxIterations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.model(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.model(a0, a1));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parameterValidator(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parameterValidator", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "start", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "target", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.weight(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "weight", arg);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionHeader::class$ = NULL;
              jmethodID *RtcmCorrectionHeader::mids$ = NULL;
              bool RtcmCorrectionHeader::live$ = false;

              jclass RtcmCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEpochTime1s_b74f83833fdad017] = env->getMethodID(cls, "getEpochTime1s", "()D");
                  mids$[mid_getIodSsr_55546ef6a647f39b] = env->getMethodID(cls, "getIodSsr", "()I");
                  mids$[mid_getMultipleMessageIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getMultipleMessageIndicator", "()I");
                  mids$[mid_getNumberOfSatellites_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_getSsrProviderId_55546ef6a647f39b] = env->getMethodID(cls, "getSsrProviderId", "()I");
                  mids$[mid_getSsrSolutionId_55546ef6a647f39b] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                  mids$[mid_getSsrUpdateInterval_e95bdd4f78fe76e4] = env->getMethodID(cls, "getSsrUpdateInterval", "()Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;");
                  mids$[mid_setEpochTime1s_8ba9fe7a847cecad] = env->getMethodID(cls, "setEpochTime1s", "(D)V");
                  mids$[mid_setIodSsr_44ed599e93e8a30c] = env->getMethodID(cls, "setIodSsr", "(I)V");
                  mids$[mid_setMultipleMessageIndicator_44ed599e93e8a30c] = env->getMethodID(cls, "setMultipleMessageIndicator", "(I)V");
                  mids$[mid_setNumberOfSatellites_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");
                  mids$[mid_setSsrProviderId_44ed599e93e8a30c] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                  mids$[mid_setSsrSolutionId_44ed599e93e8a30c] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                  mids$[mid_setSsrUpdateInterval_729bbcfae2c9c3bb] = env->getMethodID(cls, "setSsrUpdateInterval", "(Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionHeader::RtcmCorrectionHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble RtcmCorrectionHeader::getEpochTime1s() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochTime1s_b74f83833fdad017]);
              }

              jint RtcmCorrectionHeader::getIodSsr() const
              {
                return env->callIntMethod(this$, mids$[mid_getIodSsr_55546ef6a647f39b]);
              }

              jint RtcmCorrectionHeader::getMultipleMessageIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getMultipleMessageIndicator_55546ef6a647f39b]);
              }

              jint RtcmCorrectionHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_55546ef6a647f39b]);
              }

              jint RtcmCorrectionHeader::getSsrProviderId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrProviderId_55546ef6a647f39b]);
              }

              jint RtcmCorrectionHeader::getSsrSolutionId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_55546ef6a647f39b]);
              }

              ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval RtcmCorrectionHeader::getSsrUpdateInterval() const
              {
                return ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval(env->callObjectMethod(this$, mids$[mid_getSsrUpdateInterval_e95bdd4f78fe76e4]));
              }

              void RtcmCorrectionHeader::setEpochTime1s(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochTime1s_8ba9fe7a847cecad], a0);
              }

              void RtcmCorrectionHeader::setIodSsr(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIodSsr_44ed599e93e8a30c], a0);
              }

              void RtcmCorrectionHeader::setMultipleMessageIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMultipleMessageIndicator_44ed599e93e8a30c], a0);
              }

              void RtcmCorrectionHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_44ed599e93e8a30c], a0);
              }

              void RtcmCorrectionHeader::setSsrProviderId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrProviderId_44ed599e93e8a30c], a0);
              }

              void RtcmCorrectionHeader::setSsrSolutionId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_44ed599e93e8a30c], a0);
              }

              void RtcmCorrectionHeader::setSsrUpdateInterval(const ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_729bbcfae2c9c3bb], a0.this$);
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
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, epochTime1s),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, iodSsr),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, multipleMessageIndicator),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, numberOfSatellites),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrProviderId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrSolutionId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrUpdateInterval),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getEpochTime1s, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getIodSsr, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getMultipleMessageIndicator, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrProviderId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrSolutionId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrUpdateInterval, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setEpochTime1s, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setIodSsr, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setMultipleMessageIndicator, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setNumberOfSatellites, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrProviderId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrSolutionId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrUpdateInterval, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionHeader)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionHeader, t_RtcmCorrectionHeader, RtcmCorrectionHeader);

              void t_RtcmCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionHeader), &PY_TYPE_DEF(RtcmCorrectionHeader), module, "RtcmCorrectionHeader", 0);
              }

              void t_RtcmCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "class_", make_descriptor(RtcmCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionHeader::wrap_Object(RtcmCorrectionHeader(((t_RtcmCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getIodSsr());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrProviderId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochTime1s(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochTime1s", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setIodSsr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setMultipleMessageIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMultipleMessageIndicator", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrProviderId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrSolutionId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) value);
              }
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochTime1s(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochTime1s", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getIodSsr());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setIodSsr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setMultipleMessageIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "multipleMessageIndicator", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrProviderId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrProviderId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrSolutionId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(value);
              }
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSsrUpdateInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/orekit/propagation/FieldSpacecraftStateInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/util/Optional.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftStateInterpolator::class$ = NULL;
      jmethodID *FieldSpacecraftStateInterpolator::mids$ = NULL;
      bool FieldSpacecraftStateInterpolator::live$ = false;

      jclass FieldSpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_92e0516c51076c2f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_9fa6786ed88e4116] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_9188826e4203adb2] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_4e698ca934323ab9] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_f14b078adca14f3b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAbsPVAInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_c544f35060fb7c93] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_interpolate_00b61fcbde9783bc] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/FieldSpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_92e0516c51076c2f, a0, a1.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9fa6786ed88e4116, a0, a1.this$, a2.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9188826e4203adb2, a0, a1, a2.this$, a3.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4e698ca934323ab9, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1, const ::org::orekit::time::FieldTimeInterpolator & a2, const ::org::orekit::time::FieldTimeInterpolator & a3, const ::org::orekit::time::FieldTimeInterpolator & a4, const ::org::orekit::time::FieldTimeInterpolator & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f14b078adca14f3b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_9fe5189c8c3b230d]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_9fe5189c8c3b230d]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_9fe5189c8c3b230d]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_9fe5189c8c3b230d]));
      }

      jint FieldSpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_55546ef6a647f39b]);
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_9fe5189c8c3b230d]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_2c51111cc6894ba1]));
      }

      ::java::util::List FieldSpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_e62d3bb06d56d7e3]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldSpacecraftStateInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_c544f35060fb7c93], a0.this$, a1.this$));
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
      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_FieldSpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_FieldSpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_FieldSpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftStateInterpolator, t_FieldSpacecraftStateInterpolator, FieldSpacecraftStateInterpolator);
      PyObject *t_FieldSpacecraftStateInterpolator::wrap_Object(const FieldSpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftStateInterpolator), &PY_TYPE_DEF(FieldSpacecraftStateInterpolator), module, "FieldSpacecraftStateInterpolator", 0);
      }

      void t_FieldSpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "class_", make_descriptor(FieldSpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_FieldSpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftStateInterpolator::wrap_Object(FieldSpacecraftStateInterpolator(((t_FieldSpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2));
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
            ::org::orekit::frames::Frame a3((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldTimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::FieldTimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::FieldTimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data)
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
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *STMEquations::class$ = NULL;
          jmethodID *STMEquations::mids$ = NULL;
          bool STMEquations::live$ = false;

          jclass STMEquations::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/STMEquations");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_572e4de529747211] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_combinedDerivatives_f7e02f1d7093fbbb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_setInitialPhi_c3c52b1257139045] = env->getMethodID(cls, "setInitialPhi", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          STMEquations::STMEquations(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_572e4de529747211, a0.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives STMEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_f7e02f1d7093fbbb], a0.this$));
          }

          jint STMEquations::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          ::java::lang::String STMEquations::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          ::org::hipparchus::linear::RealMatrix STMEquations::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f], a0.this$));
          }

          ::org::orekit::propagation::SpacecraftState STMEquations::setInitialPhi(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialPhi_c3c52b1257139045], a0.this$));
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg);
          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds);
          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_getDimension(t_STMEquations *self);
          static PyObject *t_STMEquations_getName(t_STMEquations *self);
          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data);
          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data);
          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data);
          static PyGetSetDef t_STMEquations__fields_[] = {
            DECLARE_GET_FIELD(t_STMEquations, dimension),
            DECLARE_SET_FIELD(t_STMEquations, initialPhi),
            DECLARE_GET_FIELD(t_STMEquations, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_STMEquations__methods_[] = {
            DECLARE_METHOD(t_STMEquations, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_STMEquations, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getName, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getStateTransitionMatrix, METH_O),
            DECLARE_METHOD(t_STMEquations, setInitialPhi, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(STMEquations)[] = {
            { Py_tp_methods, t_STMEquations__methods_ },
            { Py_tp_init, (void *) t_STMEquations_init_ },
            { Py_tp_getset, t_STMEquations__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(STMEquations)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(STMEquations, t_STMEquations, STMEquations);

          void t_STMEquations::install(PyObject *module)
          {
            installType(&PY_TYPE(STMEquations), &PY_TYPE_DEF(STMEquations), module, "STMEquations", 0);
          }

          void t_STMEquations::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "class_", make_descriptor(STMEquations::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "wrapfn_", make_descriptor(t_STMEquations::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, STMEquations::initializeClass, 1)))
              return NULL;
            return t_STMEquations::wrap_Object(STMEquations(((t_STMEquations *) arg)->object.this$));
          }
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, STMEquations::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            STMEquations object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = STMEquations(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_getDimension(t_STMEquations *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_STMEquations_getName(t_STMEquations *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.setInitialPhi(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialPhi", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialPhi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialPhi", arg);
            return -1;
          }

          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
              mids$[mid_init$_24d37c4bbd61d20e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_2d4b2d13ddc9fb6a] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_integrate_f7872a0c37da2960] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_24d37c4bbd61d20e, a0.this$)) {}

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2d4b2d13ddc9fb6a, a0.this$, a1.this$)) {}

          ::org::hipparchus::CalculusFieldElement SymmetricFieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_f7872a0c37da2960], a0.this$));
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
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASOrbitalElements::class$ = NULL;
            jmethodID *SBASOrbitalElements::mids$ = NULL;
            bool SBASOrbitalElements::live$ = false;

            jclass SBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAGf0_b74f83833fdad017] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_b74f83833fdad017] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_55546ef6a647f39b] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_55546ef6a647f39b] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_b74f83833fdad017] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_55546ef6a647f39b] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_b74f83833fdad017] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_b74f83833fdad017] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_b74f83833fdad017] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_b74f83833fdad017] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_b74f83833fdad017] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_b74f83833fdad017] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_b74f83833fdad017] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble SBASOrbitalElements::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_b74f83833fdad017]);
            }

            jint SBASOrbitalElements::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_55546ef6a647f39b]);
            }

            jint SBASOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_55546ef6a647f39b]);
            }

            jdouble SBASOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_b74f83833fdad017]);
            }

            jint SBASOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_55546ef6a647f39b]);
            }

            jdouble SBASOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_b74f83833fdad017]);
            }

            jdouble SBASOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_b74f83833fdad017]);
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
            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data);
            static PyGetSetDef t_SBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf0),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf1),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, iODN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, time),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, toc),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, week),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, x),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, y),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, z),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_SBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getToc, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASOrbitalElements)[] = {
              { Py_tp_methods, t_SBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(SBASOrbitalElements, t_SBASOrbitalElements, SBASOrbitalElements);

            void t_SBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASOrbitalElements), &PY_TYPE_DEF(SBASOrbitalElements), module, "SBASOrbitalElements", 0);
            }

            void t_SBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "class_", make_descriptor(SBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "wrapfn_", make_descriptor(t_SBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_SBASOrbitalElements::wrap_Object(SBASOrbitalElements(((t_SBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
