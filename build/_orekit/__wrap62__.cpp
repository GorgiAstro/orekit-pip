#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_hermite_9e57cd72aba37735] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator;");
              mids$[mid_laguerre_ee6858ffadedf176] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_ee6858ffadedf176] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_9f4acbccfe7929d8] = env->getMethodID(cls, "legendre", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegratorFactory::FieldGaussIntegratorFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator FieldGaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_9e57cd72aba37735], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_ee6858ffadedf176], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_ee6858ffadedf176], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_9f4acbccfe7929d8], a0, a1.this$, a2.this$));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
                mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_bf1d7732f1acb697] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttraction::DSSTNewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

            JArray< jdouble > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5dbca2d049b16b82], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_c0df8831049775b0], a0.this$, a1.this$, a2.this$));
            }

            jdouble DSSTNewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_bf1d7732f1acb697], a0.this$);
            }

            ::java::util::List DSSTNewtonianAttraction::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743], a0.this$, a1.this$, a2.this$));
            }

            void DSSTNewtonianAttraction::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_3cff7c75ea06698c], a0.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9748e634dd1c969], a0.this$, a1.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda], a0.this$, a1.this$);
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractSingleFrequencyCombination::mids$ = NULL;
          bool PythonAbstractSingleFrequencyCombination::live$ = false;

          jclass PythonAbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5f9f97930f6e42c6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedValue_86ffecc08a63eff0] = env->getMethodID(cls, "getCombinedValue", "(DD)D");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractSingleFrequencyCombination::PythonAbstractSingleFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_5f9f97930f6e42c6, a0.this$, a1.this$)) {}

          void PythonAbstractSingleFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractSingleFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractSingleFrequencyCombination::pythonExtension(jlong a0) const
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
        namespace gnss {
          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractSingleFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractSingleFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractSingleFrequencyCombination, t_PythonAbstractSingleFrequencyCombination, PythonAbstractSingleFrequencyCombination);

          void t_PythonAbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractSingleFrequencyCombination), &PY_TYPE_DEF(PythonAbstractSingleFrequencyCombination), module, "PythonAbstractSingleFrequencyCombination", 1);
          }

          void t_PythonAbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "class_", make_descriptor(PythonAbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractSingleFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedValue", "(DD)D", (void *) t_PythonAbstractSingleFrequencyCombination_getCombinedValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractSingleFrequencyCombination_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractSingleFrequencyCombination::wrap_Object(PythonAbstractSingleFrequencyCombination(((t_PythonAbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractSingleFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractSingleFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dd", (double) a0, (double) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data)
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
#include "org/orekit/python/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
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
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayRealVector::class$ = NULL;
      jmethodID *ArrayRealVector::mids$ = NULL;
      bool ArrayRealVector::live$ = false;

      jclass ArrayRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_dffaee884eb24974] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_bdf205176b90cff1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_9a9aa0abbcb00912] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_d955f5fc3d98ac32] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;[D)V");
          mids$[mid_init$_884f262c698aecef] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_39fc43911b710424] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_59955994fa99e305] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_63367a666c67a5f1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Z)V");
          mids$[mid_init$_a47a33f7938e1575] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_12aca76acb10f1af] = env->getMethodID(cls, "<init>", "([DII)V");
          mids$[mid_init$_cbec0a973fc4f649] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;II)V");
          mids$[mid_add_c22498c468849d8f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_addToEntry_bb79ca80d85d0a66] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_494a704f5315e1ff] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayRealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_append_613347e28dd909cd] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_5df18376713b9c4f] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_f7b618ae5379b03b] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_combineToSelf_f7b618ae5379b03b] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_copy_57fd0363c1803550] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_dotProduct_c579a73494d20c67] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_c22498c468849d8f] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_ebeMultiply_c22498c468849d8f] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_60c7040667a7dc5c] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_c579a73494d20c67] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_46f85b53d9aedd96] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_c579a73494d20c67] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_dff5885c2c873297] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_c579a73494d20c67] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_dff5885c2c873297] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_38329ff0125c5584] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_map_2a9d7fa96d485792] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_mapAddToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_5df18376713b9c4f] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_2a9d7fa96d485792] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_outerProduct_54d602014b6af984] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_set_17db3a65980d3441] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_bb79ca80d85d0a66] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_7169a8c8a60b8b2c] = env->getMethodID(cls, "setSubVector", "(I[D)V");
          mids$[mid_setSubVector_18388821294f273e] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_subtract_c22498c468849d8f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_toArray_60c7040667a7dc5c] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
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

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayRealVector::ArrayRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_dffaee884eb24974, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_bdf205176b90cff1, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(jint a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_9a9aa0abbcb00912, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_d955f5fc3d98ac32, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_884f262c698aecef, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ::org::hipparchus::linear::RealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_39fc43911b710424, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_59955994fa99e305, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_63367a666c67a5f1, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_a47a33f7938e1575, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_12aca76acb10f1af, a0.this$, a1, a2)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_cbec0a973fc4f649, a0.this$, a1, a2)) {}

      ArrayRealVector ArrayRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_add_c22498c468849d8f], a0.this$));
      }

      void ArrayRealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_bb79ca80d85d0a66], a0, a1);
      }

      ArrayRealVector ArrayRealVector::append(const ArrayRealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_append_494a704f5315e1ff], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_613347e28dd909cd], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_5df18376713b9c4f], a0));
      }

      ArrayRealVector ArrayRealVector::combine(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combine_f7b618ae5379b03b], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::combineToSelf(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_f7b618ae5379b03b], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::copy() const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_copy_57fd0363c1803550]));
      }

      jdouble ArrayRealVector::dotProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_c579a73494d20c67], a0.this$);
      }

      ArrayRealVector ArrayRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_c22498c468849d8f], a0.this$));
      }

      ArrayRealVector ArrayRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_c22498c468849d8f], a0.this$));
      }

      jboolean ArrayRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      JArray< jdouble > ArrayRealVector::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_60c7040667a7dc5c]));
      }

      jint ArrayRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      jdouble ArrayRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_c579a73494d20c67], a0.this$);
      }

      jdouble ArrayRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_46f85b53d9aedd96], a0);
      }

      jdouble ArrayRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_c579a73494d20c67], a0.this$);
      }

      jdouble ArrayRealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_dff5885c2c873297]);
      }

      jdouble ArrayRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_c579a73494d20c67], a0.this$);
      }

      jdouble ArrayRealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_dff5885c2c873297]);
      }

      jdouble ArrayRealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_38329ff0125c5584], a0, a1));
      }

      jint ArrayRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean ArrayRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      jboolean ArrayRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
      }

      ArrayRealVector ArrayRealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_map_2a9d7fa96d485792], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapAddToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_5df18376713b9c4f], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapDivideToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_5df18376713b9c4f], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_5df18376713b9c4f], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapSubtractToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_5df18376713b9c4f], a0));
      }

      ArrayRealVector ArrayRealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_2a9d7fa96d485792], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix ArrayRealVector::outerProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_54d602014b6af984], a0.this$));
      }

      void ArrayRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_17db3a65980d3441], a0);
      }

      void ArrayRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_bb79ca80d85d0a66], a0, a1);
      }

      void ArrayRealVector::setSubVector(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void ArrayRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_18388821294f273e], a0, a1.this$);
      }

      ArrayRealVector ArrayRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_subtract_c22498c468849d8f], a0.this$));
      }

      JArray< jdouble > ArrayRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_60c7040667a7dc5c]));
      }

      ::java::lang::String ArrayRealVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_7fcbb8310174b200], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_1dd342028e49eba0], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_d74abf24a85ccc3b], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_2debe8623b864ef6], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_7fcbb8310174b200], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_1dd342028e49eba0], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_d74abf24a85ccc3b], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
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
      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self);
      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data);
      static PyGetSetDef t_ArrayRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayRealVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayRealVector, dimension),
        DECLARE_GET_FIELD(t_ArrayRealVector, infinite),
        DECLARE_GET_FIELD(t_ArrayRealVector, l1Norm),
        DECLARE_GET_FIELD(t_ArrayRealVector, lInfNorm),
        DECLARE_GET_FIELD(t_ArrayRealVector, naN),
        DECLARE_GET_FIELD(t_ArrayRealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayRealVector__methods_[] = {
        DECLARE_METHOD(t_ArrayRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Norm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, map, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapDivideToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapMultiplyToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapSubtractToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayRealVector)[] = {
        { Py_tp_methods, t_ArrayRealVector__methods_ },
        { Py_tp_init, (void *) t_ArrayRealVector_init_ },
        { Py_tp_getset, t_ArrayRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(ArrayRealVector, t_ArrayRealVector, ArrayRealVector);

      void t_ArrayRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayRealVector), &PY_TYPE_DEF(ArrayRealVector), module, "ArrayRealVector", 0);
      }

      void t_ArrayRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "class_", make_descriptor(ArrayRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "wrapfn_", make_descriptor(t_ArrayRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayRealVector::initializeClass, 1)))
          return NULL;
        return t_ArrayRealVector::wrap_Object(ArrayRealVector(((t_ArrayRealVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ArrayRealVector object((jobject) NULL);

            INT_CALL(object = ArrayRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k[D", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[Dk", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kZ", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OII", ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
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

      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ArrayRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combine", args, 2);
      }

      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combineToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args)
      {
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "dotProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getL1Norm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Norm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLInfNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "map", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapDivideToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapMultiplyToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapSubtractToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "outerProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "I[D", &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args)
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

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInDefaultOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args)
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

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data)
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
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
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
            mids$[mid_init$_61ebb1e166a7fe34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/geometry/fov/FieldOfView;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f78da94fd048d9d] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getFOV_8e0c5ec4b28dcc17] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getZone_5a6ba0b36fb0268c] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_create_5b0f6b9a4ea5e07b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FootprintOverlapDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FootprintOverlapDetector::FootprintOverlapDetector(const ::org::orekit::geometry::fov::FieldOfView & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_61ebb1e166a7fe34, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble FootprintOverlapDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::bodies::BodyShape FootprintOverlapDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f78da94fd048d9d]));
        }

        ::org::orekit::geometry::fov::FieldOfView FootprintOverlapDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_8e0c5ec4b28dcc17]));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet FootprintOverlapDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_5a6ba0b36fb0268c]));
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
#include "org/orekit/files/sp3/SP3Parser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Parser::class$ = NULL;
        jmethodID *SP3Parser::mids$ = NULL;
        bool SP3Parser::live$ = false;
        ::java::lang::String *SP3Parser::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_parse_98f055014fd032f8] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/sp3/SP3;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Parser::SP3Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::files::sp3::SP3 SP3Parser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::sp3::SP3(env->callObjectMethod(this$, mids$[mid_parse_98f055014fd032f8], a0.this$));
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
        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg);

        static PyMethodDef t_SP3Parser__methods_[] = {
          DECLARE_METHOD(t_SP3Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Parser)[] = {
          { Py_tp_methods, t_SP3Parser__methods_ },
          { Py_tp_init, (void *) t_SP3Parser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Parser, t_SP3Parser, SP3Parser);

        void t_SP3Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Parser), &PY_TYPE_DEF(SP3Parser), module, "SP3Parser", 0);
        }

        void t_SP3Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "class_", make_descriptor(SP3Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "wrapfn_", make_descriptor(t_SP3Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Parser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Parser::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Parser::initializeClass, 1)))
            return NULL;
          return t_SP3Parser::wrap_Object(SP3Parser(((t_SP3Parser *) arg)->object.this$));
        }
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds)
        {
          SP3Parser object((jobject) NULL);

          INT_CALL(object = SP3Parser());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::sp3::SP3 result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::sp3::t_SP3::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation$MismatchedEquations::class$ = NULL;
      jmethodID *VariationalEquation$MismatchedEquations::mids$ = NULL;
      bool VariationalEquation$MismatchedEquations::live$ = false;

      jclass VariationalEquation$MismatchedEquations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation$MismatchedEquations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation$MismatchedEquations::VariationalEquation$MismatchedEquations() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_VariationalEquation$MismatchedEquations__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation$MismatchedEquations)[] = {
        { Py_tp_methods, t_VariationalEquation$MismatchedEquations__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation$MismatchedEquations_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation$MismatchedEquations)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(VariationalEquation$MismatchedEquations, t_VariationalEquation$MismatchedEquations, VariationalEquation$MismatchedEquations);

      void t_VariationalEquation$MismatchedEquations::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation$MismatchedEquations), &PY_TYPE_DEF(VariationalEquation$MismatchedEquations), module, "VariationalEquation$MismatchedEquations", 0);
      }

      void t_VariationalEquation$MismatchedEquations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "class_", make_descriptor(VariationalEquation$MismatchedEquations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "wrapfn_", make_descriptor(t_VariationalEquation$MismatchedEquations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation$MismatchedEquations::wrap_Object(VariationalEquation$MismatchedEquations(((t_VariationalEquation$MismatchedEquations *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds)
      {
        VariationalEquation$MismatchedEquations object((jobject) NULL);

        INT_CALL(object = VariationalEquation$MismatchedEquations());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/OneWayAnova.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Collection.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *OneWayAnova::class$ = NULL;
        jmethodID *OneWayAnova::mids$ = NULL;
        bool OneWayAnova::live$ = false;

        jclass OneWayAnova::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/OneWayAnova");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_anovaFValue_7076a671f4259cfe] = env->getMethodID(cls, "anovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_7076a671f4259cfe] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_d1cc7de1f6c52201] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;Z)D");
            mids$[mid_anovaTest_c02897b462a4df37] = env->getMethodID(cls, "anovaTest", "(Ljava/util/Collection;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneWayAnova::OneWayAnova() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble OneWayAnova::anovaFValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaFValue_7076a671f4259cfe], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_7076a671f4259cfe], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0, jboolean a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_d1cc7de1f6c52201], a0.this$, a1);
        }

        jboolean OneWayAnova::anovaTest(const ::java::util::Collection & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_anovaTest_c02897b462a4df37], a0.this$, a1);
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
      namespace inference {
        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg);
        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args);
        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args);

        static PyMethodDef t_OneWayAnova__methods_[] = {
          DECLARE_METHOD(t_OneWayAnova, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, anovaFValue, METH_O),
          DECLARE_METHOD(t_OneWayAnova, anovaPValue, METH_VARARGS),
          DECLARE_METHOD(t_OneWayAnova, anovaTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneWayAnova)[] = {
          { Py_tp_methods, t_OneWayAnova__methods_ },
          { Py_tp_init, (void *) t_OneWayAnova_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneWayAnova)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneWayAnova, t_OneWayAnova, OneWayAnova);

        void t_OneWayAnova::install(PyObject *module)
        {
          installType(&PY_TYPE(OneWayAnova), &PY_TYPE_DEF(OneWayAnova), module, "OneWayAnova", 0);
        }

        void t_OneWayAnova::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "class_", make_descriptor(OneWayAnova::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "wrapfn_", make_descriptor(t_OneWayAnova::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneWayAnova::initializeClass, 1)))
            return NULL;
          return t_OneWayAnova::wrap_Object(OneWayAnova(((t_OneWayAnova *) arg)->object.this$));
        }
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneWayAnova::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds)
        {
          OneWayAnova object((jobject) NULL);

          INT_CALL(object = OneWayAnova());
          self->object = object;

          return 0;
        }

        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.anovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaFValue", arg);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble result;

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jdouble result;

              if (!parseArgs(args, "KZ", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "anovaPValue", args);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.anovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeShiftable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeShiftable::class$ = NULL;
      jmethodID *PythonFieldTimeShiftable::mids$ = NULL;
      bool PythonFieldTimeShiftable::live$ = false;

      jclass PythonFieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_58adb9ebab59b800] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_7813048a5e473cfe] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_KK_7813048a5e473cfe] = env->getMethodID(cls, "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeShiftable::PythonFieldTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
      }

      ::org::orekit::time::FieldTimeShiftable PythonFieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::time::FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_7813048a5e473cfe], a0.this$));
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
      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args);
      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self);
      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args);
      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg);
      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data);
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonFieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeShiftable)[] = {
        { Py_tp_methods, t_PythonFieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeShiftable_init_ },
        { Py_tp_getset, t_PythonFieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeShiftable, t_PythonFieldTimeShiftable, PythonFieldTimeShiftable);
      PyObject *t_PythonFieldTimeShiftable::wrap_Object(const PythonFieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeShiftable), &PY_TYPE_DEF(PythonFieldTimeShiftable), module, "PythonFieldTimeShiftable", 1);
      }

      void t_PythonFieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "class_", make_descriptor(PythonFieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "wrapfn_", make_descriptor(t_PythonFieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy1 },
          { "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy_KK2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeShiftable::wrap_Object(PythonFieldTimeShiftable(((t_PythonFieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args)
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

      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy_KK", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy_KK", result);
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

      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data)
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
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
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

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ClassicalRungeKuttaFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder, t_ClassicalRungeKuttaFieldIntegratorBuilder, ClassicalRungeKuttaFieldIntegratorBuilder);
        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(const ClassicalRungeKuttaFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegratorBuilder), module, "ClassicalRungeKuttaFieldIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(ClassicalRungeKuttaFieldIntegratorBuilder(((t_ClassicalRungeKuttaFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
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

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/DummyLocalizable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *DummyLocalizable::class$ = NULL;
      jmethodID *DummyLocalizable::mids$ = NULL;
      bool DummyLocalizable::live$ = false;

      jclass DummyLocalizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/DummyLocalizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DummyLocalizable::DummyLocalizable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      ::java::lang::String DummyLocalizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String DummyLocalizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }

      ::java::lang::String DummyLocalizable::toString() const
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
  namespace hipparchus {
    namespace exception {
      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg);
      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self);
      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args);
      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data);
      static PyGetSetDef t_DummyLocalizable__fields_[] = {
        DECLARE_GET_FIELD(t_DummyLocalizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DummyLocalizable__methods_[] = {
        DECLARE_METHOD(t_DummyLocalizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_DummyLocalizable, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_DummyLocalizable, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DummyLocalizable)[] = {
        { Py_tp_methods, t_DummyLocalizable__methods_ },
        { Py_tp_init, (void *) t_DummyLocalizable_init_ },
        { Py_tp_getset, t_DummyLocalizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DummyLocalizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DummyLocalizable, t_DummyLocalizable, DummyLocalizable);

      void t_DummyLocalizable::install(PyObject *module)
      {
        installType(&PY_TYPE(DummyLocalizable), &PY_TYPE_DEF(DummyLocalizable), module, "DummyLocalizable", 0);
      }

      void t_DummyLocalizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "class_", make_descriptor(DummyLocalizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "wrapfn_", make_descriptor(t_DummyLocalizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DummyLocalizable::initializeClass, 1)))
          return NULL;
        return t_DummyLocalizable::wrap_Object(DummyLocalizable(((t_DummyLocalizable *) arg)->object.this$));
      }
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DummyLocalizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        DummyLocalizable object((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          INT_CALL(object = DummyLocalizable(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DummyLocalizable), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereKlobucharMessage::class$ = NULL;
          jmethodID *IonosphereKlobucharMessage::mids$ = NULL;
          bool IonosphereKlobucharMessage::live$ = false;
          JArray< ::org::orekit::utils::units::Unit > *IonosphereKlobucharMessage::S_PER_SC_N = NULL;

          jclass IonosphereKlobucharMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereKlobucharMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a82ff7a18fa6993f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_60c7040667a7dc5c] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_60c7040667a7dc5c] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getRegionCode_57d80864ed5ce984] = env->getMethodID(cls, "getRegionCode", "()Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_setAlphaI_bb79ca80d85d0a66] = env->getMethodID(cls, "setAlphaI", "(ID)V");
              mids$[mid_setBetaI_bb79ca80d85d0a66] = env->getMethodID(cls, "setBetaI", "(ID)V");
              mids$[mid_setRegionCode_3a0ca53733eb8d6b] = env->getMethodID(cls, "setRegionCode", "(Lorg/orekit/files/rinex/navigation/RegionCode;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              S_PER_SC_N = new JArray< ::org::orekit::utils::units::Unit >(env->getStaticObjectField(cls, "S_PER_SC_N", "[Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereKlobucharMessage::IonosphereKlobucharMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_a82ff7a18fa6993f, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereKlobucharMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_60c7040667a7dc5c]));
          }

          JArray< jdouble > IonosphereKlobucharMessage::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_60c7040667a7dc5c]));
          }

          ::org::orekit::files::rinex::navigation::RegionCode IonosphereKlobucharMessage::getRegionCode() const
          {
            return ::org::orekit::files::rinex::navigation::RegionCode(env->callObjectMethod(this$, mids$[mid_getRegionCode_57d80864ed5ce984]));
          }

          void IonosphereKlobucharMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_bb79ca80d85d0a66], a0, a1);
          }

          void IonosphereKlobucharMessage::setBetaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setBetaI_bb79ca80d85d0a66], a0, a1);
          }

          void IonosphereKlobucharMessage::setRegionCode(const ::org::orekit::files::rinex::navigation::RegionCode & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRegionCode_3a0ca53733eb8d6b], a0.this$);
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
        namespace navigation {
          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data);
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereKlobucharMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, alpha),
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, beta),
            DECLARE_GETSET_FIELD(t_IonosphereKlobucharMessage, regionCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereKlobucharMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereKlobucharMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getRegionCode, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setAlphaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setBetaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setRegionCode, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereKlobucharMessage)[] = {
            { Py_tp_methods, t_IonosphereKlobucharMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereKlobucharMessage_init_ },
            { Py_tp_getset, t_IonosphereKlobucharMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereKlobucharMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereKlobucharMessage, t_IonosphereKlobucharMessage, IonosphereKlobucharMessage);

          void t_IonosphereKlobucharMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereKlobucharMessage), &PY_TYPE_DEF(IonosphereKlobucharMessage), module, "IonosphereKlobucharMessage", 0);
          }

          void t_IonosphereKlobucharMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "class_", make_descriptor(IonosphereKlobucharMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "wrapfn_", make_descriptor(t_IonosphereKlobucharMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereKlobucharMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "S_PER_SC_N", make_descriptor(JArray<jobject>(IonosphereKlobucharMessage::S_PER_SC_N->this$).wrap(::org::orekit::utils::units::t_Unit::wrap_jobject)));
          }

          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereKlobucharMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereKlobucharMessage::wrap_Object(IonosphereKlobucharMessage(((t_IonosphereKlobucharMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereKlobucharMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereKlobucharMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereKlobucharMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self)
          {
            ::org::orekit::files::rinex::navigation::RegionCode result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(result);
          }

          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setBetaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBetaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::RegionCode a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_RegionCode::parameters_))
            {
              OBJ_CALL(self->object.setRegionCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRegionCode", arg);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(value);
          }
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &value))
              {
                INT_CALL(self->object.setRegionCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "regionCode", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CRDDataBlock::class$ = NULL;
        jmethodID *CRD$CRDDataBlock::mids$ = NULL;
        bool CRD$CRDDataBlock::live$ = false;

        jclass CRD$CRDDataBlock::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CRDDataBlock");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAnglesData_e1c9729d63e3bf8c] = env->getMethodID(cls, "addAnglesData", "(Lorg/orekit/files/ilrs/CRD$AnglesMeasurement;)V");
            mids$[mid_addCalibrationData_b67c956e14455568] = env->getMethodID(cls, "addCalibrationData", "(Lorg/orekit/files/ilrs/CRD$Calibration;)V");
            mids$[mid_addCalibrationDetailData_4290ad220666e670] = env->getMethodID(cls, "addCalibrationDetailData", "(Lorg/orekit/files/ilrs/CRD$CalibrationDetail;)V");
            mids$[mid_addMeteoData_0bc8957e5ebed1cb] = env->getMethodID(cls, "addMeteoData", "(Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;)V");
            mids$[mid_addRangeData_381def2f82634b72] = env->getMethodID(cls, "addRangeData", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)V");
            mids$[mid_addRangeSupplementData_aed86880c02a39ba] = env->getMethodID(cls, "addRangeSupplementData", "(Lorg/orekit/files/ilrs/CRD$RangeSupplement;)V");
            mids$[mid_addSessionStatisticsData_a03b13e5108ccf85] = env->getMethodID(cls, "addSessionStatisticsData", "(Lorg/orekit/files/ilrs/CRD$SessionStatistics;)V");
            mids$[mid_getAnglesData_2afa36052df4765d] = env->getMethodID(cls, "getAnglesData", "()Ljava/util/List;");
            mids$[mid_getCalibrationData_2afa36052df4765d] = env->getMethodID(cls, "getCalibrationData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailData_2afa36052df4765d] = env->getMethodID(cls, "getCalibrationDetailData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_2afa36052df4765d] = env->getMethodID(cls, "getCalibrationDetailRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_aade4ea8882e7a2c] = env->getMethodID(cls, "getCalibrationDetailRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getCalibrationRecords_2afa36052df4765d] = env->getMethodID(cls, "getCalibrationRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationRecords_aade4ea8882e7a2c] = env->getMethodID(cls, "getCalibrationRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getConfigurationRecords_ec13daa2694209ba] = env->getMethodID(cls, "getConfigurationRecords", "()Lorg/orekit/files/ilrs/CRDConfiguration;");
            mids$[mid_getHeader_3e90095384e815b3] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CRDHeader;");
            mids$[mid_getMeteoData_9459dd149ced72d3] = env->getMethodID(cls, "getMeteoData", "()Lorg/orekit/files/ilrs/CRD$Meteo;");
            mids$[mid_getRangeData_2afa36052df4765d] = env->getMethodID(cls, "getRangeData", "()Ljava/util/List;");
            mids$[mid_getRangeSupplementData_2afa36052df4765d] = env->getMethodID(cls, "getRangeSupplementData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsData_2afa36052df4765d] = env->getMethodID(cls, "getSessionStatisticsData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsRecord_175ecc667c3042a0] = env->getMethodID(cls, "getSessionStatisticsRecord", "()Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getSessionStatisticsRecord_0d71ee317acb3db8] = env->getMethodID(cls, "getSessionStatisticsRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getWavelength_9ab55b39347deb7b] = env->getMethodID(cls, "getWavelength", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)D");
            mids$[mid_setConfigurationRecords_7433965f70e12915] = env->getMethodID(cls, "setConfigurationRecords", "(Lorg/orekit/files/ilrs/CRDConfiguration;)V");
            mids$[mid_setHeader_a1f5a92ac3db7946] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ilrs/CRDHeader;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CRDDataBlock::CRD$CRDDataBlock() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void CRD$CRDDataBlock::addAnglesData(const ::org::orekit::files::ilrs::CRD$AnglesMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAnglesData_e1c9729d63e3bf8c], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationData(const ::org::orekit::files::ilrs::CRD$Calibration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationData_b67c956e14455568], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationDetailData(const ::org::orekit::files::ilrs::CRD$CalibrationDetail & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationDetailData_4290ad220666e670], a0.this$);
        }

        void CRD$CRDDataBlock::addMeteoData(const ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeteoData_0bc8957e5ebed1cb], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeData(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeData_381def2f82634b72], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeSupplementData(const ::org::orekit::files::ilrs::CRD$RangeSupplement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeSupplementData_aed86880c02a39ba], a0.this$);
        }

        void CRD$CRDDataBlock::addSessionStatisticsData(const ::org::orekit::files::ilrs::CRD$SessionStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSessionStatisticsData_a03b13e5108ccf85], a0.this$);
        }

        ::java::util::List CRD$CRDDataBlock::getAnglesData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAnglesData_2afa36052df4765d]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationData_2afa36052df4765d]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailData_2afa36052df4765d]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_2afa36052df4765d]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_aade4ea8882e7a2c], a0.this$));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_2afa36052df4765d]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_aade4ea8882e7a2c], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration CRD$CRDDataBlock::getConfigurationRecords() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecords_ec13daa2694209ba]));
        }

        ::org::orekit::files::ilrs::CRDHeader CRD$CRDDataBlock::getHeader() const
        {
          return ::org::orekit::files::ilrs::CRDHeader(env->callObjectMethod(this$, mids$[mid_getHeader_3e90095384e815b3]));
        }

        ::org::orekit::files::ilrs::CRD$Meteo CRD$CRDDataBlock::getMeteoData() const
        {
          return ::org::orekit::files::ilrs::CRD$Meteo(env->callObjectMethod(this$, mids$[mid_getMeteoData_9459dd149ced72d3]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeData_2afa36052df4765d]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeSupplementData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeSupplementData_2afa36052df4765d]));
        }

        ::java::util::List CRD$CRDDataBlock::getSessionStatisticsData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsData_2afa36052df4765d]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord() const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_175ecc667c3042a0]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_0d71ee317acb3db8], a0.this$));
        }

        jdouble CRD$CRDDataBlock::getWavelength(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_9ab55b39347deb7b], a0.this$);
        }

        void CRD$CRDDataBlock::setConfigurationRecords(const ::org::orekit::files::ilrs::CRDConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationRecords_7433965f70e12915], a0.this$);
        }

        void CRD$CRDDataBlock::setHeader(const ::org::orekit::files::ilrs::CRDHeader & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHeader_a1f5a92ac3db7946], a0.this$);
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
        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data);
        static PyGetSetDef t_CRD$CRDDataBlock__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, anglesData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailRecords),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, configurationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, header),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, meteoData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeSupplementData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$CRDDataBlock__methods_[] = {
          DECLARE_METHOD(t_CRD$CRDDataBlock, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addAnglesData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationDetailData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addMeteoData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeSupplementData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addSessionStatisticsData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getAnglesData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getMeteoData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeSupplementData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getWavelength, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setConfigurationRecords, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setHeader, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CRDDataBlock)[] = {
          { Py_tp_methods, t_CRD$CRDDataBlock__methods_ },
          { Py_tp_init, (void *) t_CRD$CRDDataBlock_init_ },
          { Py_tp_getset, t_CRD$CRDDataBlock__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CRDDataBlock)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$CRDDataBlock, t_CRD$CRDDataBlock, CRD$CRDDataBlock);

        void t_CRD$CRDDataBlock::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CRDDataBlock), &PY_TYPE_DEF(CRD$CRDDataBlock), module, "CRD$CRDDataBlock", 0);
        }

        void t_CRD$CRDDataBlock::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "class_", make_descriptor(CRD$CRDDataBlock::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "wrapfn_", make_descriptor(t_CRD$CRDDataBlock::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CRDDataBlock::initializeClass, 1)))
            return NULL;
          return t_CRD$CRDDataBlock::wrap_Object(CRD$CRDDataBlock(((t_CRD$CRDDataBlock *) arg)->object.this$));
        }
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CRDDataBlock::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds)
        {
          CRD$CRDDataBlock object((jobject) NULL);

          INT_CALL(object = CRD$CRDDataBlock());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$AnglesMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$AnglesMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAnglesData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAnglesData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$Calibration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$Calibration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CalibrationDetail a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CalibrationDetail::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationDetailData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationDetailData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addMeteoData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeteoData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeSupplement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeSupplement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeSupplementData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeSupplementData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$SessionStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addSessionStatisticsData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSessionStatisticsData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$AnglesMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationDetailRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationDetailRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationDetailRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRD$Meteo result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeSupplement));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$SessionStatistics));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);
              OBJ_CALL(result = self->object.getSessionStatisticsRecord());
              return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSessionStatisticsRecord(a0));
                return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSessionStatisticsRecord", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getWavelength(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setConfigurationRecords(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationRecords", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDHeader a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setHeader(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &value))
            {
              INT_CALL(self->object.setConfigurationRecords(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationRecords", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &value))
            {
              INT_CALL(self->object.setHeader(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "header", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$Meteo value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsRecord());
          return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PythonSection.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonSection::class$ = NULL;
          jmethodID *PythonSection::mids$ = NULL;
          bool PythonSection::live$ = false;

          jclass PythonSection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonSection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSection::PythonSection() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonSection::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonSection::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonSection::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSection_finalize(t_PythonSection *self);
          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args);
          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data);
          static PyGetSetDef t_PythonSection__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSection, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSection__methods_[] = {
            DECLARE_METHOD(t_PythonSection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSection, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSection)[] = {
            { Py_tp_methods, t_PythonSection__methods_ },
            { Py_tp_init, (void *) t_PythonSection_init_ },
            { Py_tp_getset, t_PythonSection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSection, t_PythonSection, PythonSection);

          void t_PythonSection::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSection), &PY_TYPE_DEF(PythonSection), module, "PythonSection", 1);
          }

          void t_PythonSection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "class_", make_descriptor(PythonSection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "wrapfn_", make_descriptor(t_PythonSection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSection::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonSection_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PythonSection_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSection::initializeClass, 1)))
              return NULL;
            return t_PythonSection::wrap_Object(PythonSection(((t_PythonSection *) arg)->object.this$));
          }
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds)
          {
            PythonSection object((jobject) NULL);

            INT_CALL(object = PythonSection());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSection_finalize(t_PythonSection *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args)
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

          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data)
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
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationHeader::class$ = NULL;
          jmethodID *RinexObservationHeader::mids$ = NULL;
          bool RinexObservationHeader::live$ = false;

          jclass RinexObservationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addAppliedDCBS_924dc948b3328b0a] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_6ae122bae3989b66] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addGlonassChannel_229e08939b0b6df7] = env->getMethodID(cls, "addGlonassChannel", "(Lorg/orekit/files/rinex/observation/GlonassSatelliteChannel;)V");
              mids$[mid_addPhaseShiftCorrection_16a4824169a35abe] = env->getMethodID(cls, "addPhaseShiftCorrection", "(Lorg/orekit/files/rinex/observation/PhaseShiftCorrection;)V");
              mids$[mid_addScaleFactorCorrection_4b56a58268a38e26] = env->getMethodID(cls, "addScaleFactorCorrection", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/rinex/observation/ScaleFactorCorrection;)V");
              mids$[mid_getAgencyName_11b109bd155ca898] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAntennaAzimuth_dff5885c2c873297] = env->getMethodID(cls, "getAntennaAzimuth", "()D");
              mids$[mid_getAntennaBSight_d52645e0d4c07563] = env->getMethodID(cls, "getAntennaBSight", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaHeight_dff5885c2c873297] = env->getMethodID(cls, "getAntennaHeight", "()D");
              mids$[mid_getAntennaNumber_11b109bd155ca898] = env->getMethodID(cls, "getAntennaNumber", "()Ljava/lang/String;");
              mids$[mid_getAntennaPhaseCenter_d52645e0d4c07563] = env->getMethodID(cls, "getAntennaPhaseCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaReferencePoint_d52645e0d4c07563] = env->getMethodID(cls, "getAntennaReferencePoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaType_11b109bd155ca898] = env->getMethodID(cls, "getAntennaType", "()Ljava/lang/String;");
              mids$[mid_getAntennaZeroDirection_d52645e0d4c07563] = env->getMethodID(cls, "getAntennaZeroDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getApproxPos_d52645e0d4c07563] = env->getMethodID(cls, "getApproxPos", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getC1cCodePhaseBias_dff5885c2c873297] = env->getMethodID(cls, "getC1cCodePhaseBias", "()D");
              mids$[mid_getC1pCodePhaseBias_dff5885c2c873297] = env->getMethodID(cls, "getC1pCodePhaseBias", "()D");
              mids$[mid_getC2cCodePhaseBias_dff5885c2c873297] = env->getMethodID(cls, "getC2cCodePhaseBias", "()D");
              mids$[mid_getC2pCodePhaseBias_dff5885c2c873297] = env->getMethodID(cls, "getC2pCodePhaseBias", "()D");
              mids$[mid_getCenterMass_d52645e0d4c07563] = env->getMethodID(cls, "getCenterMass", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getClkOffset_570ce0828f81a2c1] = env->getMethodID(cls, "getClkOffset", "()I");
              mids$[mid_getEccentricities_73f627838730c264] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getGlonassChannels_2afa36052df4765d] = env->getMethodID(cls, "getGlonassChannels", "()Ljava/util/List;");
              mids$[mid_getInterval_dff5885c2c873297] = env->getMethodID(cls, "getInterval", "()D");
              mids$[mid_getLeapSeconds_570ce0828f81a2c1] = env->getMethodID(cls, "getLeapSeconds", "()I");
              mids$[mid_getLeapSecondsDayNum_570ce0828f81a2c1] = env->getMethodID(cls, "getLeapSecondsDayNum", "()I");
              mids$[mid_getLeapSecondsFuture_570ce0828f81a2c1] = env->getMethodID(cls, "getLeapSecondsFuture", "()I");
              mids$[mid_getLeapSecondsWeekNum_570ce0828f81a2c1] = env->getMethodID(cls, "getLeapSecondsWeekNum", "()I");
              mids$[mid_getListAppliedDCBS_2afa36052df4765d] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_2afa36052df4765d] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getMarkerName_11b109bd155ca898] = env->getMethodID(cls, "getMarkerName", "()Ljava/lang/String;");
              mids$[mid_getMarkerNumber_11b109bd155ca898] = env->getMethodID(cls, "getMarkerNumber", "()Ljava/lang/String;");
              mids$[mid_getMarkerType_11b109bd155ca898] = env->getMethodID(cls, "getMarkerType", "()Ljava/lang/String;");
              mids$[mid_getNbObsPerSat_6f5a75ccd8c04465] = env->getMethodID(cls, "getNbObsPerSat", "()Ljava/util/Map;");
              mids$[mid_getNbSat_570ce0828f81a2c1] = env->getMethodID(cls, "getNbSat", "()I");
              mids$[mid_getObservationCode_11b109bd155ca898] = env->getMethodID(cls, "getObservationCode", "()Ljava/lang/String;");
              mids$[mid_getObserverName_11b109bd155ca898] = env->getMethodID(cls, "getObserverName", "()Ljava/lang/String;");
              mids$[mid_getPhaseCenterSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getPhaseCenterSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getPhaseShiftCorrections_2afa36052df4765d] = env->getMethodID(cls, "getPhaseShiftCorrections", "()Ljava/util/List;");
              mids$[mid_getReceiverNumber_11b109bd155ca898] = env->getMethodID(cls, "getReceiverNumber", "()Ljava/lang/String;");
              mids$[mid_getReceiverType_11b109bd155ca898] = env->getMethodID(cls, "getReceiverType", "()Ljava/lang/String;");
              mids$[mid_getReceiverVersion_11b109bd155ca898] = env->getMethodID(cls, "getReceiverVersion", "()Ljava/lang/String;");
              mids$[mid_getScaleFactorCorrections_a32fd2dc2b4dc37a] = env->getMethodID(cls, "getScaleFactorCorrections", "(Lorg/orekit/gnss/SatelliteSystem;)Ljava/util/List;");
              mids$[mid_getSignalStrengthUnit_11b109bd155ca898] = env->getMethodID(cls, "getSignalStrengthUnit", "()Ljava/lang/String;");
              mids$[mid_getTFirstObs_85703d13e302437e] = env->getMethodID(cls, "getTFirstObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTLastObs_85703d13e302437e] = env->getMethodID(cls, "getTLastObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTypeObs_6f5a75ccd8c04465] = env->getMethodID(cls, "getTypeObs", "()Ljava/util/Map;");
              mids$[mid_setAgencyName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaAzimuth_17db3a65980d3441] = env->getMethodID(cls, "setAntennaAzimuth", "(D)V");
              mids$[mid_setAntennaBSight_029ff0cbf68ea054] = env->getMethodID(cls, "setAntennaBSight", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaHeight_17db3a65980d3441] = env->getMethodID(cls, "setAntennaHeight", "(D)V");
              mids$[mid_setAntennaNumber_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAntennaNumber", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaPhaseCenter_029ff0cbf68ea054] = env->getMethodID(cls, "setAntennaPhaseCenter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaReferencePoint_029ff0cbf68ea054] = env->getMethodID(cls, "setAntennaReferencePoint", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaType_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAntennaType", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaZeroDirection_029ff0cbf68ea054] = env->getMethodID(cls, "setAntennaZeroDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setApproxPos_029ff0cbf68ea054] = env->getMethodID(cls, "setApproxPos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setC1cCodePhaseBias_17db3a65980d3441] = env->getMethodID(cls, "setC1cCodePhaseBias", "(D)V");
              mids$[mid_setC1pCodePhaseBias_17db3a65980d3441] = env->getMethodID(cls, "setC1pCodePhaseBias", "(D)V");
              mids$[mid_setC2cCodePhaseBias_17db3a65980d3441] = env->getMethodID(cls, "setC2cCodePhaseBias", "(D)V");
              mids$[mid_setC2pCodePhaseBias_17db3a65980d3441] = env->getMethodID(cls, "setC2pCodePhaseBias", "(D)V");
              mids$[mid_setCenterMass_029ff0cbf68ea054] = env->getMethodID(cls, "setCenterMass", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setClkOffset_99803b0791f320ff] = env->getMethodID(cls, "setClkOffset", "(I)V");
              mids$[mid_setEccentricities_6008d3447ce702ca] = env->getMethodID(cls, "setEccentricities", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_setInterval_17db3a65980d3441] = env->getMethodID(cls, "setInterval", "(D)V");
              mids$[mid_setLeapSeconds_99803b0791f320ff] = env->getMethodID(cls, "setLeapSeconds", "(I)V");
              mids$[mid_setLeapSecondsDayNum_99803b0791f320ff] = env->getMethodID(cls, "setLeapSecondsDayNum", "(I)V");
              mids$[mid_setLeapSecondsFuture_99803b0791f320ff] = env->getMethodID(cls, "setLeapSecondsFuture", "(I)V");
              mids$[mid_setLeapSecondsWeekNum_99803b0791f320ff] = env->getMethodID(cls, "setLeapSecondsWeekNum", "(I)V");
              mids$[mid_setMarkerName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setMarkerName", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerNumber_d0bc48d5b00dc40c] = env->getMethodID(cls, "setMarkerNumber", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerType_d0bc48d5b00dc40c] = env->getMethodID(cls, "setMarkerType", "(Ljava/lang/String;)V");
              mids$[mid_setNbObsPerSatellite_5704e79955ccac22] = env->getMethodID(cls, "setNbObsPerSatellite", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/gnss/ObservationType;I)V");
              mids$[mid_setNbSat_99803b0791f320ff] = env->getMethodID(cls, "setNbSat", "(I)V");
              mids$[mid_setObservationCode_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObservationCode", "(Ljava/lang/String;)V");
              mids$[mid_setObserverName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObserverName", "(Ljava/lang/String;)V");
              mids$[mid_setPhaseCenterSystem_10d44f5686b1d39e] = env->getMethodID(cls, "setPhaseCenterSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setReceiverNumber_d0bc48d5b00dc40c] = env->getMethodID(cls, "setReceiverNumber", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverType_d0bc48d5b00dc40c] = env->getMethodID(cls, "setReceiverType", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverVersion_d0bc48d5b00dc40c] = env->getMethodID(cls, "setReceiverVersion", "(Ljava/lang/String;)V");
              mids$[mid_setSignalStrengthUnit_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSignalStrengthUnit", "(Ljava/lang/String;)V");
              mids$[mid_setTFirstObs_600a2a61652bc473] = env->getMethodID(cls, "setTFirstObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTLastObs_600a2a61652bc473] = env->getMethodID(cls, "setTLastObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTypeObs_9814758cc9231e7c] = env->getMethodID(cls, "setTypeObs", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationHeader::RinexObservationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void RinexObservationHeader::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_924dc948b3328b0a], a0.this$);
          }

          void RinexObservationHeader::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_6ae122bae3989b66], a0.this$);
          }

          void RinexObservationHeader::addGlonassChannel(const ::org::orekit::files::rinex::observation::GlonassSatelliteChannel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassChannel_229e08939b0b6df7], a0.this$);
          }

          void RinexObservationHeader::addPhaseShiftCorrection(const ::org::orekit::files::rinex::observation::PhaseShiftCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPhaseShiftCorrection_16a4824169a35abe], a0.this$);
          }

          void RinexObservationHeader::addScaleFactorCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::rinex::observation::ScaleFactorCorrection & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addScaleFactorCorrection_4b56a58268a38e26], a0.this$, a1.this$);
          }

          ::java::lang::String RinexObservationHeader::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_11b109bd155ca898]));
          }

          jdouble RinexObservationHeader::getAntennaAzimuth() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaAzimuth_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaBSight() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaBSight_d52645e0d4c07563]));
          }

          jdouble RinexObservationHeader::getAntennaHeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaHeight_dff5885c2c873297]);
          }

          ::java::lang::String RinexObservationHeader::getAntennaNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaNumber_11b109bd155ca898]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaPhaseCenter() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaPhaseCenter_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaReferencePoint() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaReferencePoint_d52645e0d4c07563]));
          }

          ::java::lang::String RinexObservationHeader::getAntennaType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_11b109bd155ca898]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaZeroDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaZeroDirection_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getApproxPos() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getApproxPos_d52645e0d4c07563]));
          }

          jdouble RinexObservationHeader::getC1cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1cCodePhaseBias_dff5885c2c873297]);
          }

          jdouble RinexObservationHeader::getC1pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1pCodePhaseBias_dff5885c2c873297]);
          }

          jdouble RinexObservationHeader::getC2cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2cCodePhaseBias_dff5885c2c873297]);
          }

          jdouble RinexObservationHeader::getC2pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2pCodePhaseBias_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getCenterMass() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterMass_d52645e0d4c07563]));
          }

          jint RinexObservationHeader::getClkOffset() const
          {
            return env->callIntMethod(this$, mids$[mid_getClkOffset_570ce0828f81a2c1]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D RinexObservationHeader::getEccentricities() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEccentricities_73f627838730c264]));
          }

          ::java::util::List RinexObservationHeader::getGlonassChannels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassChannels_2afa36052df4765d]));
          }

          jdouble RinexObservationHeader::getInterval() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInterval_dff5885c2c873297]);
          }

          jint RinexObservationHeader::getLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSeconds_570ce0828f81a2c1]);
          }

          jint RinexObservationHeader::getLeapSecondsDayNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsDayNum_570ce0828f81a2c1]);
          }

          jint RinexObservationHeader::getLeapSecondsFuture() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsFuture_570ce0828f81a2c1]);
          }

          jint RinexObservationHeader::getLeapSecondsWeekNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsWeekNum_570ce0828f81a2c1]);
          }

          ::java::util::List RinexObservationHeader::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_2afa36052df4765d]));
          }

          ::java::util::List RinexObservationHeader::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_2afa36052df4765d]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerName_11b109bd155ca898]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerNumber_11b109bd155ca898]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerType_11b109bd155ca898]));
          }

          ::java::util::Map RinexObservationHeader::getNbObsPerSat() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getNbObsPerSat_6f5a75ccd8c04465]));
          }

          jint RinexObservationHeader::getNbSat() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSat_570ce0828f81a2c1]);
          }

          ::java::lang::String RinexObservationHeader::getObservationCode() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObservationCode_11b109bd155ca898]));
          }

          ::java::lang::String RinexObservationHeader::getObserverName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObserverName_11b109bd155ca898]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexObservationHeader::getPhaseCenterSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getPhaseCenterSystem_01acae5c1a253b8e]));
          }

          ::java::util::List RinexObservationHeader::getPhaseShiftCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPhaseShiftCorrections_2afa36052df4765d]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverNumber_11b109bd155ca898]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverType_11b109bd155ca898]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverVersion() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverVersion_11b109bd155ca898]));
          }

          ::java::util::List RinexObservationHeader::getScaleFactorCorrections(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getScaleFactorCorrections_a32fd2dc2b4dc37a], a0.this$));
          }

          ::java::lang::String RinexObservationHeader::getSignalStrengthUnit() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSignalStrengthUnit_11b109bd155ca898]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTFirstObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTFirstObs_85703d13e302437e]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTLastObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTLastObs_85703d13e302437e]));
          }

          ::java::util::Map RinexObservationHeader::getTypeObs() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTypeObs_6f5a75ccd8c04465]));
          }

          void RinexObservationHeader::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setAntennaAzimuth(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaAzimuth_17db3a65980d3441], a0);
          }

          void RinexObservationHeader::setAntennaBSight(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaBSight_029ff0cbf68ea054], a0.this$);
          }

          void RinexObservationHeader::setAntennaHeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaHeight_17db3a65980d3441], a0);
          }

          void RinexObservationHeader::setAntennaNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaNumber_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setAntennaPhaseCenter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaPhaseCenter_029ff0cbf68ea054], a0.this$);
          }

          void RinexObservationHeader::setAntennaReferencePoint(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaReferencePoint_029ff0cbf68ea054], a0.this$);
          }

          void RinexObservationHeader::setAntennaType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaType_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setAntennaZeroDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaZeroDirection_029ff0cbf68ea054], a0.this$);
          }

          void RinexObservationHeader::setApproxPos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setApproxPos_029ff0cbf68ea054], a0.this$);
          }

          void RinexObservationHeader::setC1cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1cCodePhaseBias_17db3a65980d3441], a0);
          }

          void RinexObservationHeader::setC1pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1pCodePhaseBias_17db3a65980d3441], a0);
          }

          void RinexObservationHeader::setC2cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2cCodePhaseBias_17db3a65980d3441], a0);
          }

          void RinexObservationHeader::setC2pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2pCodePhaseBias_17db3a65980d3441], a0);
          }

          void RinexObservationHeader::setCenterMass(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCenterMass_029ff0cbf68ea054], a0.this$);
          }

          void RinexObservationHeader::setClkOffset(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClkOffset_99803b0791f320ff], a0);
          }

          void RinexObservationHeader::setEccentricities(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setEccentricities_6008d3447ce702ca], a0.this$);
          }

          void RinexObservationHeader::setInterval(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterval_17db3a65980d3441], a0);
          }

          void RinexObservationHeader::setLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSeconds_99803b0791f320ff], a0);
          }

          void RinexObservationHeader::setLeapSecondsDayNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsDayNum_99803b0791f320ff], a0);
          }

          void RinexObservationHeader::setLeapSecondsFuture(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsFuture_99803b0791f320ff], a0);
          }

          void RinexObservationHeader::setLeapSecondsWeekNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsWeekNum_99803b0791f320ff], a0);
          }

          void RinexObservationHeader::setMarkerName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setMarkerNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerNumber_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setMarkerType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerType_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setNbObsPerSatellite(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbObsPerSatellite_5704e79955ccac22], a0.this$, a1.this$, a2);
          }

          void RinexObservationHeader::setNbSat(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbSat_99803b0791f320ff], a0);
          }

          void RinexObservationHeader::setObservationCode(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObservationCode_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setObserverName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObserverName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setPhaseCenterSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setPhaseCenterSystem_10d44f5686b1d39e], a0.this$);
          }

          void RinexObservationHeader::setReceiverNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverNumber_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setReceiverType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverType_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setReceiverVersion(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverVersion_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setSignalStrengthUnit(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSignalStrengthUnit_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexObservationHeader::setTFirstObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTFirstObs_600a2a61652bc473], a0.this$);
          }

          void RinexObservationHeader::setTLastObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTLastObs_600a2a61652bc473], a0.this$);
          }

          void RinexObservationHeader::setTypeObs(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::util::List & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setTypeObs_9814758cc9231e7c], a0.this$, a1.this$);
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
          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data);
          static PyGetSetDef t_RinexObservationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, agencyName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaAzimuth),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaBSight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaHeight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaPhaseCenter),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaReferencePoint),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaZeroDirection),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, approxPos),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, centerMass),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, clkOffset),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, eccentricities),
            DECLARE_GET_FIELD(t_RinexObservationHeader, glonassChannels),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, interval),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSeconds),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsDayNum),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsFuture),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsWeekNum),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedPCVS),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerType),
            DECLARE_GET_FIELD(t_RinexObservationHeader, nbObsPerSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, nbSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observationCode),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, phaseCenterSystem),
            DECLARE_GET_FIELD(t_RinexObservationHeader, phaseShiftCorrections),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverVersion),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, signalStrengthUnit),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tFirstObs),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tLastObs),
            DECLARE_GET_FIELD(t_RinexObservationHeader, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexObservationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addGlonassChannel, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addPhaseShiftCorrection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addScaleFactorCorrection, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaAzimuth, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaBSight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaHeight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaPhaseCenter, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaReferencePoint, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaZeroDirection, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getApproxPos, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getCenterMass, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getEccentricities, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getGlonassChannels, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getInterval, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsDayNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsFuture, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsWeekNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbObsPerSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObservationCode, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObserverName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseCenterSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseShiftCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getScaleFactorCorrections, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, getSignalStrengthUnit, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTFirstObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTLastObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTypeObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaAzimuth, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaBSight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaHeight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaPhaseCenter, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaReferencePoint, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaZeroDirection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setApproxPos, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setCenterMass, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setClkOffset, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setEccentricities, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setInterval, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsDayNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsFuture, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsWeekNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setNbObsPerSatellite, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setNbSat, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObservationCode, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObserverName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setPhaseCenterSystem, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverVersion, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setSignalStrengthUnit, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTFirstObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTLastObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTypeObs, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationHeader)[] = {
            { Py_tp_methods, t_RinexObservationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexObservationHeader_init_ },
            { Py_tp_getset, t_RinexObservationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexObservationHeader, t_RinexObservationHeader, RinexObservationHeader);

          void t_RinexObservationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationHeader), &PY_TYPE_DEF(RinexObservationHeader), module, "RinexObservationHeader", 0);
          }

          void t_RinexObservationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "class_", make_descriptor(RinexObservationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "wrapfn_", make_descriptor(t_RinexObservationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexObservationHeader::wrap_Object(RinexObservationHeader(((t_RinexObservationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexObservationHeader object((jobject) NULL);

            INT_CALL(object = RinexObservationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::GlonassSatelliteChannel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::GlonassSatelliteChannel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassChannel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassChannel", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::PhaseShiftCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::PhaseShiftCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPhaseShiftCorrection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPhaseShiftCorrection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::files::rinex::observation::ScaleFactorCorrection a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::rinex::observation::ScaleFactorCorrection::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(self->object.addScaleFactorCorrection(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScaleFactorCorrection", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getClkOffset());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(GlonassSatelliteChannel));
          }

          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInterval());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSat());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationCode());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObserverName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(PhaseShiftCorrection));
          }

          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverVersion());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.getScaleFactorCorrections(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ScaleFactorCorrection));
            }

            PyErr_SetArgsError((PyObject *) self, "getScaleFactorCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSignalStrengthUnit());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaAzimuth(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaAzimuth", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaBSight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaBSight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaHeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaHeight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaPhaseCenter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaPhaseCenter", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaReferencePoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaReferencePoint", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaZeroDirection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaZeroDirection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setApproxPos(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setApproxPos", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCenterMass(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCenterMass", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setClkOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClkOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setEccentricities(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setEccentricities", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterval(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterval", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsDayNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsDayNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsFuture(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsFuture", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsWeekNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsWeekNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;

            if (!parseArgs(args, "kKI", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
            {
              OBJ_CALL(self->object.setNbObsPerSatellite(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbObsPerSatellite", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNbSat(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbSat", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObservationCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObservationCode", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObserverName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObserverName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setPhaseCenterSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setPhaseCenterSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setSignalStrengthUnit(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSignalStrengthUnit", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTFirstObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTFirstObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTLastObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTLastObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setTypeObs(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTypeObs", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaAzimuth(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaAzimuth", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaBSight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaBSight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaHeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaHeight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaPhaseCenter(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaPhaseCenter", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaReferencePoint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaReferencePoint", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaZeroDirection(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaZeroDirection", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setApproxPos(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "approxPos", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setCenterMass(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "centerMass", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getClkOffset());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setClkOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "clkOffset", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &value))
              {
                INT_CALL(self->object.setEccentricities(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "eccentricities", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInterval());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterval(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interval", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsDayNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsDayNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsFuture(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsFuture", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsWeekNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsWeekNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSat());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNbSat(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "nbSat", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationCode());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObservationCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observationCode", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObserverName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObserverName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setPhaseCenterSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "phaseCenterSystem", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverVersion());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverVersion", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSignalStrengthUnit());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setSignalStrengthUnit(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "signalStrengthUnit", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTFirstObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tFirstObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTLastObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tLastObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/lang/InstantiationException.h"
#include "java/io/IOException.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle$Control::class$ = NULL;
    jmethodID *ResourceBundle$Control::mids$ = NULL;
    bool ResourceBundle$Control::live$ = false;
    ::java::util::List *ResourceBundle$Control::FORMAT_CLASS = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_DEFAULT = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_PROPERTIES = NULL;
    jlong ResourceBundle$Control::TTL_DONT_CACHE = (jlong) 0;
    jlong ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL = (jlong) 0;

    jclass ResourceBundle$Control::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle$Control");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getCandidateLocales_18ba79b982b22ae5] = env->getMethodID(cls, "getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;");
        mids$[mid_getControl_4dfa5fc487ef83e5] = env->getStaticMethodID(cls, "getControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getFallbackLocale_fbb9cd1fb8d7bba3] = env->getMethodID(cls, "getFallbackLocale", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;");
        mids$[mid_getFormats_aade4ea8882e7a2c] = env->getMethodID(cls, "getFormats", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_getNoFallbackControl_4dfa5fc487ef83e5] = env->getStaticMethodID(cls, "getNoFallbackControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getTimeToLive_85ce65c5709e688f] = env->getMethodID(cls, "getTimeToLive", "(Ljava/lang/String;Ljava/util/Locale;)J");
        mids$[mid_needsReload_2e0fe1dfd18b4d7d] = env->getMethodID(cls, "needsReload", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z");
        mids$[mid_newBundle_b7c54cce3a9709ed] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");
        mids$[mid_toBundleName_ce588e67ac292ba0] = env->getMethodID(cls, "toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toResourceName_d3f6016a3bf93dcd] = env->getMethodID(cls, "toResourceName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FORMAT_CLASS = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_CLASS", "Ljava/util/List;"));
        FORMAT_DEFAULT = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_DEFAULT", "Ljava/util/List;"));
        FORMAT_PROPERTIES = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_PROPERTIES", "Ljava/util/List;"));
        TTL_DONT_CACHE = env->getStaticLongField(cls, "TTL_DONT_CACHE");
        TTL_NO_EXPIRATION_CONTROL = env->getStaticLongField(cls, "TTL_NO_EXPIRATION_CONTROL");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List ResourceBundle$Control::getCandidateLocales(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCandidateLocales_18ba79b982b22ae5], a0.this$, a1.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getControl_4dfa5fc487ef83e5], a0.this$));
    }

    ::java::util::Locale ResourceBundle$Control::getFallbackLocale(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getFallbackLocale_fbb9cd1fb8d7bba3], a0.this$, a1.this$));
    }

    ::java::util::List ResourceBundle$Control::getFormats(const ::java::lang::String & a0) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormats_aade4ea8882e7a2c], a0.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getNoFallbackControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getNoFallbackControl_4dfa5fc487ef83e5], a0.this$));
    }

    jlong ResourceBundle$Control::getTimeToLive(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return env->callLongMethod(this$, mids$[mid_getTimeToLive_85ce65c5709e688f], a0.this$, a1.this$);
    }

    jboolean ResourceBundle$Control::needsReload(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, const ::java::util::ResourceBundle & a4, jlong a5) const
    {
      return env->callBooleanMethod(this$, mids$[mid_needsReload_2e0fe1dfd18b4d7d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5);
    }

    ::java::util::ResourceBundle ResourceBundle$Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
    {
      return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_b7c54cce3a9709ed], a0.this$, a1.this$, a2.this$, a3.this$, a4));
    }

    ::java::lang::String ResourceBundle$Control::toBundleName(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toBundleName_ce588e67ac292ba0], a0.this$, a1.this$));
    }

    ::java::lang::String ResourceBundle$Control::toResourceName(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toResourceName_d3f6016a3bf93dcd], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args);

    static PyMethodDef t_ResourceBundle$Control__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle$Control, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getCandidateLocales, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFallbackLocale, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFormats, METH_O),
      DECLARE_METHOD(t_ResourceBundle$Control, getNoFallbackControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getTimeToLive, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, needsReload, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, newBundle, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toBundleName, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toResourceName, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle$Control)[] = {
      { Py_tp_methods, t_ResourceBundle$Control__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle$Control)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle$Control, t_ResourceBundle$Control, ResourceBundle$Control);

    void t_ResourceBundle$Control::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle$Control), &PY_TYPE_DEF(ResourceBundle$Control), module, "ResourceBundle$Control", 0);
    }

    void t_ResourceBundle$Control::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "class_", make_descriptor(ResourceBundle$Control::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "wrapfn_", make_descriptor(t_ResourceBundle$Control::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "boxfn_", make_descriptor(boxObject));
      env->getClass(ResourceBundle$Control::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_CLASS", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_CLASS)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_DEFAULT", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_DEFAULT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_PROPERTIES", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_PROPERTIES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_DONT_CACHE", make_descriptor(ResourceBundle$Control::TTL_DONT_CACHE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_NO_EXPIRATION_CONTROL", make_descriptor(ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL));
    }

    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle$Control::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle$Control::wrap_Object(ResourceBundle$Control(((t_ResourceBundle$Control *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle$Control::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getCandidateLocales(a0, a1));
        return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
      }

      PyErr_SetArgsError((PyObject *) self, "getCandidateLocales", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::Locale result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getFallbackLocale(a0, a1));
        return ::java::util::t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getFallbackLocale", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getFormats(a0));
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      PyErr_SetArgsError((PyObject *) self, "getFormats", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getNoFallbackControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getNoFallbackControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      jlong result;

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getTimeToLive(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "getTimeToLive", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      ::java::util::ResourceBundle a4((jobject) NULL);
      jlong a5;
      jboolean result;

      if (!parseArgs(args, "skskkJ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = self->object.needsReload(a0, a1, a2, a3, a4, a5));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "needsReload", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      jboolean a4;
      ::java::util::ResourceBundle result((jobject) NULL);

      if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
        return ::java::util::t_ResourceBundle::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.toBundleName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toBundleName", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.toResourceName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toResourceName", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Metadata::class$ = NULL;
          jmethodID *Metadata::mids$ = NULL;
          bool Metadata::live$ = false;

          jclass Metadata::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Metadata");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTimeSystem_ee0a6b60b63a969e] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_setTimeSystem_08d7048316d8d7b2] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
              mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");
              mids$[mid_getLaunchYear_02f02486e9727d8f] = env->getMethodID(cls, "getLaunchYear", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchNumber_02f02486e9727d8f] = env->getMethodID(cls, "getLaunchNumber", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchPiece_92807efd57acb082] = env->getMethodID(cls, "getLaunchPiece", "(Ljava/lang/String;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem Metadata::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_ee0a6b60b63a969e]));
          }

          void Metadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_08d7048316d8d7b2], a0.this$);
          }

          void Metadata::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
        namespace section {
          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self);
          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg);
          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args);
          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data);
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data);
          static PyGetSetDef t_Metadata__fields_[] = {
            DECLARE_GETSET_FIELD(t_Metadata, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Metadata__methods_[] = {
            DECLARE_METHOD(t_Metadata, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_Metadata, setTimeSystem, METH_O),
            DECLARE_METHOD(t_Metadata, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Metadata)[] = {
            { Py_tp_methods, t_Metadata__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Metadata__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Metadata)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Metadata, t_Metadata, Metadata);

          void t_Metadata::install(PyObject *module)
          {
            installType(&PY_TYPE(Metadata), &PY_TYPE_DEF(Metadata), module, "Metadata", 0);
          }

          void t_Metadata::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "class_", make_descriptor(Metadata::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "wrapfn_", make_descriptor(t_Metadata::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Metadata::initializeClass, 1)))
              return NULL;
            return t_Metadata::wrap_Object(Metadata(((t_Metadata *) arg)->object.this$));
          }
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Metadata::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Metadata), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PolynomialSolver::class$ = NULL;
        jmethodID *PolynomialSolver::mids$ = NULL;
        bool PolynomialSolver::live$ = false;

        jclass PolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PolynomialSolver");

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
        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_PolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_PolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSolver)[] = {
          { Py_tp_methods, t_PolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(PolynomialSolver, t_PolynomialSolver, PolynomialSolver);

        void t_PolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSolver), &PY_TYPE_DEF(PolynomialSolver), module, "PolynomialSolver", 0);
        }

        void t_PolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "class_", make_descriptor(PolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "wrapfn_", make_descriptor(t_PolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_PolynomialSolver::wrap_Object(PolynomialSolver(((t_PolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/Action.h"
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
            mids$[mid_valueOf_da19fce7787ffd31] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_values_738c81813a452b9f] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/Action;");

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
          return Action(env->callStaticObjectMethod(cls, mids$[mid_valueOf_da19fce7787ffd31], a0.this$));
        }

        JArray< Action > Action::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Action >(env->callStaticObjectMethod(cls, mids$[mid_values_738c81813a452b9f]));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *AbstractSimplex::class$ = NULL;
            jmethodID *AbstractSimplex::mids$ = NULL;
            bool AbstractSimplex::live$ = false;

            jclass AbstractSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_fa9d415d19f69361] = env->getMethodID(cls, "build", "([D)V");
                mids$[mid_evaluate_eb88542b81649386] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
                mids$[mid_getPoint_2ba52aef409b53cc] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getPoints_fb04b599bc7d04e3] = env->getMethodID(cls, "getPoints", "()[Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSize", "()I");
                mids$[mid_iterate_eb88542b81649386] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_replaceWorstPoint_7d5bcbaf4bc6205e] = env->getMethodID(cls, "replaceWorstPoint", "(Lorg/hipparchus/optim/PointValuePair;Ljava/util/Comparator;)V");
                mids$[mid_setPoint_95deef694a11e518] = env->getMethodID(cls, "setPoint", "(ILorg/hipparchus/optim/PointValuePair;)V");
                mids$[mid_setPoints_210d360a8ba0a465] = env->getMethodID(cls, "setPoints", "([Lorg/hipparchus/optim/PointValuePair;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractSimplex::build(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_build_fa9d415d19f69361], a0.this$);
            }

            void AbstractSimplex::evaluate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_evaluate_eb88542b81649386], a0.this$, a1.this$);
            }

            jint AbstractSimplex::getDimension() const
            {
              return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
            }

            ::org::hipparchus::optim::PointValuePair AbstractSimplex::getPoint(jint a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getPoint_2ba52aef409b53cc], a0));
            }

            JArray< ::org::hipparchus::optim::PointValuePair > AbstractSimplex::getPoints() const
            {
              return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getPoints_fb04b599bc7d04e3]));
            }

            jint AbstractSimplex::getSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getSize_570ce0828f81a2c1]);
            }

            void AbstractSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_eb88542b81649386], a0.this$, a1.this$);
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
            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data);
            static PyGetSetDef t_AbstractSimplex__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSimplex, dimension),
              DECLARE_GET_FIELD(t_AbstractSimplex, points),
              DECLARE_GET_FIELD(t_AbstractSimplex, size),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSimplex__methods_[] = {
              DECLARE_METHOD(t_AbstractSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, build, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, evaluate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSimplex, getDimension, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getPoint, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, getPoints, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getSize, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSimplex)[] = {
              { Py_tp_methods, t_AbstractSimplex__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSimplex__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSimplex)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSimplex, t_AbstractSimplex, AbstractSimplex);

            void t_AbstractSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSimplex), &PY_TYPE_DEF(AbstractSimplex), module, "AbstractSimplex", 0);
            }

            void t_AbstractSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "class_", make_descriptor(AbstractSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "wrapfn_", make_descriptor(t_AbstractSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSimplex::initializeClass, 1)))
                return NULL;
              return t_AbstractSimplex::wrap_Object(AbstractSimplex(((t_AbstractSimplex *) arg)->object.this$));
            }
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.build(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "build", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.evaluate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDimension());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPoint(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoints());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "iterate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDimension());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoints());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSize());
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
#include "org/hipparchus/stat/Frequency.h"
#include "java/util/Iterator.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Collection.h"
#include "java/lang/Long.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_aba33752f2449599] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_2a50c6c54eb99ac8] = env->getMethodID(cls, "addValue", "(Ljava/lang/Comparable;)V");
          mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_entrySetIterator_4d23511a9f0db098] = env->getMethodID(cls, "entrySetIterator", "()Ljava/util/Iterator;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCount_751686dd23eef2a3] = env->getMethodID(cls, "getCount", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumFreq_751686dd23eef2a3] = env->getMethodID(cls, "getCumFreq", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumPct_2792f090756c9a20] = env->getMethodID(cls, "getCumPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getMode_2afa36052df4765d] = env->getMethodID(cls, "getMode", "()Ljava/util/List;");
          mids$[mid_getPct_2792f090756c9a20] = env->getMethodID(cls, "getPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getSumFreq_492808a339bfa35f] = env->getMethodID(cls, "getSumFreq", "()J");
          mids$[mid_getUniqueCount_570ce0828f81a2c1] = env->getMethodID(cls, "getUniqueCount", "()I");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_incrementValue_3de43924340e67dd] = env->getMethodID(cls, "incrementValue", "(Ljava/lang/Comparable;J)V");
          mids$[mid_merge_98404261f6e3aa79] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/stat/Frequency;)V");
          mids$[mid_merge_f72f53318f80c525] = env->getMethodID(cls, "merge", "(Ljava/util/Collection;)V");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_valuesIterator_4d23511a9f0db098] = env->getMethodID(cls, "valuesIterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frequency::Frequency() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Frequency::Frequency(const ::java::util::Comparator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aba33752f2449599, a0.this$)) {}

      void Frequency::addValue(const ::java::lang::Comparable & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_2a50c6c54eb99ac8], a0.this$);
      }

      void Frequency::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
      }

      ::java::util::Iterator Frequency::entrySetIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_entrySetIterator_4d23511a9f0db098]));
      }

      jboolean Frequency::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jlong Frequency::getCount(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_751686dd23eef2a3], a0.this$);
      }

      jlong Frequency::getCumFreq(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_751686dd23eef2a3], a0.this$);
      }

      jdouble Frequency::getCumPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_2792f090756c9a20], a0.this$);
      }

      ::java::util::List Frequency::getMode() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMode_2afa36052df4765d]));
      }

      jdouble Frequency::getPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_2792f090756c9a20], a0.this$);
      }

      jlong Frequency::getSumFreq() const
      {
        return env->callLongMethod(this$, mids$[mid_getSumFreq_492808a339bfa35f]);
      }

      jint Frequency::getUniqueCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getUniqueCount_570ce0828f81a2c1]);
      }

      jint Frequency::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      void Frequency::incrementValue(const ::java::lang::Comparable & a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_3de43924340e67dd], a0.this$, a1);
      }

      void Frequency::merge(const Frequency & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_98404261f6e3aa79], a0.this$);
      }

      void Frequency::merge(const ::java::util::Collection & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_f72f53318f80c525], a0.this$);
      }

      ::java::lang::String Frequency::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::java::util::Iterator Frequency::valuesIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_valuesIterator_4d23511a9f0db098]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_clear(t_Frequency *self);
      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self);
      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getMode(t_Frequency *self);
      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getSumFreq(t_Frequency *self);
      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self);
      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_valuesIterator(t_Frequency *self);
      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mode),
        DECLARE_GET_FIELD(t_Frequency, sumFreq),
        DECLARE_GET_FIELD(t_Frequency, uniqueCount),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, addValue, METH_O),
        DECLARE_METHOD(t_Frequency, clear, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, entrySetIterator, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, equals, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getCount, METH_O),
        DECLARE_METHOD(t_Frequency, getCumFreq, METH_O),
        DECLARE_METHOD(t_Frequency, getCumPct, METH_O),
        DECLARE_METHOD(t_Frequency, getMode, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getPct, METH_O),
        DECLARE_METHOD(t_Frequency, getSumFreq, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getUniqueCount, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, incrementValue, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, merge, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, toString, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, valuesIterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) t_Frequency_init_ },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
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

      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Frequency object((jobject) NULL);

            INT_CALL(object = Frequency());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Frequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = Frequency(a0));
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

      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValue", arg);
        return NULL;
      }

      static PyObject *t_Frequency_clear(t_Frequency *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.entrySetIterator());
        return ::java::util::t_Iterator::wrap_Object(result);
      }

      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumFreq", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getMode(t_Frequency *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getMode());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getSumFreq(t_Frequency *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getUniqueCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong a1;

        if (!parseArgs(args, "KJ", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "incrementValue", args);
        return NULL;
      }

      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Frequency a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", Frequency::initializeClass, &a0, &p0, t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "merge", args);
        return NULL;
      }

      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frequency_valuesIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.valuesIterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getMode());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getUniqueCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariatePointValuePair::class$ = NULL;
        jmethodID *UnivariatePointValuePair::mids$ = NULL;
        bool UnivariatePointValuePair::live$ = false;

        jclass UnivariatePointValuePair::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariatePointValuePair");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPoint_dff5885c2c873297] = env->getMethodID(cls, "getPoint", "()D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePointValuePair::UnivariatePointValuePair(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble UnivariatePointValuePair::getPoint() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPoint_dff5885c2c873297]);
        }

        jdouble UnivariatePointValuePair::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
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
        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data);
        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data);
        static PyGetSetDef t_UnivariatePointValuePair__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, point),
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariatePointValuePair__methods_[] = {
          DECLARE_METHOD(t_UnivariatePointValuePair, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePointValuePair)[] = {
          { Py_tp_methods, t_UnivariatePointValuePair__methods_ },
          { Py_tp_init, (void *) t_UnivariatePointValuePair_init_ },
          { Py_tp_getset, t_UnivariatePointValuePair__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePointValuePair)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePointValuePair, t_UnivariatePointValuePair, UnivariatePointValuePair);

        void t_UnivariatePointValuePair::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePointValuePair), &PY_TYPE_DEF(UnivariatePointValuePair), module, "UnivariatePointValuePair", 0);
        }

        void t_UnivariatePointValuePair::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "class_", make_descriptor(UnivariatePointValuePair::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "wrapfn_", make_descriptor(t_UnivariatePointValuePair::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePointValuePair::initializeClass, 1)))
            return NULL;
          return t_UnivariatePointValuePair::wrap_Object(UnivariatePointValuePair(((t_UnivariatePointValuePair *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePointValuePair::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          UnivariatePointValuePair object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = UnivariatePointValuePair(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPoint());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPoint());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAbstractDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAbstractDetector::class$ = NULL;
        jmethodID *PythonFieldAbstractDetector::mids$ = NULL;
        bool PythonFieldAbstractDetector::live$ = false;

        jclass PythonFieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9e1919c3f6e6cac4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)V");
            mids$[mid_create_933932f56453be16] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractDetector::PythonFieldAbstractDetector(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::orekit::propagation::events::handlers::FieldEventHandler & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9e1919c3f6e6cac4, a0.this$, a1.this$, a2, a3.this$)) {}

        void PythonFieldAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldAbstractDetector::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args);
        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self);
        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data);
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractDetector)[] = {
          { Py_tp_methods, t_PythonFieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractDetector_init_ },
          { Py_tp_getset, t_PythonFieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractDetector, t_PythonFieldAbstractDetector, PythonFieldAbstractDetector);
        PyObject *t_PythonFieldAbstractDetector::wrap_Object(const PythonFieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_PythonFieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractDetector), &PY_TYPE_DEF(PythonFieldAbstractDetector), module, "PythonFieldAbstractDetector", 1);
        }

        void t_PythonFieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "class_", make_descriptor(PythonFieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "wrapfn_", make_descriptor(t_PythonFieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonFieldAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractDetector::wrap_Object(PythonFieldAbstractDetector(((t_PythonFieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jint a2;
          ::org::orekit::propagation::events::handlers::FieldEventHandler a3((jobject) NULL);
          PyTypeObject **p3;
          PythonFieldAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "KKIK", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractDetector(a0, a1, a2, a3));
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

        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(::org::orekit::propagation::events::FieldAdaptableInterval(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(::org::orekit::propagation::events::handlers::FieldEventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OOiO", o0, o1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
          {
            throwTypeError("create", result);
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

        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
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

        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data)
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
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorMapping::class$ = NULL;
          jmethodID *SensorMapping::mids$ = NULL;
          bool SensorMapping::live$ = false;

          jclass SensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_f77f3652b0aefcc0] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Object;)V");
              mids$[mid_getMapping_015730311a5bacdc] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_11b109bd155ca898] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_11b109bd155ca898] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorMapping::SensorMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          SensorMapping::SensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

          void SensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::java::lang::Object & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_f77f3652b0aefcc0], a0.this$, a1.this$);
          }

          ::java::util::Set SensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_015730311a5bacdc]));
          }

          ::java::lang::String SensorMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_11b109bd155ca898]));
          }

          ::java::lang::String SensorMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_11b109bd155ca898]));
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
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args);
          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args);
          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data);
          static PyGetSetDef t_SensorMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorMapping, sensorName),
            DECLARE_GET_FIELD(t_SensorMapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, of_, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorMapping)[] = {
            { Py_tp_methods, t_SensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorMapping_init_ },
            { Py_tp_getset, t_SensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorMapping, t_SensorMapping, SensorMapping);
          PyObject *t_SensorMapping::wrap_Object(const SensorMapping& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SensorMapping::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorMapping), &PY_TYPE_DEF(SensorMapping), module, "SensorMapping", 0);
          }

          void t_SensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "class_", make_descriptor(SensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "wrapfn_", make_descriptor(t_SensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorMapping::wrap_Object(SensorMapping(((t_SensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorMapping(a0, a1));
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

          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::java::lang::Object a1((jobject) NULL);

            if (!parseArgs(args, "kO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, self->parameters[0], &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizationProblemBuilder::class$ = NULL;
        jmethodID *OptimizationProblemBuilder::mids$ = NULL;
        bool OptimizationProblemBuilder::live$ = false;

        jclass OptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_build_fb782eefc76cd888] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_getDrivers_2afa36052df4765d] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
            mids$[mid_getNbParams_570ce0828f81a2c1] = env->getMethodID(cls, "getNbParams", "()I");
            mids$[mid_createTargetAndWeight_0fa09c18fee449d5] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_0fa09c18fee449d5] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_getSensors_2afa36052df4765d] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
            mids$[mid_getGenerator_6b50c0d68a5b89d6] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/rugged/utils/DerivativeGenerator;");
            mids$[mid_getMeasurements_bb4e7fe961703150] = env->getMethodID(cls, "getMeasurements", "()Lorg/orekit/rugged/adjustment/measurements/Observables;");
            mids$[mid_createFunction_9751b2e3b68b45ea] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem OptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_fb782eefc76cd888], a0, a1));
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
      namespace adjustment {
        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_OptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_OptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_OptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OptimizationProblemBuilder, t_OptimizationProblemBuilder, OptimizationProblemBuilder);

        void t_OptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizationProblemBuilder), &PY_TYPE_DEF(OptimizationProblemBuilder), module, "OptimizationProblemBuilder", 0);
        }

        void t_OptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "class_", make_descriptor(OptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "wrapfn_", make_descriptor(t_OptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_OptimizationProblemBuilder::wrap_Object(OptimizationProblemBuilder(((t_OptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationEvent::class$ = NULL;
      jmethodID *IterationEvent::mids$ = NULL;
      bool IterationEvent::live$ = false;

      jclass IterationEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4d88176e7ce939fe] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationEvent::IterationEvent(const ::java::lang::Object & a0, jint a1) : ::java::util::EventObject(env->newObject(initializeClass, &mids$, mid_init$_4d88176e7ce939fe, a0.this$, a1)) {}

      jint IterationEvent::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
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
      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self);
      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data);
      static PyGetSetDef t_IterationEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterationEvent, iterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationEvent__methods_[] = {
        DECLARE_METHOD(t_IterationEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, getIterations, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationEvent)[] = {
        { Py_tp_methods, t_IterationEvent__methods_ },
        { Py_tp_init, (void *) t_IterationEvent_init_ },
        { Py_tp_getset, t_IterationEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationEvent)[] = {
        &PY_TYPE_DEF(::java::util::EventObject),
        NULL
      };

      DEFINE_TYPE(IterationEvent, t_IterationEvent, IterationEvent);

      void t_IterationEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationEvent), &PY_TYPE_DEF(IterationEvent), module, "IterationEvent", 0);
      }

      void t_IterationEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "class_", make_descriptor(IterationEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "wrapfn_", make_descriptor(t_IterationEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationEvent::initializeClass, 1)))
          return NULL;
        return t_IterationEvent::wrap_Object(IterationEvent(((t_IterationEvent *) arg)->object.this$));
      }
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterationEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterationEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid$Parametric::class$ = NULL;
        jmethodID *Sigmoid$Parametric::mids$ = NULL;
        bool Sigmoid$Parametric::live$ = false;

        jclass Sigmoid$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_125ce48de7dbfde5] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_19285de97bbc7eea] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid$Parametric::Sigmoid$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        JArray< jdouble > Sigmoid$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_125ce48de7dbfde5], a0, a1.this$));
        }

        jdouble Sigmoid$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_19285de97bbc7eea], a0, a1.this$);
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
        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args);
        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args);

        static PyMethodDef t_Sigmoid$Parametric__methods_[] = {
          DECLARE_METHOD(t_Sigmoid$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Sigmoid$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid$Parametric)[] = {
          { Py_tp_methods, t_Sigmoid$Parametric__methods_ },
          { Py_tp_init, (void *) t_Sigmoid$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid$Parametric, t_Sigmoid$Parametric, Sigmoid$Parametric);

        void t_Sigmoid$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid$Parametric), &PY_TYPE_DEF(Sigmoid$Parametric), module, "Sigmoid$Parametric", 0);
        }

        void t_Sigmoid$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "class_", make_descriptor(Sigmoid$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "wrapfn_", make_descriptor(t_Sigmoid$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid$Parametric::initializeClass, 1)))
            return NULL;
          return t_Sigmoid$Parametric::wrap_Object(Sigmoid$Parametric(((t_Sigmoid$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Sigmoid$Parametric object((jobject) NULL);

          INT_CALL(object = Sigmoid$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args)
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

        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args)
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
#include "org/orekit/time/FixedStepSelector.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FixedStepSelector::class$ = NULL;
      jmethodID *FixedStepSelector::mids$ = NULL;
      bool FixedStepSelector::live$ = false;

      jclass FixedStepSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FixedStepSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a8d9a986b8daff48] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_8060cef9318d72e3] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedStepSelector::FixedStepSelector(jdouble a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a8d9a986b8daff48, a0, a1.this$)) {}

      ::java::util::List FixedStepSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_8060cef9318d72e3], a0.this$, a1.this$));
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
      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args);

      static PyMethodDef t_FixedStepSelector__methods_[] = {
        DECLARE_METHOD(t_FixedStepSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedStepSelector)[] = {
        { Py_tp_methods, t_FixedStepSelector__methods_ },
        { Py_tp_init, (void *) t_FixedStepSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedStepSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedStepSelector, t_FixedStepSelector, FixedStepSelector);

      void t_FixedStepSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedStepSelector), &PY_TYPE_DEF(FixedStepSelector), module, "FixedStepSelector", 0);
      }

      void t_FixedStepSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "class_", make_descriptor(FixedStepSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "wrapfn_", make_descriptor(t_FixedStepSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedStepSelector::initializeClass, 1)))
          return NULL;
        return t_FixedStepSelector::wrap_Object(FixedStepSelector(((t_FixedStepSelector *) arg)->object.this$));
      }
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedStepSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        FixedStepSelector object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FixedStepSelector(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
