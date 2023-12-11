#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/gnss/DOP.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOPComputer::class$ = NULL;
      jmethodID *DOPComputer::mids$ = NULL;
      bool DOPComputer::live$ = false;
      jdouble DOPComputer::DOP_MIN_ELEVATION = (jdouble) 0;

      jclass DOPComputer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOPComputer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_192575f77f52acac] = env->getMethodID(cls, "compute", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/gnss/DOP;");
          mids$[mid_create_6b6539a775e19157] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_getElevationMask_d8e21ec66d7f6ed7] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
          mids$[mid_getMinElevation_557b8123390d8d0c] = env->getMethodID(cls, "getMinElevation", "()D");
          mids$[mid_withElevationMask_399027060c7ec7c2] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_withMinElevation_4d2a17737163760c] = env->getMethodID(cls, "withMinElevation", "(D)Lorg/orekit/gnss/DOPComputer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DOP_MIN_ELEVATION = env->getStaticDoubleField(cls, "DOP_MIN_ELEVATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::DOP DOPComputer::compute(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::List & a1) const
      {
        return ::org::orekit::gnss::DOP(env->callObjectMethod(this$, mids$[mid_compute_192575f77f52acac], a0.this$, a1.this$));
      }

      DOPComputer DOPComputer::create(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::bodies::GeodeticPoint & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DOPComputer(env->callStaticObjectMethod(cls, mids$[mid_create_6b6539a775e19157], a0.this$, a1.this$));
      }

      ::org::orekit::utils::ElevationMask DOPComputer::getElevationMask() const
      {
        return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_d8e21ec66d7f6ed7]));
      }

      jdouble DOPComputer::getMinElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinElevation_557b8123390d8d0c]);
      }

      DOPComputer DOPComputer::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withElevationMask_399027060c7ec7c2], a0.this$));
      }

      DOPComputer DOPComputer::withMinElevation(jdouble a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withMinElevation_4d2a17737163760c], a0));
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
      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args);
      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self);
      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self);
      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data);
      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data);
      static PyGetSetDef t_DOPComputer__fields_[] = {
        DECLARE_GET_FIELD(t_DOPComputer, elevationMask),
        DECLARE_GET_FIELD(t_DOPComputer, minElevation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOPComputer__methods_[] = {
        DECLARE_METHOD(t_DOPComputer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, compute, METH_VARARGS),
        DECLARE_METHOD(t_DOPComputer, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, getElevationMask, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, getMinElevation, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, withElevationMask, METH_O),
        DECLARE_METHOD(t_DOPComputer, withMinElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOPComputer)[] = {
        { Py_tp_methods, t_DOPComputer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DOPComputer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOPComputer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOPComputer, t_DOPComputer, DOPComputer);

      void t_DOPComputer::install(PyObject *module)
      {
        installType(&PY_TYPE(DOPComputer), &PY_TYPE_DEF(DOPComputer), module, "DOPComputer", 0);
      }

      void t_DOPComputer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "class_", make_descriptor(DOPComputer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "wrapfn_", make_descriptor(t_DOPComputer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "boxfn_", make_descriptor(boxObject));
        env->getClass(DOPComputer::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "DOP_MIN_ELEVATION", make_descriptor(DOPComputer::DOP_MIN_ELEVATION));
      }

      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOPComputer::initializeClass, 1)))
          return NULL;
        return t_DOPComputer::wrap_Object(DOPComputer(((t_DOPComputer *) arg)->object.this$));
      }
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOPComputer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::gnss::DOP result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0, a1));
          return ::org::orekit::gnss::t_DOP::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::gnss::DOPComputer::create(a0, a1));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self)
      {
        ::org::orekit::utils::ElevationMask result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
      }

      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg)
      {
        ::org::orekit::utils::ElevationMask a0((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withElevationMask(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg)
      {
        jdouble a0;
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.withMinElevation(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMinElevation", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data)
      {
        ::org::orekit::utils::ElevationMask value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
      }

      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinElevation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b6cf54f3c9220bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateTroposphericDelayModifier::BistaticRangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_b6cf54f3c9220bc7, a0.this$)) {}

          void BistaticRangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void BistaticRangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateTroposphericDelayModifier, t_BistaticRangeRateTroposphericDelayModifier, BistaticRangeRateTroposphericDelayModifier);

          void t_BistaticRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateTroposphericDelayModifier), module, "BistaticRangeRateTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateTroposphericDelayModifier::wrap_Object(BistaticRangeRateTroposphericDelayModifier(((t_BistaticRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeRateTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
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
#include "org/hipparchus/ode/nonstiff/DormandPrince54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54Integrator::class$ = NULL;
        jmethodID *DormandPrince54Integrator::mids$ = NULL;
        bool DormandPrince54Integrator::live$ = false;

        jclass DormandPrince54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c13e969c0f339014] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_estimateError_ce34cd66684833d2] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");
            mids$[mid_createInterpolator_21129634578f7d53] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54StateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c13e969c0f339014, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > DormandPrince54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > DormandPrince54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
        }

        jint DormandPrince54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
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
        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54Integrator)[] = {
          { Py_tp_methods, t_DormandPrince54Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54Integrator_init_ },
          { Py_tp_getset, t_DormandPrince54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54Integrator, t_DormandPrince54Integrator, DormandPrince54Integrator);

        void t_DormandPrince54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54Integrator), &PY_TYPE_DEF(DormandPrince54Integrator), module, "DormandPrince54Integrator", 0);
        }

        void t_DormandPrince54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "class_", make_descriptor(DormandPrince54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "wrapfn_", make_descriptor(t_DormandPrince54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54Integrator::wrap_Object(DormandPrince54Integrator(((t_DormandPrince54Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data)
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
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MultivariateNormalDistribution::class$ = NULL;
        jmethodID *MultivariateNormalDistribution::mids$ = NULL;
        bool MultivariateNormalDistribution::live$ = false;

        jclass MultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d28c10701e55f94c] = env->getMethodID(cls, "<init>", "([D[[D)V");
            mids$[mid_init$_bc6402de7b0a344c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[D)V");
            mids$[mid_init$_4384082604f87d7a] = env->getMethodID(cls, "<init>", "([D[[DD)V");
            mids$[mid_init$_dd4deb99569a6127] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[DD)V");
            mids$[mid_density_86c4a0582e0747ce] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getCovariances_70a207fcbc031df2] = env->getMethodID(cls, "getCovariances", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeans_a53a7513ecedada2] = env->getMethodID(cls, "getMeans", "()[D");
            mids$[mid_getSingularMatrixCheckTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getSingularMatrixCheckTolerance", "()D");
            mids$[mid_getStandardDeviations_a53a7513ecedada2] = env->getMethodID(cls, "getStandardDeviations", "()[D");
            mids$[mid_sample_a53a7513ecedada2] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d28c10701e55f94c, a0.this$, a1.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bc6402de7b0a344c, a0.this$, a1.this$, a2.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jdouble a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_4384082604f87d7a, a0.this$, a1.this$, a2)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_dd4deb99569a6127, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble MultivariateNormalDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_86c4a0582e0747ce], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateNormalDistribution::getCovariances() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_70a207fcbc031df2]));
        }

        JArray< jdouble > MultivariateNormalDistribution::getMeans() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeans_a53a7513ecedada2]));
        }

        jdouble MultivariateNormalDistribution::getSingularMatrixCheckTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSingularMatrixCheckTolerance_557b8123390d8d0c]);
        }

        JArray< jdouble > MultivariateNormalDistribution::getStandardDeviations() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviations_a53a7513ecedada2]));
        }

        JArray< jdouble > MultivariateNormalDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_a53a7513ecedada2]));
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
      namespace multivariate {
        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, covariances),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, means),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, singularMatrixCheckTolerance),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, standardDeviations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getCovariances, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getMeans, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getSingularMatrixCheckTolerance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getStandardDeviations, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalDistribution, t_MultivariateNormalDistribution, MultivariateNormalDistribution);

        void t_MultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalDistribution), &PY_TYPE_DEF(MultivariateNormalDistribution), module, "MultivariateNormalDistribution", 0);
        }

        void t_MultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "class_", make_descriptor(MultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalDistribution::wrap_Object(MultivariateNormalDistribution(((t_MultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[D", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              jdouble a2;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[DD", &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[DD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2, a3));
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

        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeans());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviations());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "sample", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeans());
          return value.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviations());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAmbiguityAcceptance::class$ = NULL;
          jmethodID *PythonAmbiguityAcceptance::mids$ = NULL;
          bool PythonAmbiguityAcceptance::live$ = false;

          jclass PythonAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_accept_21ad48006d2406de] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_numberOfCandidates_412668abc8d889e9] = env->getMethodID(cls, "numberOfCandidates", "()I");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAmbiguityAcceptance::PythonAmbiguityAcceptance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonAmbiguityAcceptance::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAmbiguityAcceptance::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAmbiguityAcceptance::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self);
          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args);
          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data);
          static PyGetSetDef t_PythonAmbiguityAcceptance__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAmbiguityAcceptance, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_PythonAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_PythonAmbiguityAcceptance_init_ },
            { Py_tp_getset, t_PythonAmbiguityAcceptance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAmbiguityAcceptance, t_PythonAmbiguityAcceptance, PythonAmbiguityAcceptance);

          void t_PythonAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAmbiguityAcceptance), &PY_TYPE_DEF(PythonAmbiguityAcceptance), module, "PythonAmbiguityAcceptance", 1);
          }

          void t_PythonAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "class_", make_descriptor(PythonAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "wrapfn_", make_descriptor(t_PythonAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAmbiguityAcceptance::initializeClass);
            JNINativeMethod methods[] = {
              { "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonAmbiguityAcceptance_accept0 },
              { "numberOfCandidates", "()I", (void *) t_PythonAmbiguityAcceptance_numberOfCandidates1 },
              { "pythonDecRef", "()V", (void *) t_PythonAmbiguityAcceptance_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_PythonAmbiguityAcceptance::wrap_Object(PythonAmbiguityAcceptance(((t_PythonAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            PythonAmbiguityAcceptance object((jobject) NULL);

            INT_CALL(object = PythonAmbiguityAcceptance());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args)
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

          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
            {
              throwTypeError("accept", result);
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

          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "numberOfCandidates", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("numberOfCandidates", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data)
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
#include "org/orekit/frames/encounter/DefaultEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *DefaultEncounterLOF::class$ = NULL;
        jmethodID *DefaultEncounterLOF::mids$ = NULL;
        bool DefaultEncounterLOF::live$ = false;

        jclass DefaultEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/DefaultEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa7831ef12a1aeba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_dd80faf626f5319e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_0158ab79fb625627] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_ea6e3434436b926f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_fa7831ef12a1aeba, a0.this$)) {}

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_dd80faf626f5319e, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf], a0.this$));
        }

        ::java::lang::String DefaultEncounterLOF::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation DefaultEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0158ab79fb625627], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation DefaultEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_ea6e3434436b926f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data);
        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data);
        static PyGetSetDef t_DefaultEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DefaultEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_DefaultEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getName, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DefaultEncounterLOF)[] = {
          { Py_tp_methods, t_DefaultEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_DefaultEncounterLOF_init_ },
          { Py_tp_getset, t_DefaultEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DefaultEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(DefaultEncounterLOF, t_DefaultEncounterLOF, DefaultEncounterLOF);

        void t_DefaultEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(DefaultEncounterLOF), &PY_TYPE_DEF(DefaultEncounterLOF), module, "DefaultEncounterLOF", 0);
        }

        void t_DefaultEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "class_", make_descriptor(DefaultEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "wrapfn_", make_descriptor(t_DefaultEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DefaultEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_DefaultEncounterLOF::wrap_Object(DefaultEncounterLOF(((t_DefaultEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DefaultEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
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

        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GMSTScale::class$ = NULL;
      jmethodID *GMSTScale::mids$ = NULL;
      bool GMSTScale::live$ = false;

      jclass GMSTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GMSTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GMSTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble GMSTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GMSTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String GMSTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_getName(t_GMSTScale *self);
      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data);
      static PyGetSetDef t_GMSTScale__fields_[] = {
        DECLARE_GET_FIELD(t_GMSTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GMSTScale__methods_[] = {
        DECLARE_METHOD(t_GMSTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GMSTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GMSTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GMSTScale)[] = {
        { Py_tp_methods, t_GMSTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GMSTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GMSTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GMSTScale, t_GMSTScale, GMSTScale);

      void t_GMSTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GMSTScale), &PY_TYPE_DEF(GMSTScale), module, "GMSTScale", 0);
      }

      void t_GMSTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "class_", make_descriptor(GMSTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "wrapfn_", make_descriptor(t_GMSTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GMSTScale::initializeClass, 1)))
          return NULL;
        return t_GMSTScale::wrap_Object(GMSTScale(((t_GMSTScale *) arg)->object.this$));
      }
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GMSTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GMSTScale_getName(t_GMSTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GMSTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffectGradient::class$ = NULL;
          jmethodID *PythonParametricModelEffectGradient::mids$ = NULL;
          bool PythonParametricModelEffectGradient::live$ = false;

          jclass PythonParametricModelEffectGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_faa3dab3082b6290] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffectGradient::PythonParametricModelEffectGradient() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonParametricModelEffectGradient::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonParametricModelEffectGradient::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonParametricModelEffectGradient::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self);
          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args);
          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffectGradient__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffectGradient, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffectGradient__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffectGradient)[] = {
            { Py_tp_methods, t_PythonParametricModelEffectGradient__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffectGradient_init_ },
            { Py_tp_getset, t_PythonParametricModelEffectGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffectGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffectGradient, t_PythonParametricModelEffectGradient, PythonParametricModelEffectGradient);

          void t_PythonParametricModelEffectGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffectGradient), &PY_TYPE_DEF(PythonParametricModelEffectGradient), module, "PythonParametricModelEffectGradient", 1);
          }

          void t_PythonParametricModelEffectGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "class_", make_descriptor(PythonParametricModelEffectGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "wrapfn_", make_descriptor(t_PythonParametricModelEffectGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffectGradient::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;", (void *) t_PythonParametricModelEffectGradient_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffectGradient_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffectGradient::wrap_Object(PythonParametricModelEffectGradient(((t_PythonParametricModelEffectGradient *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffectGradient object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffectGradient());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args)
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

          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &value))
            {
              throwTypeError("evaluate", result);
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

          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data)
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
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Boolean.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction::class$ = NULL;
      jmethodID *BigFraction::mids$ = NULL;
      bool BigFraction::live$ = false;
      BigFraction *BigFraction::FOUR_FIFTHS = NULL;
      BigFraction *BigFraction::MINUS_ONE = NULL;
      BigFraction *BigFraction::ONE = NULL;
      BigFraction *BigFraction::ONE_FIFTH = NULL;
      BigFraction *BigFraction::ONE_HALF = NULL;
      BigFraction *BigFraction::ONE_QUARTER = NULL;
      BigFraction *BigFraction::ONE_THIRD = NULL;
      BigFraction *BigFraction::THREE_FIFTHS = NULL;
      BigFraction *BigFraction::THREE_QUARTERS = NULL;
      BigFraction *BigFraction::TWO = NULL;
      BigFraction *BigFraction::TWO_FIFTHS = NULL;
      BigFraction *BigFraction::TWO_QUARTERS = NULL;
      BigFraction *BigFraction::TWO_THIRDS = NULL;
      BigFraction *BigFraction::ZERO = NULL;

      jclass BigFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_b6065b86e67f80de] = env->getMethodID(cls, "<init>", "(DJ)V");
          mids$[mid_init$_84a4ee84786818cf] = env->getMethodID(cls, "<init>", "(JJ)V");
          mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_92546681fd225453] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_df625784438fce94] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_d98aa95d9530f843] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_75d24c38a9b7b29b] = env->getMethodID(cls, "add", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_compareTo_83725ddd1b989a7e] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/BigFraction;)I");
          mids$[mid_convergent_2f108a8fda179cc0] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/BigFraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_9f7d72ee529fa4ce] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_df625784438fce94] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_d98aa95d9530f843] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_75d24c38a9b7b29b] = env->getMethodID(cls, "divide", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominatorAsInt_412668abc8d889e9] = env->getMethodID(cls, "getDenominatorAsInt", "()I");
          mids$[mid_getDenominatorAsLong_9e26256fb0d384a2] = env->getMethodID(cls, "getDenominatorAsLong", "()J");
          mids$[mid_getField_b141d0462bc50421] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getNumeratorAsInt_412668abc8d889e9] = env->getMethodID(cls, "getNumeratorAsInt", "()I");
          mids$[mid_getNumeratorAsLong_9e26256fb0d384a2] = env->getMethodID(cls, "getNumeratorAsLong", "()J");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_3c5825c429555f3b] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_89b302893bdbe1f1] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_df625784438fce94] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_d98aa95d9530f843] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_75d24c38a9b7b29b] = env->getMethodID(cls, "multiply", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_negate_92546681fd225453] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_percentageValue_557b8123390d8d0c] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_pow_7e960cd6eee376d8] = env->getMethodID(cls, "pow", "(D)D");
          mids$[mid_pow_d98aa95d9530f843] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_pow_75d24c38a9b7b29b] = env->getMethodID(cls, "pow", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reciprocal_92546681fd225453] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reduce_92546681fd225453] = env->getMethodID(cls, "reduce", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_signum_412668abc8d889e9] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_df625784438fce94] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_d98aa95d9530f843] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_75d24c38a9b7b29b] = env->getMethodID(cls, "subtract", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          MINUS_ONE = new BigFraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE = new BigFraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_FIFTH = new BigFraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_HALF = new BigFraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_QUARTER = new BigFraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_THIRD = new BigFraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO = new BigFraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_THIRDS = new BigFraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/BigFraction;"));
          ZERO = new BigFraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/BigFraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFraction::BigFraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      BigFraction::BigFraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      BigFraction::BigFraction(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      BigFraction::BigFraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_b6065b86e67f80de, a0, a1)) {}

      BigFraction::BigFraction(jlong a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_84a4ee84786818cf, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

      BigFraction BigFraction::abs() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_abs_92546681fd225453]));
      }

      BigFraction BigFraction::add(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_df625784438fce94], a0.this$));
      }

      BigFraction BigFraction::add(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_d98aa95d9530f843], a0));
      }

      BigFraction BigFraction::add(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_75d24c38a9b7b29b], a0));
      }

      jint BigFraction::compareTo(const BigFraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_83725ddd1b989a7e], a0.this$);
      }

      ::org::hipparchus::util::Pair BigFraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::BigFraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_2f108a8fda179cc0], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream BigFraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_9f7d72ee529fa4ce], a0, a1));
      }

      BigFraction BigFraction::divide(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_df625784438fce94], a0.this$));
      }

      BigFraction BigFraction::divide(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_d98aa95d9530f843], a0));
      }

      BigFraction BigFraction::divide(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_75d24c38a9b7b29b], a0));
      }

      jdouble BigFraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
      }

      jboolean BigFraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jfloat BigFraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
      }

      jint BigFraction::getDenominatorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominatorAsInt_412668abc8d889e9]);
      }

      jlong BigFraction::getDenominatorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getDenominatorAsLong_9e26256fb0d384a2]);
      }

      ::org::hipparchus::fraction::BigFractionField BigFraction::getField() const
      {
        return ::org::hipparchus::fraction::BigFractionField(env->callObjectMethod(this$, mids$[mid_getField_b141d0462bc50421]));
      }

      jint BigFraction::getNumeratorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumeratorAsInt_412668abc8d889e9]);
      }

      jlong BigFraction::getNumeratorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getNumeratorAsLong_9e26256fb0d384a2]);
      }

      jdouble BigFraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      BigFraction BigFraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_3c5825c429555f3b], a0, a1));
      }

      jint BigFraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jint BigFraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
      }

      jboolean BigFraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_89b302893bdbe1f1]);
      }

      jlong BigFraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
      }

      BigFraction BigFraction::multiply(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_df625784438fce94], a0.this$));
      }

      BigFraction BigFraction::multiply(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_d98aa95d9530f843], a0));
      }

      BigFraction BigFraction::multiply(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_75d24c38a9b7b29b], a0));
      }

      BigFraction BigFraction::negate() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_negate_92546681fd225453]));
      }

      jdouble BigFraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_557b8123390d8d0c]);
      }

      jdouble BigFraction::pow(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_pow_7e960cd6eee376d8], a0);
      }

      BigFraction BigFraction::pow(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_d98aa95d9530f843], a0));
      }

      BigFraction BigFraction::pow(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_75d24c38a9b7b29b], a0));
      }

      BigFraction BigFraction::reciprocal() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reciprocal_92546681fd225453]));
      }

      BigFraction BigFraction::reduce() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reduce_92546681fd225453]));
      }

      jint BigFraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_412668abc8d889e9]);
      }

      BigFraction BigFraction::subtract(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_df625784438fce94], a0.this$));
      }

      BigFraction BigFraction::subtract(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_d98aa95d9530f843], a0));
      }

      BigFraction BigFraction::subtract(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_75d24c38a9b7b29b], a0));
      }

      ::java::lang::String BigFraction::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFraction_abs(t_BigFraction *self);
      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg);
      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getField(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getReal(t_BigFraction *self);
      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_isInteger(t_BigFraction *self);
      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_negate(t_BigFraction *self);
      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self);
      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self);
      static PyObject *t_BigFraction_reduce(t_BigFraction *self);
      static PyObject *t_BigFraction_signum(t_BigFraction *self);
      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data);
      static PyGetSetDef t_BigFraction__fields_[] = {
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, field),
        DECLARE_GET_FIELD(t_BigFraction, integer),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFraction__methods_[] = {
        DECLARE_METHOD(t_BigFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, add, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, compareTo, METH_O),
        DECLARE_METHOD(t_BigFraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, pow, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, reduce, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction)[] = {
        { Py_tp_methods, t_BigFraction__methods_ },
        { Py_tp_init, (void *) t_BigFraction_init_ },
        { Py_tp_getset, t_BigFraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(BigFraction, t_BigFraction, BigFraction);

      void t_BigFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction), &PY_TYPE_DEF(BigFraction), module, "BigFraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(BigFraction$ConvergenceTest)));
      }

      void t_BigFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "class_", make_descriptor(BigFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "wrapfn_", make_descriptor(t_BigFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigFraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "FOUR_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "MINUS_ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_FIFTH", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_HALF", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_QUARTER", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_THIRD", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_THIRDS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ZERO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ZERO)));
      }

      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction::initializeClass, 1)))
          return NULL;
        return t_BigFraction::wrap_Object(BigFraction(((t_BigFraction *) arg)->object.this$));
      }
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = BigFraction(a0, a1, a2));
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

      static PyObject *t_BigFraction_abs(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg)
      {
        BigFraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::BigFraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::BigFraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getField(t_BigFraction *self)
      {
        ::org::hipparchus::fraction::BigFractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getReal(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        BigFraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::getReducedFraction(a0, a1));
          return t_BigFraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_BigFraction_isInteger(t_BigFraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigFraction_negate(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_reduce(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reduce());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_signum(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data)
      {
        ::org::hipparchus::fraction::BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouLegacyNavigationMessage::class$ = NULL;
            jmethodID *BeidouLegacyNavigationMessage::mids$ = NULL;
            bool BeidouLegacyNavigationMessage::live$ = false;
            ::java::lang::String *BeidouLegacyNavigationMessage::D1 = NULL;
            ::java::lang::String *BeidouLegacyNavigationMessage::D2 = NULL;

            jclass BeidouLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAODC_412668abc8d889e9] = env->getMethodID(cls, "getAODC", "()I");
                mids$[mid_getAODE_412668abc8d889e9] = env->getMethodID(cls, "getAODE", "()I");
                mids$[mid_getSvAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getTGD1_557b8123390d8d0c] = env->getMethodID(cls, "getTGD1", "()D");
                mids$[mid_getTGD2_557b8123390d8d0c] = env->getMethodID(cls, "getTGD2", "()D");
                mids$[mid_setAODC_10f281d777284cea] = env->getMethodID(cls, "setAODC", "(D)V");
                mids$[mid_setAODE_10f281d777284cea] = env->getMethodID(cls, "setAODE", "(D)V");
                mids$[mid_setSvAccuracy_10f281d777284cea] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setTGD1_10f281d777284cea] = env->getMethodID(cls, "setTGD1", "(D)V");
                mids$[mid_setTGD2_10f281d777284cea] = env->getMethodID(cls, "setTGD2", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                D1 = new ::java::lang::String(env->getStaticObjectField(cls, "D1", "Ljava/lang/String;"));
                D2 = new ::java::lang::String(env->getStaticObjectField(cls, "D2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouLegacyNavigationMessage::BeidouLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint BeidouLegacyNavigationMessage::getAODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODC_412668abc8d889e9]);
            }

            jint BeidouLegacyNavigationMessage::getAODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODE_412668abc8d889e9]);
            }

            jdouble BeidouLegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_557b8123390d8d0c]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD1_557b8123390d8d0c]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD2_557b8123390d8d0c]);
            }

            void BeidouLegacyNavigationMessage::setAODC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODC_10f281d777284cea], a0);
            }

            void BeidouLegacyNavigationMessage::setAODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODE_10f281d777284cea], a0);
            }

            void BeidouLegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_10f281d777284cea], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD1_10f281d777284cea], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD2_10f281d777284cea], a0);
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
            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouLegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODC),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODE),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD1),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODC, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODE, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD1, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouLegacyNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouLegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouLegacyNavigationMessage, t_BeidouLegacyNavigationMessage, BeidouLegacyNavigationMessage);

            void t_BeidouLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouLegacyNavigationMessage), &PY_TYPE_DEF(BeidouLegacyNavigationMessage), module, "BeidouLegacyNavigationMessage", 0);
            }

            void t_BeidouLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "class_", make_descriptor(BeidouLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "wrapfn_", make_descriptor(t_BeidouLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouLegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D1", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D2", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D2)));
            }

            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouLegacyNavigationMessage::wrap_Object(BeidouLegacyNavigationMessage(((t_BeidouLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              BeidouLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = BeidouLegacyNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD1", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD2", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODC", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODE", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD1", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD2", arg);
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
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *ExtendedEllipsoid::class$ = NULL;
        jmethodID *ExtendedEllipsoid::mids$ = NULL;
        bool ExtendedEllipsoid::live$ = false;

        jclass ExtendedEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/ExtendedEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77eb4a8c540c1776] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
            mids$[mid_convertLos_720ad0a891308b00] = env->getMethodID(cls, "convertLos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_convertLos_f2c2bb1cbe3e7f2c] = env->getMethodID(cls, "convertLos", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtAltitude_28192f68d01b7004] = env->getMethodID(cls, "pointAtAltitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLatitude_d3cfd591214a3799] = env->getMethodID(cls, "pointAtLatitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLongitude_28192f68d01b7004] = env->getMethodID(cls, "pointAtLongitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointOnGround_ac6328a8b4073d8f] = env->getMethodID(cls, "pointOnGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_transform_8b264141c1de262c] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_4dfad8dc678d42b2] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_fc69cddc64da17bc] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtendedEllipsoid::ExtendedEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_77eb4a8c540c1776, a0, a1, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_720ad0a891308b00], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_f2c2bb1cbe3e7f2c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtAltitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtAltitude_28192f68d01b7004], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLatitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLatitude_d3cfd591214a3799], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLongitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLongitude_28192f68d01b7004], a0.this$, a1.this$, a2));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::pointOnGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointOnGround_ac6328a8b4073d8f], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_8b264141c1de262c], a0.this$));
        }

        ::org::orekit::bodies::GeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_4dfad8dc678d42b2], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_fc69cddc64da17bc], a0.this$, a1.this$, a2.this$, a3));
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
        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args);

        static PyMethodDef t_ExtendedEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ExtendedEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, convertLos, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtAltitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLatitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLongitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointOnGround, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtendedEllipsoid)[] = {
          { Py_tp_methods, t_ExtendedEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ExtendedEllipsoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtendedEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ExtendedEllipsoid, t_ExtendedEllipsoid, ExtendedEllipsoid);

        void t_ExtendedEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtendedEllipsoid), &PY_TYPE_DEF(ExtendedEllipsoid), module, "ExtendedEllipsoid", 0);
        }

        void t_ExtendedEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "class_", make_descriptor(ExtendedEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "wrapfn_", make_descriptor(t_ExtendedEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtendedEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ExtendedEllipsoid::wrap_Object(ExtendedEllipsoid(((t_ExtendedEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtendedEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ExtendedEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = ExtendedEllipsoid(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convertLos", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtAltitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtAltitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.pointAtLatitude(a0, a1, a2, a3));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLatitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtLongitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLongitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointOnGround(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointOnGround", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2, a3));
                return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ExtendedEllipsoid), (PyObject *) self, "transform", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock::class$ = NULL;
          jmethodID *RinexClock::mids$ = NULL;
          bool RinexClock::live$ = false;

          jclass RinexClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addAppliedDCBS_5034cecf671e2223] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_f2258d58c79245ba] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addClockData_8830400aee8c57b2] = env->getMethodID(cls, "addClockData", "(Ljava/lang/String;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataLine;)V");
              mids$[mid_addClockDataType_727c621827ef7352] = env->getMethodID(cls, "addClockDataType", "(Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;)V");
              mids$[mid_addComment_f5ffdf29129ef90a] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
              mids$[mid_addReceiver_d5f2dfe3117b80ca] = env->getMethodID(cls, "addReceiver", "(Lorg/orekit/files/rinex/clock/RinexClock$Receiver;)V");
              mids$[mid_addReferenceClockList_98fa7d48d3b7f88a] = env->getMethodID(cls, "addReferenceClockList", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addSatellite_f5ffdf29129ef90a] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
              mids$[mid_addSystemObservationType_87754ad7b87f4269] = env->getMethodID(cls, "addSystemObservationType", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getAgencyName_3cffd47377eca18a] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterID_3cffd47377eca18a] = env->getMethodID(cls, "getAnalysisCenterID", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterName_3cffd47377eca18a] = env->getMethodID(cls, "getAnalysisCenterName", "()Ljava/lang/String;");
              mids$[mid_getClockData_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getClockData", "()Ljava/util/Map;");
              mids$[mid_getClockDataTypes_0d9551367f7ecdef] = env->getMethodID(cls, "getClockDataTypes", "()Ljava/util/List;");
              mids$[mid_getComments_3cffd47377eca18a] = env->getMethodID(cls, "getComments", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateString_3cffd47377eca18a] = env->getMethodID(cls, "getCreationDateString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeString_3cffd47377eca18a] = env->getMethodID(cls, "getCreationTimeString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeZoneString_3cffd47377eca18a] = env->getMethodID(cls, "getCreationTimeZoneString", "()Ljava/lang/String;");
              mids$[mid_getExternalClockReference_3cffd47377eca18a] = env->getMethodID(cls, "getExternalClockReference", "()Ljava/lang/String;");
              mids$[mid_getFormatVersion_557b8123390d8d0c] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrameName_3cffd47377eca18a] = env->getMethodID(cls, "getFrameName", "()Ljava/lang/String;");
              mids$[mid_getListAppliedDCBS_0d9551367f7ecdef] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_0d9551367f7ecdef] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getNumberOfClockDataTypes_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfClockDataTypes", "()I");
              mids$[mid_getNumberOfLeapSeconds_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getNumberOfLeapSecondsGNSS_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfLeapSecondsGNSS", "()I");
              mids$[mid_getNumberOfReceivers_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfReceivers", "()I");
              mids$[mid_getNumberOfSatellites_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
              mids$[mid_getProgramName_3cffd47377eca18a] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getReceivers_0d9551367f7ecdef] = env->getMethodID(cls, "getReceivers", "()Ljava/util/List;");
              mids$[mid_getReferenceClocks_d26bd874ee319049] = env->getMethodID(cls, "getReferenceClocks", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatellites_0d9551367f7ecdef] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
              mids$[mid_getStationIdentifier_3cffd47377eca18a] = env->getMethodID(cls, "getStationIdentifier", "()Ljava/lang/String;");
              mids$[mid_getStationName_3cffd47377eca18a] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
              mids$[mid_getSystemObservationTypes_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSystemObservationTypes", "()Ljava/util/Map;");
              mids$[mid_getTimeScale_527ee9dde1a96470] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_getTimeSystem_2700635415605e4d] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getTotalNumberOfDataLines_412668abc8d889e9] = env->getMethodID(cls, "getTotalNumberOfDataLines", "()I");
              mids$[mid_numberOfObsTypes_18e5dd0da2c0b8c5] = env->getMethodID(cls, "numberOfObsTypes", "(Lorg/orekit/gnss/SatelliteSystem;)I");
              mids$[mid_setAgencyName_f5ffdf29129ef90a] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterID_f5ffdf29129ef90a] = env->getMethodID(cls, "setAnalysisCenterID", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterName_f5ffdf29129ef90a] = env->getMethodID(cls, "setAnalysisCenterName", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_20affcbd28542333] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateString_f5ffdf29129ef90a] = env->getMethodID(cls, "setCreationDateString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeString_f5ffdf29129ef90a] = env->getMethodID(cls, "setCreationTimeString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeZoneString_f5ffdf29129ef90a] = env->getMethodID(cls, "setCreationTimeZoneString", "(Ljava/lang/String;)V");
              mids$[mid_setExternalClockReference_f5ffdf29129ef90a] = env->getMethodID(cls, "setExternalClockReference", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_10f281d777284cea] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setFrameName_f5ffdf29129ef90a] = env->getMethodID(cls, "setFrameName", "(Ljava/lang/String;)V");
              mids$[mid_setNumberOfLeapSeconds_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");
              mids$[mid_setNumberOfLeapSecondsGNSS_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfLeapSecondsGNSS", "(I)V");
              mids$[mid_setProgramName_f5ffdf29129ef90a] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_b744026f46deda44] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationIdentifier_f5ffdf29129ef90a] = env->getMethodID(cls, "setStationIdentifier", "(Ljava/lang/String;)V");
              mids$[mid_setStationName_f5ffdf29129ef90a] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
              mids$[mid_setTimeScale_3e3301925c0131d4] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_setTimeSystem_562aaa7511f66c1c] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void RinexClock::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_5034cecf671e2223], a0.this$);
          }

          void RinexClock::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_f2258d58c79245ba], a0.this$);
          }

          void RinexClock::addClockData(const ::java::lang::String & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockData_8830400aee8c57b2], a0.this$, a1.this$);
          }

          void RinexClock::addClockDataType(const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockDataType_727c621827ef7352], a0.this$);
          }

          void RinexClock::addComment(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addComment_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::addReceiver(const ::org::orekit::files::rinex::clock::RinexClock$Receiver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addReceiver_d5f2dfe3117b80ca], a0.this$);
          }

          void RinexClock::addReferenceClockList(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addReferenceClockList_98fa7d48d3b7f88a], a0.this$, a1.this$);
          }

          void RinexClock::addSatellite(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSatellite_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::addSystemObservationType(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemObservationType_87754ad7b87f4269], a0.this$, a1.this$);
          }

          ::java::lang::String RinexClock::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_3cffd47377eca18a]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterID_3cffd47377eca18a]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterName_3cffd47377eca18a]));
          }

          ::java::util::Map RinexClock::getClockData() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getClockData_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexClock::getClockDataTypes() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getClockDataTypes_0d9551367f7ecdef]));
          }

          ::java::lang::String RinexClock::getComments() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getComments_3cffd47377eca18a]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_7a97f7e149e79afb]));
          }

          ::java::lang::String RinexClock::getCreationDateString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationDateString_3cffd47377eca18a]));
          }

          ::java::lang::String RinexClock::getCreationTimeString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeString_3cffd47377eca18a]));
          }

          ::java::lang::String RinexClock::getCreationTimeZoneString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZoneString_3cffd47377eca18a]));
          }

          ::java::lang::String RinexClock::getExternalClockReference() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalClockReference_3cffd47377eca18a]));
          }

          jdouble RinexClock::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_557b8123390d8d0c]);
          }

          ::org::orekit::frames::Frame RinexClock::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          ::java::lang::String RinexClock::getFrameName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrameName_3cffd47377eca18a]));
          }

          ::java::util::List RinexClock::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_0d9551367f7ecdef]));
          }

          ::java::util::List RinexClock::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_0d9551367f7ecdef]));
          }

          jint RinexClock::getNumberOfClockDataTypes() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfClockDataTypes_412668abc8d889e9]);
          }

          jint RinexClock::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_412668abc8d889e9]);
          }

          jint RinexClock::getNumberOfLeapSecondsGNSS() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSecondsGNSS_412668abc8d889e9]);
          }

          jint RinexClock::getNumberOfReceivers() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfReceivers_412668abc8d889e9]);
          }

          jint RinexClock::getNumberOfSatellites() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_412668abc8d889e9]);
          }

          ::java::lang::String RinexClock::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_3cffd47377eca18a]));
          }

          ::java::util::List RinexClock::getReceivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceivers_0d9551367f7ecdef]));
          }

          ::org::orekit::utils::TimeSpanMap RinexClock::getReferenceClocks() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getReferenceClocks_d26bd874ee319049]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexClock::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
          }

          ::java::util::List RinexClock::getSatellites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_0d9551367f7ecdef]));
          }

          ::java::lang::String RinexClock::getStationIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationIdentifier_3cffd47377eca18a]));
          }

          ::java::lang::String RinexClock::getStationName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_3cffd47377eca18a]));
          }

          ::java::util::Map RinexClock::getSystemObservationTypes() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSystemObservationTypes_1e62c2f73fbdd1c4]));
          }

          ::org::orekit::time::TimeScale RinexClock::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_527ee9dde1a96470]));
          }

          ::org::orekit::gnss::TimeSystem RinexClock::getTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_2700635415605e4d]));
          }

          jint RinexClock::getTotalNumberOfDataLines() const
          {
            return env->callIntMethod(this$, mids$[mid_getTotalNumberOfDataLines_412668abc8d889e9]);
          }

          jint RinexClock::numberOfObsTypes(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfObsTypes_18e5dd0da2c0b8c5], a0.this$);
          }

          void RinexClock::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setAnalysisCenterID(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterID_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setAnalysisCenterName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_20affcbd28542333], a0.this$);
          }

          void RinexClock::setCreationDateString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateString_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setCreationTimeString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeString_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setCreationTimeZoneString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZoneString_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setExternalClockReference(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setExternalClockReference_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_10f281d777284cea], a0);
          }

          void RinexClock::setFrameName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFrameName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_a3da1a935cb37f7b], a0);
          }

          void RinexClock::setNumberOfLeapSecondsGNSS(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSecondsGNSS_a3da1a935cb37f7b], a0);
          }

          void RinexClock::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_b744026f46deda44], a0.this$);
          }

          void RinexClock::setStationIdentifier(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationIdentifier_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setStationName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexClock::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeScale_3e3301925c0131d4], a0.this$);
          }

          void RinexClock::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_562aaa7511f66c1c], a0.this$);
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
        namespace clock {
          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockData(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getComments(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self);
          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self);
          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrame(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self);
          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationName(t_RinexClock *self);
          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self);
          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data);
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data);
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data);
          static PyGetSetDef t_RinexClock__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexClock, agencyName),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterID),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterName),
            DECLARE_GET_FIELD(t_RinexClock, clockData),
            DECLARE_GET_FIELD(t_RinexClock, clockDataTypes),
            DECLARE_GET_FIELD(t_RinexClock, comments),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDate),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDateString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeZoneString),
            DECLARE_GETSET_FIELD(t_RinexClock, externalClockReference),
            DECLARE_GETSET_FIELD(t_RinexClock, formatVersion),
            DECLARE_GET_FIELD(t_RinexClock, frame),
            DECLARE_GETSET_FIELD(t_RinexClock, frameName),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedPCVS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfClockDataTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSeconds),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSecondsGNSS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfReceivers),
            DECLARE_GET_FIELD(t_RinexClock, numberOfSatellites),
            DECLARE_GETSET_FIELD(t_RinexClock, programName),
            DECLARE_GET_FIELD(t_RinexClock, receivers),
            DECLARE_GET_FIELD(t_RinexClock, referenceClocks),
            DECLARE_GETSET_FIELD(t_RinexClock, satelliteSystem),
            DECLARE_GET_FIELD(t_RinexClock, satellites),
            DECLARE_GETSET_FIELD(t_RinexClock, stationIdentifier),
            DECLARE_GETSET_FIELD(t_RinexClock, stationName),
            DECLARE_GET_FIELD(t_RinexClock, systemObservationTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, timeScale),
            DECLARE_GETSET_FIELD(t_RinexClock, timeSystem),
            DECLARE_GET_FIELD(t_RinexClock, totalNumberOfDataLines),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexClock, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexClock, addClockData, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addClockDataType, METH_O),
            DECLARE_METHOD(t_RinexClock, addComment, METH_O),
            DECLARE_METHOD(t_RinexClock, addReceiver, METH_O),
            DECLARE_METHOD(t_RinexClock, addReferenceClockList, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addSatellite, METH_O),
            DECLARE_METHOD(t_RinexClock, addSystemObservationType, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockData, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getComments, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDateString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeZoneString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getExternalClockReference, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrameName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSecondsGNSS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReferenceClocks, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSystemObservationTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTotalNumberOfDataLines, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, numberOfObsTypes, METH_O),
            DECLARE_METHOD(t_RinexClock, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterID, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterName, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDateString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeZoneString, METH_O),
            DECLARE_METHOD(t_RinexClock, setExternalClockReference, METH_O),
            DECLARE_METHOD(t_RinexClock, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexClock, setFrameName, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSecondsGNSS, METH_O),
            DECLARE_METHOD(t_RinexClock, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexClock, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationIdentifier, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationName, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeScale, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeSystem, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock)[] = {
            { Py_tp_methods, t_RinexClock__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock, t_RinexClock, RinexClock);

          void t_RinexClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock), &PY_TYPE_DEF(RinexClock), module, "RinexClock", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "Receiver", make_descriptor(&PY_TYPE_DEF(RinexClock$Receiver)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ClockDataType", make_descriptor(&PY_TYPE_DEF(RinexClock$ClockDataType)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ReferenceClock", make_descriptor(&PY_TYPE_DEF(RinexClock$ReferenceClock)));
          }

          void t_RinexClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "class_", make_descriptor(RinexClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "wrapfn_", make_descriptor(t_RinexClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock::wrap_Object(RinexClock(((t_RinexClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addClockData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockData", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_))
            {
              OBJ_CALL(self->object.addClockDataType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addComment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$Receiver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::clock::RinexClock$Receiver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addReceiver(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReceiver", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              OBJ_CALL(self->object.addReferenceClockList(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReferenceClockList", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addSatellite(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.addSystemObservationType(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemObservationType", args);
            return NULL;
          }

          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterID());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getClockData(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$ClockDataType));
          }

          static PyObject *t_RinexClock_getComments(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZoneString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getExternalClockReference());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock_getFrame(t_RinexClock *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrameName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$Receiver));
          }

          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getStationName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.numberOfObsTypes(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "numberOfObsTypes", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterID(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterID", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationDateString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZoneString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZoneString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setExternalClockReference(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setExternalClockReference", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setFrameName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFrameName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSecondsGNSS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSecondsGNSS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationIdentifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationIdentifier", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTimeScale(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterID());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterID(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterID", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterName());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return j2p(value);
          }

          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationDateString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZoneString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZoneString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZoneString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getExternalClockReference());
            return j2p(value);
          }
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setExternalClockReference(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "externalClockReference", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrameName());
            return j2p(value);
          }
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setFrameName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "frameName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSecondsGNSS(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSecondsGNSS", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationIdentifier());
            return j2p(value);
          }
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationIdentifier(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationIdentifier", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationName());
            return j2p(value);
          }
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeScale(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$DoubleArrayConsumer::live$ = false;

            jclass ParseToken$DoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_cc18240f4a737f14] = env->getMethodID(cls, "accept", "([D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleArrayConsumer::accept(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_cc18240f4a737f14], a0.this$);
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
            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleArrayConsumer, t_ParseToken$DoubleArrayConsumer, ParseToken$DoubleArrayConsumer);

            void t_ParseToken$DoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$DoubleArrayConsumer), module, "ParseToken$DoubleArrayConsumer", 0);
            }

            void t_ParseToken$DoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "class_", make_descriptor(ParseToken$DoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleArrayConsumer::wrap_Object(ParseToken$DoubleArrayConsumer(((t_ParseToken$DoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/estimation/measurements/PythonEstimationsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationsProvider::class$ = NULL;
        jmethodID *PythonEstimationsProvider::mids$ = NULL;
        bool PythonEstimationsProvider::live$ = false;

        jclass PythonEstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEstimatedMeasurement_6247f00f8564bd44] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_412668abc8d889e9] = env->getMethodID(cls, "getNumber", "()I");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationsProvider::PythonEstimationsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEstimationsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEstimationsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEstimationsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self);
        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0);
        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data);
        static PyGetSetDef t_PythonEstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationsProvider)[] = {
          { Py_tp_methods, t_PythonEstimationsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationsProvider_init_ },
          { Py_tp_getset, t_PythonEstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationsProvider, t_PythonEstimationsProvider, PythonEstimationsProvider);

        void t_PythonEstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationsProvider), &PY_TYPE_DEF(PythonEstimationsProvider), module, "PythonEstimationsProvider", 1);
        }

        void t_PythonEstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "class_", make_descriptor(PythonEstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "wrapfn_", make_descriptor(t_PythonEstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonEstimationsProvider_getEstimatedMeasurement0 },
            { "getNumber", "()I", (void *) t_PythonEstimationsProvider_getNumber1 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationsProvider::wrap_Object(PythonEstimationsProvider(((t_PythonEstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationsProvider object((jobject) NULL);

          INT_CALL(object = PythonEstimationsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurement", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurement", result);
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

        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractMessageWriter::class$ = NULL;
            jmethodID *PythonAbstractMessageWriter::mids$ = NULL;
            bool PythonAbstractMessageWriter::live$ = false;

            jclass PythonAbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_17d2c89957221da8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractMessageWriter::PythonAbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_17d2c89957221da8, a0.this$, a1.this$, a2, a3.this$)) {}

            void PythonAbstractMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAbstractMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAbstractMessageWriter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          namespace generation {
            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args);
            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self);
            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args);
            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data);
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageWriter)[] = {
              { Py_tp_methods, t_PythonAbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractMessageWriter_init_ },
              { Py_tp_getset, t_PythonAbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageWriter, t_PythonAbstractMessageWriter, PythonAbstractMessageWriter);
            PyObject *t_PythonAbstractMessageWriter::wrap_Object(const PythonAbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageWriter), &PY_TYPE_DEF(PythonAbstractMessageWriter), module, "PythonAbstractMessageWriter", 1);
            }

            void t_PythonAbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "class_", make_descriptor(PythonAbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "wrapfn_", make_descriptor(t_PythonAbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageWriter_pythonDecRef0 },
                { "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonAbstractMessageWriter_writeSegmentContent1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageWriter::wrap_Object(PythonAbstractMessageWriter(((t_PythonAbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              PythonAbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractMessageWriter(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o2 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a2));
              PyObject *result = PyObject_CallMethod(obj, "writeSegmentContent", "OdO", o0, (double) a1, o2);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data)
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
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/GatheringSubscriber.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/SortedSet.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GatheringSubscriber::class$ = NULL;
          jmethodID *GatheringSubscriber::mids$ = NULL;
          bool GatheringSubscriber::live$ = false;

          jclass GatheringSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GatheringSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getGeneratedMeasurements_c6b6a992db588a51] = env->getMethodID(cls, "getGeneratedMeasurements", "()Ljava/util/SortedSet;");
              mids$[mid_handleGeneratedMeasurement_4063373aad443d2b] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GatheringSubscriber::GatheringSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::java::util::SortedSet GatheringSubscriber::getGeneratedMeasurements() const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getGeneratedMeasurements_c6b6a992db588a51]));
          }

          void GatheringSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_4063373aad443d2b], a0.this$);
          }

          void GatheringSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d5db9a5f2035671b], a0.this$, a1.this$);
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
          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self);
          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg);
          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args);
          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data);
          static PyGetSetDef t_GatheringSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_GatheringSubscriber, generatedMeasurements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GatheringSubscriber__methods_[] = {
            DECLARE_METHOD(t_GatheringSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, getGeneratedMeasurements, METH_NOARGS),
            DECLARE_METHOD(t_GatheringSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GatheringSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GatheringSubscriber)[] = {
            { Py_tp_methods, t_GatheringSubscriber__methods_ },
            { Py_tp_init, (void *) t_GatheringSubscriber_init_ },
            { Py_tp_getset, t_GatheringSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GatheringSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GatheringSubscriber, t_GatheringSubscriber, GatheringSubscriber);

          void t_GatheringSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GatheringSubscriber), &PY_TYPE_DEF(GatheringSubscriber), module, "GatheringSubscriber", 0);
          }

          void t_GatheringSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "class_", make_descriptor(GatheringSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "wrapfn_", make_descriptor(t_GatheringSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GatheringSubscriber::initializeClass, 1)))
              return NULL;
            return t_GatheringSubscriber::wrap_Object(GatheringSubscriber(((t_GatheringSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GatheringSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds)
          {
            GatheringSubscriber object((jobject) NULL);

            INT_CALL(object = GatheringSubscriber());
            self->object = object;

            return 0;
          }

          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self)
          {
            ::java::util::SortedSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(result);
          }

          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args)
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

          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data)
          {
            ::java::util::SortedSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/ByteArrayEncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *ByteArrayEncodedMessage::class$ = NULL;
          jmethodID *ByteArrayEncodedMessage::mids$ = NULL;
          bool ByteArrayEncodedMessage::live$ = false;

          jclass ByteArrayEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/ByteArrayEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d759c70c6670fd89] = env->getMethodID(cls, "<init>", "([B)V");
              mids$[mid_start_0640e6acf969ed28] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_412668abc8d889e9] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ByteArrayEncodedMessage::ByteArrayEncodedMessage(const JArray< jbyte > & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_d759c70c6670fd89, a0.this$)) {}

          void ByteArrayEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0640e6acf969ed28]);
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
        namespace parser {
          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args);

          static PyMethodDef t_ByteArrayEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_ByteArrayEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ByteArrayEncodedMessage)[] = {
            { Py_tp_methods, t_ByteArrayEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_ByteArrayEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ByteArrayEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(ByteArrayEncodedMessage, t_ByteArrayEncodedMessage, ByteArrayEncodedMessage);

          void t_ByteArrayEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ByteArrayEncodedMessage), &PY_TYPE_DEF(ByteArrayEncodedMessage), module, "ByteArrayEncodedMessage", 0);
          }

          void t_ByteArrayEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "class_", make_descriptor(ByteArrayEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "wrapfn_", make_descriptor(t_ByteArrayEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ByteArrayEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_ByteArrayEncodedMessage::wrap_Object(ByteArrayEncodedMessage(((t_ByteArrayEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ByteArrayEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            ByteArrayEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              INT_CALL(object = ByteArrayEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ByteArrayEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractRegion::class$ = NULL;
        jmethodID *AbstractRegion::mids$ = NULL;
        bool AbstractRegion::live$ = false;

        jclass AbstractRegion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractRegion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_64db3602bb13fcb5] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;D)V");
            mids$[mid_applyTransform_684309aa9a3df0d0] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_buildNew_6e3699f82e9de739] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_checkPoint_97aee1e2a4e02b02] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_2d47c74d96169553] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_ecd31bc5520bb9ef] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_9eae9a77af60b946] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_getBarycenter_abb5df84e8ab06b8] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_557b8123390d8d0c] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_getTree_95b875058c69b395] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_90bd3924ff8382db] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_c5db5624507e8c83] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_89b302893bdbe1f1] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_c5db5624507e8c83] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_76fb0949df043b81] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
            mids$[mid_checkPoint_83334f71fe202e99] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_fefefdeec93351ea] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_computeGeometricalProperties_0640e6acf969ed28] = env->getMethodID(cls, "computeGeometricalProperties", "()V");
            mids$[mid_setBarycenter_21c52cb9d5c70940] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Vector;)V");
            mids$[mid_setBarycenter_d0a7b63ee924ba4e] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_setSize_10f281d777284cea] = env->getMethodID(cls, "setSize", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractRegion::AbstractRegion(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64db3602bb13fcb5, a0.this$, a1)) {}

        AbstractRegion AbstractRegion::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_applyTransform_684309aa9a3df0d0], a0.this$));
        }

        AbstractRegion AbstractRegion::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_buildNew_6e3699f82e9de739], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_97aee1e2a4e02b02], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Vector & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_2d47c74d96169553], a0.this$));
        }

        jboolean AbstractRegion::contains(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_ecd31bc5520bb9ef], a0.this$);
        }

        AbstractRegion AbstractRegion::copySelf() const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_copySelf_9eae9a77af60b946]));
        }

        ::org::hipparchus::geometry::Point AbstractRegion::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_abb5df84e8ab06b8]));
        }

        jdouble AbstractRegion::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_557b8123390d8d0c]);
        }

        jdouble AbstractRegion::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
        }

        jdouble AbstractRegion::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree AbstractRegion::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_95b875058c69b395], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane AbstractRegion::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_90bd3924ff8382db], a0.this$));
        }

        jboolean AbstractRegion::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
        }

        jboolean AbstractRegion::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_c5db5624507e8c83], a0.this$);
        }

        jboolean AbstractRegion::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_89b302893bdbe1f1]);
        }

        jboolean AbstractRegion::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_c5db5624507e8c83], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection AbstractRegion::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_76fb0949df043b81], a0.this$));
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
        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args);
        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data);
        static PyGetSetDef t_AbstractRegion__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRegion, barycenter),
          DECLARE_GET_FIELD(t_AbstractRegion, boundarySize),
          DECLARE_GET_FIELD(t_AbstractRegion, empty),
          DECLARE_GET_FIELD(t_AbstractRegion, full),
          DECLARE_GET_FIELD(t_AbstractRegion, size),
          DECLARE_GET_FIELD(t_AbstractRegion, tolerance),
          DECLARE_GET_FIELD(t_AbstractRegion, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRegion__methods_[] = {
          DECLARE_METHOD(t_AbstractRegion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractRegion, buildNew, METH_O),
          DECLARE_METHOD(t_AbstractRegion, checkPoint, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, contains, METH_O),
          DECLARE_METHOD(t_AbstractRegion, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTree, METH_O),
          DECLARE_METHOD(t_AbstractRegion, intersection, METH_O),
          DECLARE_METHOD(t_AbstractRegion, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, isFull, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRegion)[] = {
          { Py_tp_methods, t_AbstractRegion__methods_ },
          { Py_tp_init, (void *) t_AbstractRegion_init_ },
          { Py_tp_getset, t_AbstractRegion__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRegion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRegion, t_AbstractRegion, AbstractRegion);
        PyObject *t_AbstractRegion::wrap_Object(const AbstractRegion& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractRegion::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractRegion::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRegion), &PY_TYPE_DEF(AbstractRegion), module, "AbstractRegion", 0);
        }

        void t_AbstractRegion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "class_", make_descriptor(AbstractRegion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "wrapfn_", make_descriptor(t_AbstractRegion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRegion::initializeClass, 1)))
            return NULL;
          return t_AbstractRegion::wrap_Object(AbstractRegion(((t_AbstractRegion *) arg)->object.this$));
        }
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRegion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          AbstractRegion object((jobject) NULL);

          if (!parseArgs(args, "[KD", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1))
          {
            INT_CALL(object = AbstractRegion(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::Vector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self)
        {
          AbstractRegion result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Character.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Character::class$ = NULL;
    jmethodID *Character::mids$ = NULL;
    bool Character::live$ = false;
    jint Character::BYTES = (jint) 0;
    jbyte Character::COMBINING_SPACING_MARK = (jbyte) 0;
    jbyte Character::CONNECTOR_PUNCTUATION = (jbyte) 0;
    jbyte Character::CONTROL = (jbyte) 0;
    jbyte Character::CURRENCY_SYMBOL = (jbyte) 0;
    jbyte Character::DASH_PUNCTUATION = (jbyte) 0;
    jbyte Character::DECIMAL_DIGIT_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_ARABIC_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_BOUNDARY_NEUTRAL = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_NONSPACING_MARK = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_OTHER_NEUTRALS = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_SEGMENT_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_UNDEFINED = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_WHITESPACE = (jbyte) 0;
    jbyte Character::ENCLOSING_MARK = (jbyte) 0;
    jbyte Character::END_PUNCTUATION = (jbyte) 0;
    jbyte Character::FINAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::FORMAT = (jbyte) 0;
    jbyte Character::INITIAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::LETTER_NUMBER = (jbyte) 0;
    jbyte Character::LINE_SEPARATOR = (jbyte) 0;
    jbyte Character::LOWERCASE_LETTER = (jbyte) 0;
    jbyte Character::MATH_SYMBOL = (jbyte) 0;
    jint Character::MAX_CODE_POINT = (jint) 0;
    jchar Character::MAX_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MAX_LOW_SURROGATE = (jchar) 0;
    jint Character::MAX_RADIX = (jint) 0;
    jchar Character::MAX_SURROGATE = (jchar) 0;
    jchar Character::MAX_VALUE = (jchar) 0;
    jint Character::MIN_CODE_POINT = (jint) 0;
    jchar Character::MIN_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MIN_LOW_SURROGATE = (jchar) 0;
    jint Character::MIN_RADIX = (jint) 0;
    jint Character::MIN_SUPPLEMENTARY_CODE_POINT = (jint) 0;
    jchar Character::MIN_SURROGATE = (jchar) 0;
    jchar Character::MIN_VALUE = (jchar) 0;
    jbyte Character::MODIFIER_LETTER = (jbyte) 0;
    jbyte Character::MODIFIER_SYMBOL = (jbyte) 0;
    jbyte Character::NON_SPACING_MARK = (jbyte) 0;
    jbyte Character::OTHER_LETTER = (jbyte) 0;
    jbyte Character::OTHER_NUMBER = (jbyte) 0;
    jbyte Character::OTHER_PUNCTUATION = (jbyte) 0;
    jbyte Character::OTHER_SYMBOL = (jbyte) 0;
    jbyte Character::PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::PRIVATE_USE = (jbyte) 0;
    jint Character::SIZE = (jint) 0;
    jbyte Character::SPACE_SEPARATOR = (jbyte) 0;
    jbyte Character::START_PUNCTUATION = (jbyte) 0;
    jbyte Character::SURROGATE = (jbyte) 0;
    jbyte Character::TITLECASE_LETTER = (jbyte) 0;
    ::java::lang::Class *Character::TYPE = NULL;
    jbyte Character::UNASSIGNED = (jbyte) 0;
    jbyte Character::UPPERCASE_LETTER = (jbyte) 0;

    jclass Character::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Character");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_102587d250c3217b] = env->getMethodID(cls, "<init>", "(C)V");
        mids$[mid_charCount_0092017e99012694] = env->getStaticMethodID(cls, "charCount", "(I)I");
        mids$[mid_charValue_d156d1ce330f6993] = env->getMethodID(cls, "charValue", "()C");
        mids$[mid_codePointAt_6fa9e4b9900636fe] = env->getStaticMethodID(cls, "codePointAt", "([CI)I");
        mids$[mid_codePointAt_85e776c466ce7677] = env->getStaticMethodID(cls, "codePointAt", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointAt_f0b052b9721148b0] = env->getStaticMethodID(cls, "codePointAt", "([CII)I");
        mids$[mid_codePointBefore_6fa9e4b9900636fe] = env->getStaticMethodID(cls, "codePointBefore", "([CI)I");
        mids$[mid_codePointBefore_85e776c466ce7677] = env->getStaticMethodID(cls, "codePointBefore", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointBefore_f0b052b9721148b0] = env->getStaticMethodID(cls, "codePointBefore", "([CII)I");
        mids$[mid_codePointCount_f0b052b9721148b0] = env->getStaticMethodID(cls, "codePointCount", "([CII)I");
        mids$[mid_codePointCount_ed571a5dff49de9c] = env->getStaticMethodID(cls, "codePointCount", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_codePointOf_a6602ba493f77974] = env->getStaticMethodID(cls, "codePointOf", "(Ljava/lang/String;)I");
        mids$[mid_compare_c8c304a5511f86d9] = env->getStaticMethodID(cls, "compare", "(CC)I");
        mids$[mid_compareTo_bd48eee168ca5dd8] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Character;)I");
        mids$[mid_digit_2023ddd7347a5b94] = env->getStaticMethodID(cls, "digit", "(CI)I");
        mids$[mid_digit_5625cf3db98dadc1] = env->getStaticMethodID(cls, "digit", "(II)I");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_forDigit_ec470d625afee1a6] = env->getStaticMethodID(cls, "forDigit", "(II)C");
        mids$[mid_getDirectionality_93e774631b43a80a] = env->getStaticMethodID(cls, "getDirectionality", "(C)B");
        mids$[mid_getDirectionality_8760571776ef2b7c] = env->getStaticMethodID(cls, "getDirectionality", "(I)B");
        mids$[mid_getName_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "getName", "(I)Ljava/lang/String;");
        mids$[mid_getNumericValue_834d0cf4ba67ada8] = env->getStaticMethodID(cls, "getNumericValue", "(C)I");
        mids$[mid_getNumericValue_0092017e99012694] = env->getStaticMethodID(cls, "getNumericValue", "(I)I");
        mids$[mid_getType_834d0cf4ba67ada8] = env->getStaticMethodID(cls, "getType", "(C)I");
        mids$[mid_getType_0092017e99012694] = env->getStaticMethodID(cls, "getType", "(I)I");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_834d0cf4ba67ada8] = env->getStaticMethodID(cls, "hashCode", "(C)I");
        mids$[mid_highSurrogate_4affd00329d5d4cf] = env->getStaticMethodID(cls, "highSurrogate", "(I)C");
        mids$[mid_isAlphabetic_e034cac2b514bb09] = env->getStaticMethodID(cls, "isAlphabetic", "(I)Z");
        mids$[mid_isBmpCodePoint_e034cac2b514bb09] = env->getStaticMethodID(cls, "isBmpCodePoint", "(I)Z");
        mids$[mid_isDefined_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isDefined", "(C)Z");
        mids$[mid_isDefined_e034cac2b514bb09] = env->getStaticMethodID(cls, "isDefined", "(I)Z");
        mids$[mid_isDigit_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isDigit", "(C)Z");
        mids$[mid_isDigit_e034cac2b514bb09] = env->getStaticMethodID(cls, "isDigit", "(I)Z");
        mids$[mid_isHighSurrogate_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isHighSurrogate", "(C)Z");
        mids$[mid_isISOControl_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isISOControl", "(C)Z");
        mids$[mid_isISOControl_e034cac2b514bb09] = env->getStaticMethodID(cls, "isISOControl", "(I)Z");
        mids$[mid_isIdentifierIgnorable_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(C)Z");
        mids$[mid_isIdentifierIgnorable_e034cac2b514bb09] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(I)Z");
        mids$[mid_isIdeographic_e034cac2b514bb09] = env->getStaticMethodID(cls, "isIdeographic", "(I)Z");
        mids$[mid_isJavaIdentifierPart_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(C)Z");
        mids$[mid_isJavaIdentifierPart_e034cac2b514bb09] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(I)Z");
        mids$[mid_isJavaIdentifierStart_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(C)Z");
        mids$[mid_isJavaIdentifierStart_e034cac2b514bb09] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(I)Z");
        mids$[mid_isJavaLetter_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isJavaLetter", "(C)Z");
        mids$[mid_isJavaLetterOrDigit_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isJavaLetterOrDigit", "(C)Z");
        mids$[mid_isLetter_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isLetter", "(C)Z");
        mids$[mid_isLetter_e034cac2b514bb09] = env->getStaticMethodID(cls, "isLetter", "(I)Z");
        mids$[mid_isLetterOrDigit_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isLetterOrDigit", "(C)Z");
        mids$[mid_isLetterOrDigit_e034cac2b514bb09] = env->getStaticMethodID(cls, "isLetterOrDigit", "(I)Z");
        mids$[mid_isLowSurrogate_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isLowSurrogate", "(C)Z");
        mids$[mid_isLowerCase_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isLowerCase", "(C)Z");
        mids$[mid_isLowerCase_e034cac2b514bb09] = env->getStaticMethodID(cls, "isLowerCase", "(I)Z");
        mids$[mid_isMirrored_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isMirrored", "(C)Z");
        mids$[mid_isMirrored_e034cac2b514bb09] = env->getStaticMethodID(cls, "isMirrored", "(I)Z");
        mids$[mid_isSpace_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isSpace", "(C)Z");
        mids$[mid_isSpaceChar_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isSpaceChar", "(C)Z");
        mids$[mid_isSpaceChar_e034cac2b514bb09] = env->getStaticMethodID(cls, "isSpaceChar", "(I)Z");
        mids$[mid_isSupplementaryCodePoint_e034cac2b514bb09] = env->getStaticMethodID(cls, "isSupplementaryCodePoint", "(I)Z");
        mids$[mid_isSurrogate_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isSurrogate", "(C)Z");
        mids$[mid_isSurrogatePair_522b939d28cefe74] = env->getStaticMethodID(cls, "isSurrogatePair", "(CC)Z");
        mids$[mid_isTitleCase_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isTitleCase", "(C)Z");
        mids$[mid_isTitleCase_e034cac2b514bb09] = env->getStaticMethodID(cls, "isTitleCase", "(I)Z");
        mids$[mid_isUnicodeIdentifierPart_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(C)Z");
        mids$[mid_isUnicodeIdentifierPart_e034cac2b514bb09] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(I)Z");
        mids$[mid_isUnicodeIdentifierStart_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(C)Z");
        mids$[mid_isUnicodeIdentifierStart_e034cac2b514bb09] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(I)Z");
        mids$[mid_isUpperCase_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isUpperCase", "(C)Z");
        mids$[mid_isUpperCase_e034cac2b514bb09] = env->getStaticMethodID(cls, "isUpperCase", "(I)Z");
        mids$[mid_isValidCodePoint_e034cac2b514bb09] = env->getStaticMethodID(cls, "isValidCodePoint", "(I)Z");
        mids$[mid_isWhitespace_8b1aec3f414bd49d] = env->getStaticMethodID(cls, "isWhitespace", "(C)Z");
        mids$[mid_isWhitespace_e034cac2b514bb09] = env->getStaticMethodID(cls, "isWhitespace", "(I)Z");
        mids$[mid_lowSurrogate_4affd00329d5d4cf] = env->getStaticMethodID(cls, "lowSurrogate", "(I)C");
        mids$[mid_offsetByCodePoints_ed571a5dff49de9c] = env->getStaticMethodID(cls, "offsetByCodePoints", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_offsetByCodePoints_723c61fbbbb55517] = env->getStaticMethodID(cls, "offsetByCodePoints", "([CIIII)I");
        mids$[mid_reverseBytes_33d3b9476ded31af] = env->getStaticMethodID(cls, "reverseBytes", "(C)C");
        mids$[mid_toChars_5db89bc9b6cbd06c] = env->getStaticMethodID(cls, "toChars", "(I)[C");
        mids$[mid_toChars_4edf585b2da9b651] = env->getStaticMethodID(cls, "toChars", "(I[CI)I");
        mids$[mid_toCodePoint_c8c304a5511f86d9] = env->getStaticMethodID(cls, "toCodePoint", "(CC)I");
        mids$[mid_toLowerCase_33d3b9476ded31af] = env->getStaticMethodID(cls, "toLowerCase", "(C)C");
        mids$[mid_toLowerCase_0092017e99012694] = env->getStaticMethodID(cls, "toLowerCase", "(I)I");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_2e13aecc9b888e11] = env->getStaticMethodID(cls, "toString", "(C)Ljava/lang/String;");
        mids$[mid_toString_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toTitleCase_33d3b9476ded31af] = env->getStaticMethodID(cls, "toTitleCase", "(C)C");
        mids$[mid_toTitleCase_0092017e99012694] = env->getStaticMethodID(cls, "toTitleCase", "(I)I");
        mids$[mid_toUpperCase_33d3b9476ded31af] = env->getStaticMethodID(cls, "toUpperCase", "(C)C");
        mids$[mid_toUpperCase_0092017e99012694] = env->getStaticMethodID(cls, "toUpperCase", "(I)I");
        mids$[mid_valueOf_3ff79cac087c1bb2] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/Character;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        COMBINING_SPACING_MARK = env->getStaticByteField(cls, "COMBINING_SPACING_MARK");
        CONNECTOR_PUNCTUATION = env->getStaticByteField(cls, "CONNECTOR_PUNCTUATION");
        CONTROL = env->getStaticByteField(cls, "CONTROL");
        CURRENCY_SYMBOL = env->getStaticByteField(cls, "CURRENCY_SYMBOL");
        DASH_PUNCTUATION = env->getStaticByteField(cls, "DASH_PUNCTUATION");
        DECIMAL_DIGIT_NUMBER = env->getStaticByteField(cls, "DECIMAL_DIGIT_NUMBER");
        DIRECTIONALITY_ARABIC_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_ARABIC_NUMBER");
        DIRECTIONALITY_BOUNDARY_NEUTRAL = env->getStaticByteField(cls, "DIRECTIONALITY_BOUNDARY_NEUTRAL");
        DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER");
        DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR");
        DIRECTIONALITY_FIRST_STRONG_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_FIRST_STRONG_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT");
        DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING");
        DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE");
        DIRECTIONALITY_NONSPACING_MARK = env->getStaticByteField(cls, "DIRECTIONALITY_NONSPACING_MARK");
        DIRECTIONALITY_OTHER_NEUTRALS = env->getStaticByteField(cls, "DIRECTIONALITY_OTHER_NEUTRALS");
        DIRECTIONALITY_PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_PARAGRAPH_SEPARATOR");
        DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT");
        DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT");
        DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC");
        DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING");
        DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE");
        DIRECTIONALITY_SEGMENT_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_SEGMENT_SEPARATOR");
        DIRECTIONALITY_UNDEFINED = env->getStaticByteField(cls, "DIRECTIONALITY_UNDEFINED");
        DIRECTIONALITY_WHITESPACE = env->getStaticByteField(cls, "DIRECTIONALITY_WHITESPACE");
        ENCLOSING_MARK = env->getStaticByteField(cls, "ENCLOSING_MARK");
        END_PUNCTUATION = env->getStaticByteField(cls, "END_PUNCTUATION");
        FINAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "FINAL_QUOTE_PUNCTUATION");
        FORMAT = env->getStaticByteField(cls, "FORMAT");
        INITIAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "INITIAL_QUOTE_PUNCTUATION");
        LETTER_NUMBER = env->getStaticByteField(cls, "LETTER_NUMBER");
        LINE_SEPARATOR = env->getStaticByteField(cls, "LINE_SEPARATOR");
        LOWERCASE_LETTER = env->getStaticByteField(cls, "LOWERCASE_LETTER");
        MATH_SYMBOL = env->getStaticByteField(cls, "MATH_SYMBOL");
        MAX_CODE_POINT = env->getStaticIntField(cls, "MAX_CODE_POINT");
        MAX_HIGH_SURROGATE = env->getStaticCharField(cls, "MAX_HIGH_SURROGATE");
        MAX_LOW_SURROGATE = env->getStaticCharField(cls, "MAX_LOW_SURROGATE");
        MAX_RADIX = env->getStaticIntField(cls, "MAX_RADIX");
        MAX_SURROGATE = env->getStaticCharField(cls, "MAX_SURROGATE");
        MAX_VALUE = env->getStaticCharField(cls, "MAX_VALUE");
        MIN_CODE_POINT = env->getStaticIntField(cls, "MIN_CODE_POINT");
        MIN_HIGH_SURROGATE = env->getStaticCharField(cls, "MIN_HIGH_SURROGATE");
        MIN_LOW_SURROGATE = env->getStaticCharField(cls, "MIN_LOW_SURROGATE");
        MIN_RADIX = env->getStaticIntField(cls, "MIN_RADIX");
        MIN_SUPPLEMENTARY_CODE_POINT = env->getStaticIntField(cls, "MIN_SUPPLEMENTARY_CODE_POINT");
        MIN_SURROGATE = env->getStaticCharField(cls, "MIN_SURROGATE");
        MIN_VALUE = env->getStaticCharField(cls, "MIN_VALUE");
        MODIFIER_LETTER = env->getStaticByteField(cls, "MODIFIER_LETTER");
        MODIFIER_SYMBOL = env->getStaticByteField(cls, "MODIFIER_SYMBOL");
        NON_SPACING_MARK = env->getStaticByteField(cls, "NON_SPACING_MARK");
        OTHER_LETTER = env->getStaticByteField(cls, "OTHER_LETTER");
        OTHER_NUMBER = env->getStaticByteField(cls, "OTHER_NUMBER");
        OTHER_PUNCTUATION = env->getStaticByteField(cls, "OTHER_PUNCTUATION");
        OTHER_SYMBOL = env->getStaticByteField(cls, "OTHER_SYMBOL");
        PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "PARAGRAPH_SEPARATOR");
        PRIVATE_USE = env->getStaticByteField(cls, "PRIVATE_USE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        SPACE_SEPARATOR = env->getStaticByteField(cls, "SPACE_SEPARATOR");
        START_PUNCTUATION = env->getStaticByteField(cls, "START_PUNCTUATION");
        SURROGATE = env->getStaticByteField(cls, "SURROGATE");
        TITLECASE_LETTER = env->getStaticByteField(cls, "TITLECASE_LETTER");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        UNASSIGNED = env->getStaticByteField(cls, "UNASSIGNED");
        UPPERCASE_LETTER = env->getStaticByteField(cls, "UPPERCASE_LETTER");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Character::Character(jchar a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_102587d250c3217b, a0)) {}

    jint Character::charCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_charCount_0092017e99012694], a0);
    }

    jchar Character::charValue() const
    {
      return env->callCharMethod(this$, mids$[mid_charValue_d156d1ce330f6993]);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_6fa9e4b9900636fe], a0.this$, a1);
    }

    jint Character::codePointAt(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_85e776c466ce7677], a0.this$, a1);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_f0b052b9721148b0], a0.this$, a1, a2);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_6fa9e4b9900636fe], a0.this$, a1);
    }

    jint Character::codePointBefore(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_85e776c466ce7677], a0.this$, a1);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_f0b052b9721148b0], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_f0b052b9721148b0], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_ed571a5dff49de9c], a0.this$, a1, a2);
    }

    jint Character::codePointOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointOf_a6602ba493f77974], a0.this$);
    }

    jint Character::compare(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_c8c304a5511f86d9], a0, a1);
    }

    jint Character::compareTo(const Character & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_bd48eee168ca5dd8], a0.this$);
    }

    jint Character::digit(jchar a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_2023ddd7347a5b94], a0, a1);
    }

    jint Character::digit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_5625cf3db98dadc1], a0, a1);
    }

    jboolean Character::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jchar Character::forDigit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_forDigit_ec470d625afee1a6], a0, a1);
    }

    jbyte Character::getDirectionality(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_93e774631b43a80a], a0);
    }

    jbyte Character::getDirectionality(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_8760571776ef2b7c], a0);
    }

    ::java::lang::String Character::getName(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getName_0f10d4a5e06f61c0], a0));
    }

    jint Character::getNumericValue(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_834d0cf4ba67ada8], a0);
    }

    jint Character::getNumericValue(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_0092017e99012694], a0);
    }

    jint Character::getType(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_834d0cf4ba67ada8], a0);
    }

    jint Character::getType(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_0092017e99012694], a0);
    }

    jint Character::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Character::hashCode(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_834d0cf4ba67ada8], a0);
    }

    jchar Character::highSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_highSurrogate_4affd00329d5d4cf], a0);
    }

    jboolean Character::isAlphabetic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isAlphabetic_e034cac2b514bb09], a0);
    }

    jboolean Character::isBmpCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isBmpCodePoint_e034cac2b514bb09], a0);
    }

    jboolean Character::isDefined(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isDefined(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_e034cac2b514bb09], a0);
    }

    jboolean Character::isDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_e034cac2b514bb09], a0);
    }

    jboolean Character::isHighSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isHighSurrogate_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isISOControl(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isISOControl(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_e034cac2b514bb09], a0);
    }

    jboolean Character::isIdentifierIgnorable(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isIdentifierIgnorable(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_e034cac2b514bb09], a0);
    }

    jboolean Character::isIdeographic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdeographic_e034cac2b514bb09], a0);
    }

    jboolean Character::isJavaIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isJavaIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_e034cac2b514bb09], a0);
    }

    jboolean Character::isJavaIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isJavaIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_e034cac2b514bb09], a0);
    }

    jboolean Character::isJavaLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetter_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isJavaLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetterOrDigit_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isLetter(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_e034cac2b514bb09], a0);
    }

    jboolean Character::isLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isLetterOrDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_e034cac2b514bb09], a0);
    }

    jboolean Character::isLowSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowSurrogate_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_e034cac2b514bb09], a0);
    }

    jboolean Character::isMirrored(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isMirrored(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_e034cac2b514bb09], a0);
    }

    jboolean Character::isSpace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpace_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isSpaceChar(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isSpaceChar(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_e034cac2b514bb09], a0);
    }

    jboolean Character::isSupplementaryCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSupplementaryCodePoint_e034cac2b514bb09], a0);
    }

    jboolean Character::isSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogate_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isSurrogatePair(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogatePair_522b939d28cefe74], a0, a1);
    }

    jboolean Character::isTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_e034cac2b514bb09], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_e034cac2b514bb09], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_e034cac2b514bb09], a0);
    }

    jboolean Character::isUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_e034cac2b514bb09], a0);
    }

    jboolean Character::isValidCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isValidCodePoint_e034cac2b514bb09], a0);
    }

    jboolean Character::isWhitespace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_8b1aec3f414bd49d], a0);
    }

    jboolean Character::isWhitespace(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_e034cac2b514bb09], a0);
    }

    jchar Character::lowSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_lowSurrogate_4affd00329d5d4cf], a0);
    }

    jint Character::offsetByCodePoints(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_ed571a5dff49de9c], a0.this$, a1, a2);
    }

    jint Character::offsetByCodePoints(const JArray< jchar > & a0, jint a1, jint a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_723c61fbbbb55517], a0.this$, a1, a2, a3, a4);
    }

    jchar Character::reverseBytes(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_reverseBytes_33d3b9476ded31af], a0);
    }

    JArray< jchar > Character::toChars(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_toChars_5db89bc9b6cbd06c], a0));
    }

    jint Character::toChars(jint a0, const JArray< jchar > & a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toChars_4edf585b2da9b651], a0, a1.this$, a2);
    }

    jint Character::toCodePoint(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toCodePoint_c8c304a5511f86d9], a0, a1);
    }

    jchar Character::toLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toLowerCase_33d3b9476ded31af], a0);
    }

    jint Character::toLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toLowerCase_0092017e99012694], a0);
    }

    ::java::lang::String Character::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Character::toString(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_2e13aecc9b888e11], a0));
    }

    ::java::lang::String Character::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_0f10d4a5e06f61c0], a0));
    }

    jchar Character::toTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toTitleCase_33d3b9476ded31af], a0);
    }

    jint Character::toTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toTitleCase_0092017e99012694], a0);
    }

    jchar Character::toUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toUpperCase_33d3b9476ded31af], a0);
    }

    jint Character::toUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUpperCase_0092017e99012694], a0);
    }

    Character Character::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Character(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3ff79cac087c1bb2], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_charValue(t_Character *self);
    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg);
    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_equals(t_Character *self, PyObject *args);
    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args);
    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toString(t_Character *self, PyObject *args);
    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Character__methods_[] = {
      DECLARE_METHOD(t_Character, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charValue, METH_NOARGS),
      DECLARE_METHOD(t_Character, codePointAt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointBefore, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointCount, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, compareTo, METH_O),
      DECLARE_METHOD(t_Character, digit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, equals, METH_VARARGS),
      DECLARE_METHOD(t_Character, forDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getDirectionality, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, getNumericValue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getType, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Character, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, highSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isAlphabetic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isBmpCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isDefined, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isHighSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isISOControl, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdentifierIgnorable, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdeographic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetter, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetterOrDigit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetterOrDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isMirrored, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpace, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpaceChar, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSupplementaryCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogatePair, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isValidCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isWhitespace, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, lowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, offsetByCodePoints, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, toChars, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toCodePoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toString, METH_VARARGS),
      DECLARE_METHOD(t_Character, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, valueOf, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Character)[] = {
      { Py_tp_methods, t_Character__methods_ },
      { Py_tp_init, (void *) t_Character_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Character)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Character, t_Character, Character);

    void t_Character::install(PyObject *module)
    {
      installType(&PY_TYPE(Character), &PY_TYPE_DEF(Character), module, "Character", 0);
    }

    void t_Character::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "class_", make_descriptor(Character::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "wrapfn_", make_descriptor(unboxCharacter));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "boxfn_", make_descriptor(boxCharacter));
      env->getClass(Character::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "BYTES", make_descriptor(Character::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "COMBINING_SPACING_MARK", make_descriptor(Character::COMBINING_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONNECTOR_PUNCTUATION", make_descriptor(Character::CONNECTOR_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONTROL", make_descriptor(Character::CONTROL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CURRENCY_SYMBOL", make_descriptor(Character::CURRENCY_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DASH_PUNCTUATION", make_descriptor(Character::DASH_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DECIMAL_DIGIT_NUMBER", make_descriptor(Character::DECIMAL_DIGIT_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_ARABIC_NUMBER", make_descriptor(Character::DIRECTIONALITY_ARABIC_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_BOUNDARY_NEUTRAL", make_descriptor(Character::DIRECTIONALITY_BOUNDARY_NEUTRAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_FIRST_STRONG_ISOLATE", make_descriptor(Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_NONSPACING_MARK", make_descriptor(Character::DIRECTIONALITY_NONSPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_OTHER_NEUTRALS", make_descriptor(Character::DIRECTIONALITY_OTHER_NEUTRALS));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_PARAGRAPH_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_SEGMENT_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_SEGMENT_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_UNDEFINED", make_descriptor(Character::DIRECTIONALITY_UNDEFINED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_WHITESPACE", make_descriptor(Character::DIRECTIONALITY_WHITESPACE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "ENCLOSING_MARK", make_descriptor(Character::ENCLOSING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "END_PUNCTUATION", make_descriptor(Character::END_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FINAL_QUOTE_PUNCTUATION", make_descriptor(Character::FINAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FORMAT", make_descriptor(Character::FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "INITIAL_QUOTE_PUNCTUATION", make_descriptor(Character::INITIAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LETTER_NUMBER", make_descriptor(Character::LETTER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LINE_SEPARATOR", make_descriptor(Character::LINE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LOWERCASE_LETTER", make_descriptor(Character::LOWERCASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MATH_SYMBOL", make_descriptor(Character::MATH_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_CODE_POINT", make_descriptor(Character::MAX_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_HIGH_SURROGATE", make_descriptor(Character::MAX_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_LOW_SURROGATE", make_descriptor(Character::MAX_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_RADIX", make_descriptor(Character::MAX_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_SURROGATE", make_descriptor(Character::MAX_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_VALUE", make_descriptor(Character::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_CODE_POINT", make_descriptor(Character::MIN_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_HIGH_SURROGATE", make_descriptor(Character::MIN_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_LOW_SURROGATE", make_descriptor(Character::MIN_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_RADIX", make_descriptor(Character::MIN_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SUPPLEMENTARY_CODE_POINT", make_descriptor(Character::MIN_SUPPLEMENTARY_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SURROGATE", make_descriptor(Character::MIN_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_VALUE", make_descriptor(Character::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_LETTER", make_descriptor(Character::MODIFIER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_SYMBOL", make_descriptor(Character::MODIFIER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "NON_SPACING_MARK", make_descriptor(Character::NON_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_LETTER", make_descriptor(Character::OTHER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_NUMBER", make_descriptor(Character::OTHER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_PUNCTUATION", make_descriptor(Character::OTHER_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_SYMBOL", make_descriptor(Character::OTHER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PARAGRAPH_SEPARATOR", make_descriptor(Character::PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PRIVATE_USE", make_descriptor(Character::PRIVATE_USE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SIZE", make_descriptor(Character::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SPACE_SEPARATOR", make_descriptor(Character::SPACE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "START_PUNCTUATION", make_descriptor(Character::START_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SURROGATE", make_descriptor(Character::SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TITLECASE_LETTER", make_descriptor(Character::TITLECASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Character::TYPE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UNASSIGNED", make_descriptor(Character::UNASSIGNED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UPPERCASE_LETTER", make_descriptor(Character::UPPERCASE_LETTER));
    }

    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Character::initializeClass, 1)))
        return NULL;
      return t_Character::wrap_Object(Character(((t_Character *) arg)->object.this$));
    }
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Character::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds)
    {
      jchar a0;
      Character object((jobject) NULL);

      if (!parseArgs(args, "C", &a0))
      {
        INT_CALL(object = Character(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::charCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "charCount", arg);
      return NULL;
    }

    static PyObject *t_Character_charValue(t_Character *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.charValue());
      return c2p(result);
    }

    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointAt", args);
      return NULL;
    }

    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointBefore", args);
      return NULL;
    }

    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::codePointOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "codePointOf", arg);
      return NULL;
    }

    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg)
    {
      Character a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Character), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "digit", args);
      return NULL;
    }

    static PyObject *t_Character_equals(t_Character *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jchar result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::forDigit(a0, a1));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "forDigit", args);
      return NULL;
    }

    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jbyte result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jbyte result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDirectionality", args);
      return NULL;
    }

    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::getName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "getName", arg);
      return NULL;
    }

    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumericValue", args);
      return NULL;
    }

    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getType", args);
      return NULL;
    }

    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jint result;

      if (!parseArgs(args, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::highSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "highSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isAlphabetic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isAlphabetic", arg);
      return NULL;
    }

    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isBmpCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isBmpCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDefined", args);
      return NULL;
    }

    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isHighSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isHighSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isISOControl", args);
      return NULL;
    }

    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isIdentifierIgnorable", args);
      return NULL;
    }

    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isIdeographic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isIdeographic", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetter(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetter", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetterOrDigit(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetterOrDigit", arg);
      return NULL;
    }

    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetter", args);
      return NULL;
    }

    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetterOrDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isLowSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isLowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isMirrored", args);
      return NULL;
    }

    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSpace(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSpace", arg);
      return NULL;
    }

    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isSpaceChar", args);
      return NULL;
    }

    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSupplementaryCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSupplementaryCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jboolean result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogatePair(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogatePair", args);
      return NULL;
    }

    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isValidCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isValidCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isWhitespace", args);
      return NULL;
    }

    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::lowSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "lowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint result;

          if (!parseArgs(args, "[CIIII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jchar result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::reverseBytes(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint result;

          if (!parseArgs(args, "I[CI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toChars", args);
      return NULL;
    }

    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::toCodePoint(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toCodePoint", args);
      return NULL;
    }

    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_toString(t_Character *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      Character result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::valueOf(a0));
        return t_Character::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractGradientConverter::class$ = NULL;
        jmethodID *AbstractGradientConverter::mids$ = NULL;
        bool AbstractGradientConverter::live$ = false;

        jclass AbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeStateParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeStateParameters", "()I");
            mids$[mid_getParameters_6c8ef9df73e7294f] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getParametersAtStateDate_6c8ef9df73e7294f] = env->getMethodID(cls, "getParametersAtStateDate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getState_655097255f6fdb75] = env->getMethodID(cls, "getState", "(Lorg/orekit/utils/ParameterDriversProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_initStates_b66c84a5711243d5] = env->getMethodID(cls, "initStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_buildBasicGradientSpacecraftState_21bc575738c6fbb6] = env->getStaticMethodID(cls, "buildBasicGradientSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_extend_ba3b4c80c8c4abc1] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_a82b19a24d5b726e] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_extend_beae67aa5f292d28] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_412668abc8d889e9]);
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParameters(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParameters_6c8ef9df73e7294f], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParametersAtStateDate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParametersAtStateDate_6c8ef9df73e7294f], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractGradientConverter::getState(const ::org::orekit::utils::ParameterDriversProvider & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_655097255f6fdb75], a0.this$));
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
        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self);
        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, getFreeStateParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParameters, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParametersAtStateDate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getState, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGradientConverter)[] = {
          { Py_tp_methods, t_AbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGradientConverter, t_AbstractGradientConverter, AbstractGradientConverter);

        void t_AbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGradientConverter), &PY_TYPE_DEF(AbstractGradientConverter), module, "AbstractGradientConverter", 0);
        }

        void t_AbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "class_", make_descriptor(AbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "wrapfn_", make_descriptor(t_AbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractGradientConverter::wrap_Object(AbstractGradientConverter(((t_AbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParameters(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameters", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParametersAtStateDate(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParametersAtStateDate", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriversProvider a0((jobject) NULL);
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getState", arg);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeElementsType::class$ = NULL;
              jmethodID *AttitudeElementsType::mids$ = NULL;
              bool AttitudeElementsType::live$ = false;
              AttitudeElementsType *AttitudeElementsType::DCM = NULL;
              AttitudeElementsType *AttitudeElementsType::EULER_ANGLES = NULL;
              AttitudeElementsType *AttitudeElementsType::QUATERNION = NULL;

              jclass AttitudeElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_0d9551367f7ecdef] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toRotation_01b7a316d7d30804] = env->getMethodID(cls, "toRotation", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;[D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_38fc0a915cc6df17] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_values_672cc2848e4e7599] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DCM = new AttitudeElementsType(env->getStaticObjectField(cls, "DCM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  EULER_ANGLES = new AttitudeElementsType(env->getStaticObjectField(cls, "EULER_ANGLES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  QUATERNION = new AttitudeElementsType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_0d9551367f7ecdef]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeElementsType::toRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const JArray< jdouble > & a1) const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_01b7a316d7d30804], a0.this$, a1.this$));
              }

              ::java::lang::String AttitudeElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
              }

              AttitudeElementsType AttitudeElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_38fc0a915cc6df17], a0.this$));
              }

              JArray< AttitudeElementsType > AttitudeElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_672cc2848e4e7599]));
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
              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self);
              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type);
              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data);
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data);
              static PyGetSetDef t_AttitudeElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeElementsType, units),
                DECLARE_GET_FIELD(t_AttitudeElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeElementsType__methods_[] = {
                DECLARE_METHOD(t_AttitudeElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toRotation, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeElementsType)[] = {
                { Py_tp_methods, t_AttitudeElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeElementsType, t_AttitudeElementsType, AttitudeElementsType);
              PyObject *t_AttitudeElementsType::wrap_Object(const AttitudeElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeElementsType), &PY_TYPE_DEF(AttitudeElementsType), module, "AttitudeElementsType", 0);
              }

              void t_AttitudeElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "class_", make_descriptor(AttitudeElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "wrapfn_", make_descriptor(t_AttitudeElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "DCM", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::DCM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "EULER_ANGLES", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::EULER_ANGLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "QUATERNION", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::QUATERNION)));
              }

              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeElementsType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeElementsType::wrap_Object(AttitudeElementsType(((t_AttitudeElementsType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

                if (!parseArgs(args, "K[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.toRotation(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toRotation", args);
                return NULL;
              }

              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(AttitudeElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::valueOf(a0));
                  return t_AttitudeElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type)
              {
                JArray< AttitudeElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeElementsType::wrap_jobject);
              }
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions::class$ = NULL;
      jmethodID *IERSConventions::mids$ = NULL;
      bool IERSConventions::live$ = false;
      IERSConventions *IERSConventions::IERS_1996 = NULL;
      IERSConventions *IERSConventions::IERS_2003 = NULL;
      IERSConventions *IERSConventions::IERS_2010 = NULL;

      jclass IERSConventions::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluateTC_b0b988f941da47d8] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_evaluateTC_b884068a2c99f6ca] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluateTC_afadb93117a91cf2] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScales;)D");
          mids$[mid_evaluateTC_c40527712cc30fd1] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScales;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEOPTidalCorrection_b02468de716866b4] = env->getMethodID(cls, "getEOPTidalCorrection", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEOPTidalCorrection_a94f012293f7f4b2] = env->getMethodID(cls, "getEOPTidalCorrection", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEarthOrientationAngleFunction_784463606954bfa7] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getEarthOrientationAngleFunction_3e34b3a99275c31a] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_4a023417c19b9473] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_f07e9d6f5265aad9] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_784463606954bfa7] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_8903ace4b49f0e54] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_784463606954bfa7] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_8903ace4b49f0e54] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getLoveNumbers_a9df4cfa6ee57f12] = env->getMethodID(cls, "getLoveNumbers", "()Lorg/orekit/utils/LoveNumbers;");
          mids$[mid_getMeanObliquityFunction_a972ac0ab6da9ec1] = env->getMethodID(cls, "getMeanObliquityFunction", "()Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getMeanObliquityFunction_a61297b447dbba8e] = env->getMethodID(cls, "getMeanObliquityFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getNominalTidalDisplacement_a53a7513ecedada2] = env->getMethodID(cls, "getNominalTidalDisplacement", "()[D");
          mids$[mid_getNutationArguments_57a5edd5dc7498d8] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationArguments_c364e89eb2d3ab86] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationCorrectionConverter_960af55dff8aba2e] = env->getMethodID(cls, "getNutationCorrectionConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationCorrectionConverter_7010f229a93dbb70] = env->getMethodID(cls, "getNutationCorrectionConverter", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationFunction_b02468de716866b4] = env->getMethodID(cls, "getNutationFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationFunction_a94f012293f7f4b2] = env->getMethodID(cls, "getNutationFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationReferenceEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getNutationReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNutationReferenceEpoch_8de65d6ed0f5ceba] = env->getMethodID(cls, "getNutationReferenceEpoch", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOceanPoleTide_0a7ff33fcbeaa3c8] = env->getMethodID(cls, "getOceanPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPermanentTide_557b8123390d8d0c] = env->getMethodID(cls, "getPermanentTide", "()D");
          mids$[mid_getPrecessionFunction_b02468de716866b4] = env->getMethodID(cls, "getPrecessionFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPrecessionFunction_a94f012293f7f4b2] = env->getMethodID(cls, "getPrecessionFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getSolidPoleTide_0a7ff33fcbeaa3c8] = env->getMethodID(cls, "getSolidPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_400994325d6e2733] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_400994325d6e2733] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTideFrequencyDependenceFunction_35cfab1ad1c0cc40] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTideFrequencyDependenceFunction_6f9a6c351b205bd8] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_b02468de716866b4] = env->getMethodID(cls, "getXYSpXY2Function", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_a94f012293f7f4b2] = env->getMethodID(cls, "getXYSpXY2Function", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_valueOf_63ad83029409cd4f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/IERSConventions;");
          mids$[mid_values_a7ec554e9bd0f016] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getNutationArguments_fe8e5b508ab40d8c] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_d8b69ba2f66d7675] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_d8b69ba2f66d7675] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_loadLoveNumbers_b1eecaa531085753] = env->getMethodID(cls, "loadLoveNumbers", "(Ljava/lang/String;)Lorg/orekit/utils/LoveNumbers;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IERS_1996 = new IERSConventions(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2003 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2010 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/utils/IERSConventions;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_b884068a2c99f6ca], a0.this$));
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_afadb93117a91cf2], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_c40527712cc30fd1], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_b02468de716866b4]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_a94f012293f7f4b2], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_784463606954bfa7], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_3e34b3a99275c31a], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_4a023417c19b9473], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_f07e9d6f5265aad9], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_784463606954bfa7], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_8903ace4b49f0e54], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_784463606954bfa7], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_8903ace4b49f0e54], a0.this$, a1.this$));
      }

      ::org::orekit::utils::LoveNumbers IERSConventions::getLoveNumbers() const
      {
        return ::org::orekit::utils::LoveNumbers(env->callObjectMethod(this$, mids$[mid_getLoveNumbers_a9df4cfa6ee57f12]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction() const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_a972ac0ab6da9ec1]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_a61297b447dbba8e], a0.this$));
      }

      JArray< jdouble > IERSConventions::getNominalTidalDisplacement() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNominalTidalDisplacement_a53a7513ecedada2]));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_57a5edd5dc7498d8], a0.this$));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_c364e89eb2d3ab86], a0.this$, a1.this$));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter() const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_960af55dff8aba2e]));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_7010f229a93dbb70], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_b02468de716866b4]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_a94f012293f7f4b2], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_8de65d6ed0f5ceba], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getOceanPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getOceanPoleTide_0a7ff33fcbeaa3c8], a0.this$));
      }

      jdouble IERSConventions::getPermanentTide() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPermanentTide_557b8123390d8d0c]);
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_b02468de716866b4]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_a94f012293f7f4b2], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getSolidPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getSolidPoleTide_0a7ff33fcbeaa3c8], a0.this$));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionDiurnal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_400994325d6e2733]));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionZonal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_400994325d6e2733]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_35cfab1ad1c0cc40], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_6f9a6c351b205bd8], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_b02468de716866b4]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_a94f012293f7f4b2], a0.this$));
      }

      IERSConventions IERSConventions::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return IERSConventions(env->callStaticObjectMethod(cls, mids$[mid_valueOf_63ad83029409cd4f], a0.this$));
      }

      JArray< IERSConventions > IERSConventions::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< IERSConventions >(env->callStaticObjectMethod(cls, mids$[mid_values_a7ec554e9bd0f016]));
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
      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_IERSConventions_values(PyTypeObject *type);
      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data);
      static PyGetSetDef t_IERSConventions__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions, eOPTidalCorrection),
        DECLARE_GET_FIELD(t_IERSConventions, loveNumbers),
        DECLARE_GET_FIELD(t_IERSConventions, meanObliquityFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nominalTidalDisplacement),
        DECLARE_GET_FIELD(t_IERSConventions, nutationCorrectionConverter),
        DECLARE_GET_FIELD(t_IERSConventions, nutationFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nutationReferenceEpoch),
        DECLARE_GET_FIELD(t_IERSConventions, permanentTide),
        DECLARE_GET_FIELD(t_IERSConventions, precessionFunction),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionDiurnal),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionZonal),
        DECLARE_GET_FIELD(t_IERSConventions, xYSpXY2Function),
        DECLARE_GET_FIELD(t_IERSConventions, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions__methods_[] = {
        DECLARE_METHOD(t_IERSConventions, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, evaluateTC, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEOPTidalCorrection, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEarthOrientationAngleFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGASTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTRateFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getLoveNumbers, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getMeanObliquityFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNominalTidalDisplacement, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationArguments, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationCorrectionConverter, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationReferenceEpoch, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getOceanPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getPermanentTide, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getPrecessionFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getSolidPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionDiurnal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionZonal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTideFrequencyDependenceFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getXYSpXY2Function, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions)[] = {
        { Py_tp_methods, t_IERSConventions__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(IERSConventions, t_IERSConventions, IERSConventions);
      PyObject *t_IERSConventions::wrap_Object(const IERSConventions& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions), &PY_TYPE_DEF(IERSConventions), module, "IERSConventions", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "NutationCorrectionConverter", make_descriptor(&PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter)));
      }

      void t_IERSConventions::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "class_", make_descriptor(IERSConventions::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "wrapfn_", make_descriptor(t_IERSConventions::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "boxfn_", make_descriptor(boxObject));
        env->getClass(IERSConventions::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_1996", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2003", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2010", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2010)));
      }

      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions::initializeClass, 1)))
          return NULL;
        return t_IERSConventions::wrap_Object(IERSConventions(((t_IERSConventions *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateTC", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getEOPTidalCorrection());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEOPTidalCorrection(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPTidalCorrection", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEarthOrientationAngleFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1, a2));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGASTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTRateFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self)
      {
        ::org::orekit::utils::LoveNumbers result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanObliquityFunction());
            return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanObliquityFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMeanObliquityFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getNominalTidalDisplacement());
        return result.wrap();
      }

      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0, a1));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationArguments", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationCorrectionConverter());
            return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationCorrectionConverter(a0));
              return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationCorrectionConverter", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationReferenceEpoch(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationReferenceEpoch", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getOceanPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getOceanPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrecessionFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrecessionFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrecessionFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSolidPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSolidPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0, a1));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTideFrequencyDependenceFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getXYSpXY2Function());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXYSpXY2Function(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getXYSpXY2Function", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        IERSConventions result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::IERSConventions::valueOf(a0));
          return t_IERSConventions::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_IERSConventions_values(PyTypeObject *type)
      {
        JArray< IERSConventions > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::IERSConventions::values());
        return JArray<jobject>(result.this$).wrap(t_IERSConventions::wrap_jobject);
      }
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPTidalCorrection());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::LoveNumbers value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeScalarFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanObliquityFunction());
        return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getNominalTidalDisplacement());
        return value.wrap();
      }

      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationCorrectionConverter());
        return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationReferenceEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrecessionFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getXYSpXY2Function());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *RotationXmlTokenBuilder::class$ = NULL;
            jmethodID *RotationXmlTokenBuilder::mids$ = NULL;
            bool RotationXmlTokenBuilder::live$ = false;

            jclass RotationXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_5a8e94497b45a4c0] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RotationXmlTokenBuilder::RotationXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::java::util::List RotationXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_5a8e94497b45a4c0], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RotationXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RotationXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RotationXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RotationXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RotationXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RotationXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RotationXmlTokenBuilder, t_RotationXmlTokenBuilder, RotationXmlTokenBuilder);

            void t_RotationXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RotationXmlTokenBuilder), &PY_TYPE_DEF(RotationXmlTokenBuilder), module, "RotationXmlTokenBuilder", 0);
            }

            void t_RotationXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "class_", make_descriptor(RotationXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "wrapfn_", make_descriptor(t_RotationXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RotationXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RotationXmlTokenBuilder::wrap_Object(RotationXmlTokenBuilder(((t_RotationXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RotationXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RotationXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RotationXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem::class$ = NULL;
            jmethodID *LeastSquaresProblem::mids$ = NULL;
            bool LeastSquaresProblem::live$ = false;

            jclass LeastSquaresProblem::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem");

                mids$ = new jmethodID[max_mid];
                mids$[mid_evaluate_45332b266cdd66d4] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getObservationSize_412668abc8d889e9] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_412668abc8d889e9] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_75d50d73180655b4] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresProblem::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_45332b266cdd66d4], a0.this$));
            }

            jint LeastSquaresProblem::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_412668abc8d889e9]);
            }

            jint LeastSquaresProblem::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_412668abc8d889e9]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_75d50d73180655b4]));
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
            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem)[] = {
              { Py_tp_methods, t_LeastSquaresProblem__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::OptimizationProblem),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem, t_LeastSquaresProblem, LeastSquaresProblem);

            void t_LeastSquaresProblem::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem), &PY_TYPE_DEF(LeastSquaresProblem), module, "LeastSquaresProblem", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "Evaluation", make_descriptor(&PY_TYPE_DEF(LeastSquaresProblem$Evaluation)));
            }

            void t_LeastSquaresProblem::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "class_", make_descriptor(LeastSquaresProblem::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "wrapfn_", make_descriptor(t_LeastSquaresProblem::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem::wrap_Object(LeastSquaresProblem(((t_LeastSquaresProblem *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1241::class$ = NULL;
              jmethodID *Rtcm1241::mids$ = NULL;
              bool Rtcm1241::live$ = false;

              jclass Rtcm1241::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_fca910fb352c04ac] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1241::Rtcm1241(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_fca910fb352c04ac, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args);
              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data);
              static PyGetSetDef t_Rtcm1241__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1241, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1241__methods_[] = {
                DECLARE_METHOD(t_Rtcm1241, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1241)[] = {
                { Py_tp_methods, t_Rtcm1241__methods_ },
                { Py_tp_init, (void *) t_Rtcm1241_init_ },
                { Py_tp_getset, t_Rtcm1241__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1241)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1241, t_Rtcm1241, Rtcm1241);
              PyObject *t_Rtcm1241::wrap_Object(const Rtcm1241& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1241::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1241::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1241), &PY_TYPE_DEF(Rtcm1241), module, "Rtcm1241", 0);
              }

              void t_Rtcm1241::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "class_", make_descriptor(Rtcm1241::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "wrapfn_", make_descriptor(t_Rtcm1241::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1241::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1241::wrap_Object(Rtcm1241(((t_Rtcm1241 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1241::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1241 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1241(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$FrameConsumer::class$ = NULL;
            jmethodID *ParseToken$FrameConsumer::mids$ = NULL;
            bool ParseToken$FrameConsumer::live$ = false;

            jclass ParseToken$FrameConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_f55eee1236275bb1] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$FrameConsumer::accept(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_f55eee1236275bb1], a0.this$);
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
            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$FrameConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$FrameConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$FrameConsumer)[] = {
              { Py_tp_methods, t_ParseToken$FrameConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$FrameConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$FrameConsumer, t_ParseToken$FrameConsumer, ParseToken$FrameConsumer);

            void t_ParseToken$FrameConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$FrameConsumer), &PY_TYPE_DEF(ParseToken$FrameConsumer), module, "ParseToken$FrameConsumer", 0);
            }

            void t_ParseToken$FrameConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "class_", make_descriptor(ParseToken$FrameConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "wrapfn_", make_descriptor(t_ParseToken$FrameConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$FrameConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$FrameConsumer::wrap_Object(ParseToken$FrameConsumer(((t_ParseToken$FrameConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$FrameConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_08eaf415db10314f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getL_70a207fcbc031df2] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_70a207fcbc031df2] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "POSITIVITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eaf415db10314f, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_70a207fcbc031df2]));
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
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *LocalizedOptimFormats::class$ = NULL;
      jmethodID *LocalizedOptimFormats::mids$ = NULL;
      bool LocalizedOptimFormats::live$ = false;
      LocalizedOptimFormats *LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::INVALID_IMPLEMENTATION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::NO_FEASIBLE_SOLUTION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TRUST_REGION_STEP_FAILED = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNBOUNDED_SOLUTION = NULL;

      jclass LocalizedOptimFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/LocalizedOptimFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_4d7190db543ebdfe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/LocalizedOptimFormats;");
          mids$[mid_values_504f2b9e4d58f26e] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/LocalizedOptimFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQUAL_VERTICES_IN_SIMPLEX = new LocalizedOptimFormats(env->getStaticObjectField(cls, "EQUAL_VERTICES_IN_SIMPLEX", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          INVALID_IMPLEMENTATION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "INVALID_IMPLEMENTATION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          NO_FEASIBLE_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "NO_FEASIBLE_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          SIMPLEX_NEED_ONE_POINT = new LocalizedOptimFormats(env->getStaticObjectField(cls, "SIMPLEX_NEED_ONE_POINT", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_COST_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_COST_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_ORTHOGONALITY_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_ORTHOGONALITY_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TRUST_REGION_STEP_FAILED = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TRUST_REGION_STEP_FAILED", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_SOLVE_SINGULAR_PROBLEM = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNBOUNDED_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNBOUNDED_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedOptimFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String LocalizedOptimFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }

      LocalizedOptimFormats LocalizedOptimFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedOptimFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4d7190db543ebdfe], a0.this$));
      }

      JArray< LocalizedOptimFormats > LocalizedOptimFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedOptimFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_504f2b9e4d58f26e]));
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
      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self);
      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data);
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data);
      static PyGetSetDef t_LocalizedOptimFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedOptimFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedOptimFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedOptimFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedOptimFormats)[] = {
        { Py_tp_methods, t_LocalizedOptimFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedOptimFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedOptimFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedOptimFormats, t_LocalizedOptimFormats, LocalizedOptimFormats);
      PyObject *t_LocalizedOptimFormats::wrap_Object(const LocalizedOptimFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedOptimFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedOptimFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedOptimFormats), &PY_TYPE_DEF(LocalizedOptimFormats), module, "LocalizedOptimFormats", 0);
      }

      void t_LocalizedOptimFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "class_", make_descriptor(LocalizedOptimFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "wrapfn_", make_descriptor(t_LocalizedOptimFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedOptimFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "EQUAL_VERTICES_IN_SIMPLEX", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "INVALID_IMPLEMENTATION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::INVALID_IMPLEMENTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "NO_FEASIBLE_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::NO_FEASIBLE_SOLUTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "SIMPLEX_NEED_ONE_POINT", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_COST_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_ORTHOGONALITY_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TRUST_REGION_STEP_FAILED", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TRUST_REGION_STEP_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNBOUNDED_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNBOUNDED_SOLUTION)));
      }

      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedOptimFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedOptimFormats::wrap_Object(LocalizedOptimFormats(((t_LocalizedOptimFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedOptimFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedOptimFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::valueOf(a0));
          return t_LocalizedOptimFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedOptimFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedOptimFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Header::class$ = NULL;
              jmethodID *SsrIgm04Header::mids$ = NULL;
              bool SsrIgm04Header::live$ = false;

              jclass SsrIgm04Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Header::SsrIgm04Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm04Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Header)[] = {
                { Py_tp_methods, t_SsrIgm04Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Header, t_SsrIgm04Header, SsrIgm04Header);

              void t_SsrIgm04Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Header), &PY_TYPE_DEF(SsrIgm04Header), module, "SsrIgm04Header", 0);
              }

              void t_SsrIgm04Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "class_", make_descriptor(SsrIgm04Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "wrapfn_", make_descriptor(t_SsrIgm04Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Header::wrap_Object(SsrIgm04Header(((t_SsrIgm04Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Header object((jobject) NULL);

                INT_CALL(object = SsrIgm04Header());
                self->object = object;

                return 0;
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
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *MultivariateRealDistribution::class$ = NULL;
      jmethodID *MultivariateRealDistribution::mids$ = NULL;
      bool MultivariateRealDistribution::live$ = false;

      jclass MultivariateRealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/MultivariateRealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_density_86c4a0582e0747ce] = env->getMethodID(cls, "density", "([D)D");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
          mids$[mid_sample_a53a7513ecedada2] = env->getMethodID(cls, "sample", "()[D");
          mids$[mid_sample_ace8110626df0bb8] = env->getMethodID(cls, "sample", "(I)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateRealDistribution::density(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_86c4a0582e0747ce], a0.this$);
      }

      jint MultivariateRealDistribution::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      void MultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22], a0);
      }

      JArray< jdouble > MultivariateRealDistribution::sample() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_a53a7513ecedada2]));
      }

      JArray< JArray< jdouble > > MultivariateRealDistribution::sample(jint a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_ace8110626df0bb8], a0));
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
      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self);
      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args);
      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data);
      static PyGetSetDef t_MultivariateRealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_MultivariateRealDistribution, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultivariateRealDistribution__methods_[] = {
        DECLARE_METHOD(t_MultivariateRealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, density, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultivariateRealDistribution, reseedRandomGenerator, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, sample, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateRealDistribution)[] = {
        { Py_tp_methods, t_MultivariateRealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultivariateRealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateRealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateRealDistribution, t_MultivariateRealDistribution, MultivariateRealDistribution);

      void t_MultivariateRealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateRealDistribution), &PY_TYPE_DEF(MultivariateRealDistribution), module, "MultivariateRealDistribution", 0);
      }

      void t_MultivariateRealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "class_", make_descriptor(MultivariateRealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "wrapfn_", make_descriptor(t_MultivariateRealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateRealDistribution::initializeClass, 1)))
          return NULL;
        return t_MultivariateRealDistribution::wrap_Object(MultivariateRealDistribution(((t_MultivariateRealDistribution *) arg)->object.this$));
      }
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateRealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.reseedRandomGenerator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }
          break;
         case 1:
          {
            jint a0;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.sample(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sample", args);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/ModifiedFrame.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *ModifiedFrame::class$ = NULL;
          jmethodID *ModifiedFrame::mids$ = NULL;
          bool ModifiedFrame::live$ = false;

          jclass ModifiedFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/ModifiedFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e64ffb941e71df82] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/bodies/CelestialBody;Ljava/lang/String;)V");
              mids$[mid_getCenterName_3cffd47377eca18a] = env->getMethodID(cls, "getCenterName", "()Ljava/lang/String;");
              mids$[mid_getRefFrame_31bca1b16d563f2b] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedFrame::ModifiedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::bodies::CelestialBody & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_e64ffb941e71df82, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::String ModifiedFrame::getCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCenterName_3cffd47377eca18a]));
          }

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame ModifiedFrame::getRefFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_getRefFrame_31bca1b16d563f2b]));
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
          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data);
          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data);
          static PyGetSetDef t_ModifiedFrame__fields_[] = {
            DECLARE_GET_FIELD(t_ModifiedFrame, centerName),
            DECLARE_GET_FIELD(t_ModifiedFrame, refFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ModifiedFrame__methods_[] = {
            DECLARE_METHOD(t_ModifiedFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, getCenterName, METH_NOARGS),
            DECLARE_METHOD(t_ModifiedFrame, getRefFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedFrame)[] = {
            { Py_tp_methods, t_ModifiedFrame__methods_ },
            { Py_tp_init, (void *) t_ModifiedFrame_init_ },
            { Py_tp_getset, t_ModifiedFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedFrame)[] = {
            &PY_TYPE_DEF(::org::orekit::frames::Frame),
            NULL
          };

          DEFINE_TYPE(ModifiedFrame, t_ModifiedFrame, ModifiedFrame);

          void t_ModifiedFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedFrame), &PY_TYPE_DEF(ModifiedFrame), module, "ModifiedFrame", 0);
          }

          void t_ModifiedFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "class_", make_descriptor(ModifiedFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "wrapfn_", make_descriptor(t_ModifiedFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedFrame::initializeClass, 1)))
              return NULL;
            return t_ModifiedFrame::wrap_Object(ModifiedFrame(((t_ModifiedFrame *) arg)->object.this$));
          }
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ModifiedFrame object((jobject) NULL);

            if (!parseArgs(args, "kKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &a3))
            {
              INT_CALL(object = ModifiedFrame(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterName());
            return j2p(result);
          }

          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterName());
            return j2p(value);
          }

          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame value((jobject) NULL);
            OBJ_CALL(value = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation::class$ = NULL;
      jmethodID *HelmertTransformation::mids$ = NULL;
      bool HelmertTransformation::live$ = false;

      jclass HelmertTransformation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_426b0859dba72583] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDD)V");
          mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStaticTransform_7265a2d9c3b9a38a] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_68fd5b9bb9184393] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HelmertTransformation::HelmertTransformation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_426b0859dba72583, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)) {}

      ::org::orekit::time::AbsoluteDate HelmertTransformation::getEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::frames::StaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_7265a2d9c3b9a38a], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_68fd5b9bb9184393], a0.this$));
      }

      ::org::orekit::frames::Transform HelmertTransformation::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform HelmertTransformation::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self);
      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data);
      static PyGetSetDef t_HelmertTransformation__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation, epoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, getEpoch, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation)[] = {
        { Py_tp_methods, t_HelmertTransformation__methods_ },
        { Py_tp_init, (void *) t_HelmertTransformation_init_ },
        { Py_tp_getset, t_HelmertTransformation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation, t_HelmertTransformation, HelmertTransformation);

      void t_HelmertTransformation::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation), &PY_TYPE_DEF(HelmertTransformation), module, "HelmertTransformation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "Predefined", make_descriptor(&PY_TYPE_DEF(HelmertTransformation$Predefined)));
      }

      void t_HelmertTransformation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "class_", make_descriptor(HelmertTransformation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "wrapfn_", make_descriptor(t_HelmertTransformation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation::wrap_Object(HelmertTransformation(((t_HelmertTransformation *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds)
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
        HelmertTransformation object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
        {
          INT_CALL(object = HelmertTransformation(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args)
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

      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
