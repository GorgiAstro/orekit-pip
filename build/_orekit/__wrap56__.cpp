#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorBuilder::class$ = NULL;
        jmethodID *PropagatorBuilder::mids$ = NULL;
        bool PropagatorBuilder::live$ = false;

        jclass PropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_708cc138373fff03] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_563e3d88178dadb8] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_c325492395d89b24] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_cfb822366e8ab425] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_cfb822366e8ab425] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_69b47a274eed440d] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel PropagatorBuilder::buildLeastSquaresModel(const JArray< PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_708cc138373fff03], a0.this$));
        }

        PropagatorBuilder PropagatorBuilder::copy() const
        {
          return PropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_563e3d88178dadb8]));
        }

        ::org::orekit::frames::Frame PropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::time::AbsoluteDate PropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_c325492395d89b24]));
        }

        jdouble PropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::orbits::OrbitType PropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_cfb822366e8ab425]));
        }

        ::org::orekit::orbits::PositionAngleType PropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_cfb822366e8ab425]));
        }

        JArray< jdouble > PropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_25e1757a36c4dde2]));
        }

        void PropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_69b47a274eed440d], a0.this$);
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
        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args);
        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data);
        static PyGetSetDef t_PropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_PropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_PropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_PropagatorBuilder, buildPropagator, METH_O),
          DECLARE_METHOD(t_PropagatorBuilder, copy, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, resetOrbit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorBuilder)[] = {
          { Py_tp_methods, t_PropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorBuilder, t_PropagatorBuilder, PropagatorBuilder);

        void t_PropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorBuilder), &PY_TYPE_DEF(PropagatorBuilder), module, "PropagatorBuilder", 0);
        }

        void t_PropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "class_", make_descriptor(PropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "wrapfn_", make_descriptor(t_PropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PropagatorBuilder::wrap_Object(PropagatorBuilder(((t_PropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args)
        {
          JArray< PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildLeastSquaresModel", args);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildPropagator", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self)
        {
          PropagatorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_PropagatorBuilder::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/FieldHermiteInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldHermiteInterpolator::class$ = NULL;
        jmethodID *FieldHermiteInterpolator::mids$ = NULL;
        bool FieldHermiteInterpolator::live$ = false;

        jclass FieldHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_6d1221f65c086b79] = env->getMethodID(cls, "addSamplePoint", "(Lorg/hipparchus/FieldElement;[[Lorg/hipparchus/FieldElement;)V");
            mids$[mid_derivatives_2a6f6a5cd7898ad5] = env->getMethodID(cls, "derivatives", "(Lorg/hipparchus/FieldElement;I)[[Lorg/hipparchus/FieldElement;");
            mids$[mid_value_72605d4cec9f064c] = env->getMethodID(cls, "value", "(Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldHermiteInterpolator::FieldHermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void FieldHermiteInterpolator::addSamplePoint(const ::org::hipparchus::FieldElement & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_6d1221f65c086b79], a0.this$, a1.this$);
        }

        JArray< JArray< ::org::hipparchus::FieldElement > > FieldHermiteInterpolator::derivatives(const ::org::hipparchus::FieldElement & a0, jint a1) const
        {
          return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_derivatives_2a6f6a5cd7898ad5], a0.this$, a1));
        }

        JArray< ::org::hipparchus::FieldElement > FieldHermiteInterpolator::value(const ::org::hipparchus::FieldElement & a0) const
        {
          return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_value_72605d4cec9f064c], a0.this$));
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
        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args);
        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data);
        static PyGetSetDef t_FieldHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldHermiteInterpolator)[] = {
          { Py_tp_methods, t_FieldHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_FieldHermiteInterpolator_init_ },
          { Py_tp_getset, t_FieldHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldHermiteInterpolator, t_FieldHermiteInterpolator, FieldHermiteInterpolator);
        PyObject *t_FieldHermiteInterpolator::wrap_Object(const FieldHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldHermiteInterpolator), &PY_TYPE_DEF(FieldHermiteInterpolator), module, "FieldHermiteInterpolator", 0);
        }

        void t_FieldHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "class_", make_descriptor(FieldHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldHermiteInterpolator::wrap_Object(FieldHermiteInterpolator(((t_FieldHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          FieldHermiteInterpolator object((jobject) NULL);

          INT_CALL(object = FieldHermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "K[[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/PythonEncounterLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonEncounterLOF::class$ = NULL;
        jmethodID *PythonEncounterLOF::mids$ = NULL;
        bool PythonEncounterLOF::live$ = false;

        jclass PythonEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_dac7b66b757e9da0] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOther_180fb117720acb76] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_bf95090cc5e2a8d4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_8851faa33644affd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEncounterLOF::PythonEncounterLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEncounterLOF::pythonExtension(jlong a0) const
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self);
        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEncounterLOF)[] = {
          { Py_tp_methods, t_PythonEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonEncounterLOF_init_ },
          { Py_tp_getset, t_PythonEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEncounterLOF, t_PythonEncounterLOF, PythonEncounterLOF);

        void t_PythonEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEncounterLOF), &PY_TYPE_DEF(PythonEncounterLOF), module, "PythonEncounterLOF", 1);
        }

        void t_PythonEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "class_", make_descriptor(PythonEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "wrapfn_", make_descriptor(t_PythonEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;", (void *) t_PythonEncounterLOF_getFieldOther2 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonEncounterLOF_getName3 },
            { "getOther", "()Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonEncounterLOF_getOther4 },
            { "pythonDecRef", "()V", (void *) t_PythonEncounterLOF_pythonDecRef5 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonEncounterLOF_rotationFromInertial6 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonEncounterLOF_rotationFromInertial7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonEncounterLOF::wrap_Object(PythonEncounterLOF(((t_PythonEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          PythonEncounterLOF object((jobject) NULL);

          INT_CALL(object = PythonEncounterLOF());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldOther", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &value))
          {
            throwTypeError("getFieldOther", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOther", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
          {
            throwTypeError("getOther", result);
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

        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDetermination::class$ = NULL;
              jmethodID *OrbitDetermination::mids$ = NULL;
              bool OrbitDetermination::live$ = false;

              jclass OrbitDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActualOdSpan_b74f83833fdad017] = env->getMethodID(cls, "getActualOdSpan", "()D");
                  mids$[mid_getConfidence_b74f83833fdad017] = env->getMethodID(cls, "getConfidence", "()D");
                  mids$[mid_getConsiderN_55546ef6a647f39b] = env->getMethodID(cls, "getConsiderN", "()I");
                  mids$[mid_getConsiderParameters_e62d3bb06d56d7e3] = env->getMethodID(cls, "getConsiderParameters", "()Ljava/util/List;");
                  mids$[mid_getDataTypes_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                  mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEpochEigenInt_b74f83833fdad017] = env->getMethodID(cls, "getEpochEigenInt", "()D");
                  mids$[mid_getEpochEigenMaj_b74f83833fdad017] = env->getMethodID(cls, "getEpochEigenMaj", "()D");
                  mids$[mid_getEpochEigenMin_b74f83833fdad017] = env->getMethodID(cls, "getEpochEigenMin", "()D");
                  mids$[mid_getGdop_b74f83833fdad017] = env->getMethodID(cls, "getGdop", "()D");
                  mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMaxPredictedEigenMaj_b74f83833fdad017] = env->getMethodID(cls, "getMaxPredictedEigenMaj", "()D");
                  mids$[mid_getMaximumObsGap_b74f83833fdad017] = env->getMethodID(cls, "getMaximumObsGap", "()D");
                  mids$[mid_getMethod_aef044bb3e906fce] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");
                  mids$[mid_getMinPredictedEigenMin_b74f83833fdad017] = env->getMethodID(cls, "getMinPredictedEigenMin", "()D");
                  mids$[mid_getObsAvailable_55546ef6a647f39b] = env->getMethodID(cls, "getObsAvailable", "()I");
                  mids$[mid_getObsUsed_55546ef6a647f39b] = env->getMethodID(cls, "getObsUsed", "()I");
                  mids$[mid_getPrevId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRecommendedOdSpan_b74f83833fdad017] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                  mids$[mid_getSedr_b74f83833fdad017] = env->getMethodID(cls, "getSedr", "()D");
                  mids$[mid_getSensors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
                  mids$[mid_getSensorsN_55546ef6a647f39b] = env->getMethodID(cls, "getSensorsN", "()I");
                  mids$[mid_getSolveN_55546ef6a647f39b] = env->getMethodID(cls, "getSolveN", "()I");
                  mids$[mid_getSolveStates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSolveStates", "()Ljava/util/List;");
                  mids$[mid_getTimeSinceFirstObservation_b74f83833fdad017] = env->getMethodID(cls, "getTimeSinceFirstObservation", "()D");
                  mids$[mid_getTimeSinceLastObservation_b74f83833fdad017] = env->getMethodID(cls, "getTimeSinceLastObservation", "()D");
                  mids$[mid_getTracksAvailable_55546ef6a647f39b] = env->getMethodID(cls, "getTracksAvailable", "()I");
                  mids$[mid_getTracksUsed_55546ef6a647f39b] = env->getMethodID(cls, "getTracksUsed", "()I");
                  mids$[mid_getWeightedRms_b74f83833fdad017] = env->getMethodID(cls, "getWeightedRms", "()D");
                  mids$[mid_setActualOdSpan_8ba9fe7a847cecad] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                  mids$[mid_setConfidence_8ba9fe7a847cecad] = env->getMethodID(cls, "setConfidence", "(D)V");
                  mids$[mid_setConsiderN_44ed599e93e8a30c] = env->getMethodID(cls, "setConsiderN", "(I)V");
                  mids$[mid_setConsiderParameters_0e7c3032c7c93ed3] = env->getMethodID(cls, "setConsiderParameters", "(Ljava/util/List;)V");
                  mids$[mid_setDataTypes_0e7c3032c7c93ed3] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                  mids$[mid_setEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setEpochEigenInt_8ba9fe7a847cecad] = env->getMethodID(cls, "setEpochEigenInt", "(D)V");
                  mids$[mid_setEpochEigenMaj_8ba9fe7a847cecad] = env->getMethodID(cls, "setEpochEigenMaj", "(D)V");
                  mids$[mid_setEpochEigenMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setEpochEigenMin", "(D)V");
                  mids$[mid_setGdop_8ba9fe7a847cecad] = env->getMethodID(cls, "setGdop", "(D)V");
                  mids$[mid_setId_734b91ac30d5f9b4] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxPredictedEigenMaj_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxPredictedEigenMaj", "(D)V");
                  mids$[mid_setMaximumObsGap_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaximumObsGap", "(D)V");
                  mids$[mid_setMethod_7ad1dbbf5ca0e1f0] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/OdMethodFacade;)V");
                  mids$[mid_setMinPredictedEigenMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setMinPredictedEigenMin", "(D)V");
                  mids$[mid_setObsAvailable_44ed599e93e8a30c] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                  mids$[mid_setObsUsed_44ed599e93e8a30c] = env->getMethodID(cls, "setObsUsed", "(I)V");
                  mids$[mid_setPrevId_734b91ac30d5f9b4] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRecommendedOdSpan_8ba9fe7a847cecad] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                  mids$[mid_setSedr_8ba9fe7a847cecad] = env->getMethodID(cls, "setSedr", "(D)V");
                  mids$[mid_setSensors_0e7c3032c7c93ed3] = env->getMethodID(cls, "setSensors", "(Ljava/util/List;)V");
                  mids$[mid_setSensorsN_44ed599e93e8a30c] = env->getMethodID(cls, "setSensorsN", "(I)V");
                  mids$[mid_setSolveN_44ed599e93e8a30c] = env->getMethodID(cls, "setSolveN", "(I)V");
                  mids$[mid_setSolveStates_0e7c3032c7c93ed3] = env->getMethodID(cls, "setSolveStates", "(Ljava/util/List;)V");
                  mids$[mid_setTimeSinceFirstObservation_8ba9fe7a847cecad] = env->getMethodID(cls, "setTimeSinceFirstObservation", "(D)V");
                  mids$[mid_setTimeSinceLastObservation_8ba9fe7a847cecad] = env->getMethodID(cls, "setTimeSinceLastObservation", "(D)V");
                  mids$[mid_setTracksAvailable_44ed599e93e8a30c] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                  mids$[mid_setTracksUsed_44ed599e93e8a30c] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                  mids$[mid_setWeightedRms_8ba9fe7a847cecad] = env->getMethodID(cls, "setWeightedRms", "(D)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitDetermination::OrbitDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble OrbitDetermination::getActualOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_b74f83833fdad017]);
              }

              jdouble OrbitDetermination::getConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getConfidence_b74f83833fdad017]);
              }

              jint OrbitDetermination::getConsiderN() const
              {
                return env->callIntMethod(this$, mids$[mid_getConsiderN_55546ef6a647f39b]);
              }

              ::java::util::List OrbitDetermination::getConsiderParameters() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConsiderParameters_e62d3bb06d56d7e3]));
              }

              ::java::util::List OrbitDetermination::getDataTypes() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_e62d3bb06d56d7e3]));
              }

              ::org::orekit::time::AbsoluteDate OrbitDetermination::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
              }

              jdouble OrbitDetermination::getEpochEigenInt() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenInt_b74f83833fdad017]);
              }

              jdouble OrbitDetermination::getEpochEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMaj_b74f83833fdad017]);
              }

              jdouble OrbitDetermination::getEpochEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMin_b74f83833fdad017]);
              }

              jdouble OrbitDetermination::getGdop() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGdop_b74f83833fdad017]);
              }

              ::java::lang::String OrbitDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
              }

              jdouble OrbitDetermination::getMaxPredictedEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxPredictedEigenMaj_b74f83833fdad017]);
              }

              jdouble OrbitDetermination::getMaximumObsGap() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaximumObsGap_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::definitions::OdMethodFacade OrbitDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::OdMethodFacade(env->callObjectMethod(this$, mids$[mid_getMethod_aef044bb3e906fce]));
              }

              jdouble OrbitDetermination::getMinPredictedEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinPredictedEigenMin_b74f83833fdad017]);
              }

              jint OrbitDetermination::getObsAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsAvailable_55546ef6a647f39b]);
              }

              jint OrbitDetermination::getObsUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsUsed_55546ef6a647f39b]);
              }

              ::java::lang::String OrbitDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_1c1fa1e935d6cdcf]));
              }

              jdouble OrbitDetermination::getRecommendedOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_b74f83833fdad017]);
              }

              jdouble OrbitDetermination::getSedr() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSedr_b74f83833fdad017]);
              }

              ::java::util::List OrbitDetermination::getSensors() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensors_e62d3bb06d56d7e3]));
              }

              jint OrbitDetermination::getSensorsN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorsN_55546ef6a647f39b]);
              }

              jint OrbitDetermination::getSolveN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSolveN_55546ef6a647f39b]);
              }

              ::java::util::List OrbitDetermination::getSolveStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSolveStates_e62d3bb06d56d7e3]));
              }

              jdouble OrbitDetermination::getTimeSinceFirstObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceFirstObservation_b74f83833fdad017]);
              }

              jdouble OrbitDetermination::getTimeSinceLastObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceLastObservation_b74f83833fdad017]);
              }

              jint OrbitDetermination::getTracksAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksAvailable_55546ef6a647f39b]);
              }

              jint OrbitDetermination::getTracksUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksUsed_55546ef6a647f39b]);
              }

              jdouble OrbitDetermination::getWeightedRms() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWeightedRms_b74f83833fdad017]);
              }

              void OrbitDetermination::setActualOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActualOdSpan_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConfidence_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setConsiderN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderN_44ed599e93e8a30c], a0);
              }

              void OrbitDetermination::setConsiderParameters(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderParameters_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitDetermination::setDataTypes(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDataTypes_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitDetermination::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OrbitDetermination::setEpochEigenInt(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenInt_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setEpochEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMaj_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setEpochEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMin_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setGdop(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGdop_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitDetermination::setMaxPredictedEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxPredictedEigenMaj_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setMaximumObsGap(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaximumObsGap_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::OdMethodFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_7ad1dbbf5ca0e1f0], a0.this$);
              }

              void OrbitDetermination::setMinPredictedEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinPredictedEigenMin_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setObsAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsAvailable_44ed599e93e8a30c], a0);
              }

              void OrbitDetermination::setObsUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsUsed_44ed599e93e8a30c], a0);
              }

              void OrbitDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitDetermination::setRecommendedOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setSedr(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSedr_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setSensors(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensors_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitDetermination::setSensorsN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorsN_44ed599e93e8a30c], a0);
              }

              void OrbitDetermination::setSolveN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveN_44ed599e93e8a30c], a0);
              }

              void OrbitDetermination::setSolveStates(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveStates_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitDetermination::setTimeSinceFirstObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceFirstObservation_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setTimeSinceLastObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceLastObservation_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::setTracksAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksAvailable_44ed599e93e8a30c], a0);
              }

              void OrbitDetermination::setTracksUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksUsed_44ed599e93e8a30c], a0);
              }

              void OrbitDetermination::setWeightedRms(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWeightedRms_8ba9fe7a847cecad], a0);
              }

              void OrbitDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args);
              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitDetermination, actualOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, confidence),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerParameters),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, dataTypes),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epoch),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenInt),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, gdop),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, id),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maxPredictedEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maximumObsGap),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, method),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, minPredictedEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, prevId),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, recommendedOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sedr),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensors),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensorsN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveStates),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceFirstObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceLastObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, weightedRms),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDetermination__methods_[] = {
                DECLARE_METHOD(t_OrbitDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, getActualOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderParameters, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getDataTypes, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenInt, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getGdop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaxPredictedEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaximumObsGap, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMinPredictedEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getRecommendedOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSedr, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensors, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensorsN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveStates, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceFirstObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceLastObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getWeightedRms, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, setActualOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConfidence, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderParameters, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setDataTypes, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpoch, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenInt, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setGdop, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaxPredictedEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaximumObsGap, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMinPredictedEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setRecommendedOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSedr, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensors, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensorsN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveStates, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceFirstObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceLastObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setWeightedRms, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDetermination)[] = {
                { Py_tp_methods, t_OrbitDetermination__methods_ },
                { Py_tp_init, (void *) t_OrbitDetermination_init_ },
                { Py_tp_getset, t_OrbitDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitDetermination, t_OrbitDetermination, OrbitDetermination);

              void t_OrbitDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDetermination), &PY_TYPE_DEF(OrbitDetermination), module, "OrbitDetermination", 0);
              }

              void t_OrbitDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "class_", make_descriptor(OrbitDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "wrapfn_", make_descriptor(t_OrbitDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDetermination::initializeClass, 1)))
                  return NULL;
                return t_OrbitDetermination::wrap_Object(OrbitDetermination(((t_OrbitDetermination *) arg)->object.this$));
              }
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds)
              {
                OrbitDetermination object((jobject) NULL);

                INT_CALL(object = OrbitDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getConsiderN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGdop());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSedr());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSensorsN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSolveN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setActualOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActualOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setConsiderN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setConsiderParameters(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderParameters", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDataTypes(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDataTypes", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenInt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenInt", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGdop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGdop", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxPredictedEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxPredictedEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaximumObsGap(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaximumObsGap", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinPredictedEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinPredictedEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRecommendedOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRecommendedOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSedr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSensors(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensors", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSensorsN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorsN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSolveN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSolveStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveStates", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceFirstObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceFirstObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceLastObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceLastObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWeightedRms(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWeightedRms", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setActualOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actualOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "confidence", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getConsiderN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setConsiderN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setConsiderParameters(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerParameters", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDataTypes(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dataTypes", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epoch", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenInt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenInt", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGdop());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGdop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gdop", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxPredictedEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxPredictedEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaximumObsGap(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maximumObsGap", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinPredictedEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minPredictedEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRecommendedOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "recommendedOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSedr());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSedr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sedr", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSensors(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensors", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSensorsN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSensorsN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorsN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSolveN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSolveN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSolveStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveStates", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceFirstObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceFirstObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceLastObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceLastObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWeightedRms(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "weightedRms", arg);
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
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolatingFunction::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolatingFunction::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolatingFunction::live$ = false;

        jclass PiecewiseBicubicSplineInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3f7c4bf9d0d94a6c] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_isValidPoint_cd8da52a7e84190c] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_c6408fdce2cc6c1a] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolatingFunction::PiecewiseBicubicSplineInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f7c4bf9d0d94a6c, a0.this$, a1.this$, a2.this$)) {}

        jboolean PiecewiseBicubicSplineInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_cd8da52a7e84190c], a0, a1);
        }

        jdouble PiecewiseBicubicSplineInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement PiecewiseBicubicSplineInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_c6408fdce2cc6c1a], a0.this$, a1.this$));
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
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolatingFunction, t_PiecewiseBicubicSplineInterpolatingFunction, PiecewiseBicubicSplineInterpolatingFunction);

        void t_PiecewiseBicubicSplineInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolatingFunction), module, "PiecewiseBicubicSplineInterpolatingFunction", 0);
        }

        void t_PiecewiseBicubicSplineInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "class_", make_descriptor(PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(PiecewiseBicubicSplineInterpolatingFunction(((t_PiecewiseBicubicSplineInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          PiecewiseBicubicSplineInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = PiecewiseBicubicSplineInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenTesseralLinear::class$ = NULL;
              jmethodID *HansenTesseralLinear::mids$ = NULL;
              bool HansenTesseralLinear::live$ = false;

              jclass HansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a5f63d2987dd5c80] = env->getMethodID(cls, "<init>", "(IIIII)V");
                  mids$[mid_computeInitValues_b5167f35b2521627] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_98e10c261c066ee7] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_98e10c261c066ee7] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenTesseralLinear::HansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a5f63d2987dd5c80, a0, a1, a2, a3, a4)) {}

              void HansenTesseralLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_b5167f35b2521627], a0, a1, a2);
              }

              jdouble HansenTesseralLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_98e10c261c066ee7], a0, a1);
              }

              jdouble HansenTesseralLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_98e10c261c066ee7], a0, a1);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args);

              static PyMethodDef t_HansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_HansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenTesseralLinear)[] = {
                { Py_tp_methods, t_HansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_HansenTesseralLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenTesseralLinear, t_HansenTesseralLinear, HansenTesseralLinear);

              void t_HansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenTesseralLinear), &PY_TYPE_DEF(HansenTesseralLinear), module, "HansenTesseralLinear", 0);
              }

              void t_HansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "class_", make_descriptor(HansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "wrapfn_", make_descriptor(t_HansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenTesseralLinear::wrap_Object(HansenTesseralLinear(((t_HansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                HansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = HansenTesseralLinear(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *InterpolationMethod::class$ = NULL;
              jmethodID *InterpolationMethod::mids$ = NULL;
              bool InterpolationMethod::live$ = false;
              InterpolationMethod *InterpolationMethod::HERMITE = NULL;
              InterpolationMethod *InterpolationMethod::LAGRANGE = NULL;
              InterpolationMethod *InterpolationMethod::LINEAR = NULL;
              InterpolationMethod *InterpolationMethod::PROPAGATE = NULL;

              jclass InterpolationMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_358239e30135182b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_values_9511acb775fdc84b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  HERMITE = new InterpolationMethod(env->getStaticObjectField(cls, "HERMITE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LAGRANGE = new InterpolationMethod(env->getStaticObjectField(cls, "LAGRANGE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LINEAR = new InterpolationMethod(env->getStaticObjectField(cls, "LINEAR", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  PROPAGATE = new InterpolationMethod(env->getStaticObjectField(cls, "PROPAGATE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              InterpolationMethod InterpolationMethod::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InterpolationMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_358239e30135182b], a0.this$));
              }

              JArray< InterpolationMethod > InterpolationMethod::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InterpolationMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_9511acb775fdc84b]));
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
            namespace oem {
              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args);
              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InterpolationMethod_values(PyTypeObject *type);
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data);
              static PyGetSetDef t_InterpolationMethod__fields_[] = {
                DECLARE_GET_FIELD(t_InterpolationMethod, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InterpolationMethod__methods_[] = {
                DECLARE_METHOD(t_InterpolationMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, of_, METH_VARARGS),
                DECLARE_METHOD(t_InterpolationMethod, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InterpolationMethod)[] = {
                { Py_tp_methods, t_InterpolationMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InterpolationMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InterpolationMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InterpolationMethod, t_InterpolationMethod, InterpolationMethod);
              PyObject *t_InterpolationMethod::wrap_Object(const InterpolationMethod& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InterpolationMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InterpolationMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(InterpolationMethod), &PY_TYPE_DEF(InterpolationMethod), module, "InterpolationMethod", 0);
              }

              void t_InterpolationMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "class_", make_descriptor(InterpolationMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "wrapfn_", make_descriptor(t_InterpolationMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(InterpolationMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "HERMITE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::HERMITE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LAGRANGE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LAGRANGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LINEAR", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LINEAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "PROPAGATE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::PROPAGATE)));
              }

              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InterpolationMethod::initializeClass, 1)))
                  return NULL;
                return t_InterpolationMethod::wrap_Object(InterpolationMethod(((t_InterpolationMethod *) arg)->object.this$));
              }
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InterpolationMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InterpolationMethod result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::valueOf(a0));
                  return t_InterpolationMethod::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InterpolationMethod_values(PyTypeObject *type)
              {
                JArray< InterpolationMethod > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::values());
                return JArray<jobject>(result.this$).wrap(t_InterpolationMethod::wrap_jobject);
              }
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data)
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
#include "org/orekit/gnss/metric/parser/PythonEncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonEncodedMessage::class$ = NULL;
          jmethodID *PythonEncodedMessage::mids$ = NULL;
          bool PythonEncodedMessage::live$ = false;

          jclass PythonEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_f4947a88f79e0725] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEncodedMessage::PythonEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonEncodedMessage::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self);
          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args);
          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0);
          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEncodedMessage)[] = {
            { Py_tp_methods, t_PythonEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonEncodedMessage_init_ },
            { Py_tp_getset, t_PythonEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEncodedMessage, t_PythonEncodedMessage, PythonEncodedMessage);

          void t_PythonEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEncodedMessage), &PY_TYPE_DEF(PythonEncodedMessage), module, "PythonEncodedMessage", 1);
          }

          void t_PythonEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "class_", make_descriptor(PythonEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "wrapfn_", make_descriptor(t_PythonEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "extractBits", "(I)J", (void *) t_PythonEncodedMessage_extractBits0 },
              { "pythonDecRef", "()V", (void *) t_PythonEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonEncodedMessage::wrap_Object(PythonEncodedMessage(((t_PythonEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args)
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

          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jlong value;
            PyObject *result = PyObject_CallMethod(obj, "extractBits", "i", (int) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "J", &value))
            {
              throwTypeError("extractBits", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jlong) 0;
          }

          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/RtcmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmData::class$ = NULL;
            jmethodID *RtcmData::mids$ = NULL;
            bool RtcmData::live$ = false;

            jclass RtcmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmData::RtcmData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_RtcmData__methods_[] = {
              DECLARE_METHOD(t_RtcmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmData)[] = {
              { Py_tp_methods, t_RtcmData__methods_ },
              { Py_tp_init, (void *) t_RtcmData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RtcmData, t_RtcmData, RtcmData);

            void t_RtcmData::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmData), &PY_TYPE_DEF(RtcmData), module, "RtcmData", 0);
            }

            void t_RtcmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "class_", make_descriptor(RtcmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "wrapfn_", make_descriptor(t_RtcmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmData::initializeClass, 1)))
                return NULL;
              return t_RtcmData::wrap_Object(RtcmData(((t_RtcmData *) arg)->object.this$));
            }
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds)
            {
              RtcmData object((jobject) NULL);

              INT_CALL(object = RtcmData());
              self->object = object;

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
                mids$[mid_process_eec7c7c24b3ba62d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;)Z");
                mids$[mid_valueOf_36a07c246270fa11] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");
                mids$[mid_values_c33c87e134eeeb5d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");

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
              return env->callBooleanMethod(this$, mids$[mid_process_eec7c7c24b3ba62d], a0.this$, a1.this$, a2.this$);
            }

            CommonMetadataKey CommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_36a07c246270fa11], a0.this$));
            }

            JArray< CommonMetadataKey > CommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c33c87e134eeeb5d]));
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
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4fbea8fa1cddeb2d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_closestPoint_e47e722c2bd142aa] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_contains_82d995e738c9e027] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_cb550ea413e10fd7] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)D");
              mids$[mid_distance_f75a63670951da8a] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_fromDirection_487b9a2b26b45ed4] = env->getStaticMethodID(cls, "fromDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getAbscissa_f75a63670951da8a] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDirection_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOrigin_8b724f8b4fdad1a2] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_e47e722c2bd142aa] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_7d2e2ef084bda0c9] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Z");
              mids$[mid_pointAt_498f52cd8e5a7072] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_reset_b651b5ef96594ce8] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revert_26296f26a05c4026] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_toSpace_c015d3ffc61ff7f9] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_e21381ba36e4ea13] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_b2178ad896cd2546] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_b1d2ab531c8e2a03] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_wholeLine_1ad4fd5d973aaf15] = env->getMethodID(cls, "wholeLine", "()Lorg/hipparchus/geometry/euclidean/threed/SubLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fbea8fa1cddeb2d, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::closestPoint(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_e47e722c2bd142aa], a0.this$));
          }

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_82d995e738c9e027], a0.this$);
          }

          jdouble Line::distance(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_cb550ea413e10fd7], a0.this$);
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f75a63670951da8a], a0.this$);
          }

          Line Line::fromDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return Line(env->callStaticObjectMethod(cls, mids$[mid_fromDirection_487b9a2b26b45ed4], a0.this$, a1.this$, a2));
          }

          jdouble Line::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAbscissa_f75a63670951da8a], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_8b724f8b4fdad1a2]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_e47e722c2bd142aa], a0.this$));
          }

          jboolean Line::isSimilarTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_7d2e2ef084bda0c9], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_498f52cd8e5a7072], a0));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_b651b5ef96594ce8], a0.this$, a1.this$);
          }

          Line Line::revert() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_revert_26296f26a05c4026]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_c015d3ffc61ff7f9], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_e21381ba36e4ea13], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_b2178ad896cd2546], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_b1d2ab531c8e2a03], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubLine Line::wholeLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubLine(env->callObjectMethod(this$, mids$[mid_wholeLine_1ad4fd5d973aaf15]));
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
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_distance(t_Line *self, PyObject *args);
          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg);
          static PyObject *t_Line_getDirection(t_Line *self);
          static PyObject *t_Line_getOrigin(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revert(t_Line *self);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_wholeLine(t_Line *self);
          static PyObject *t_Line_get__direction(t_Line *self, void *data);
          static PyObject *t_Line_get__origin(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GET_FIELD(t_Line, direction),
            DECLARE_GET_FIELD(t_Line, origin),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, closestPoint, METH_O),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, distance, METH_VARARGS),
            DECLARE_METHOD(t_Line, fromDirection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, getAbscissa, METH_O),
            DECLARE_METHOD(t_Line, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Line, pointAt, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revert, METH_NOARGS),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, wholeLine, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Line(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Line::fromDirection(a0, a1, a2));
              return t_Line::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "fromDirection", args);
            return NULL;
          }

          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAbscissa(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", arg);
            return NULL;
          }

          static PyObject *t_Line_getDirection(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getOrigin(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.pointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revert(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_wholeLine(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_get__direction(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__origin(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatellitePhaseModifier::class$ = NULL;
          jmethodID *ShapiroInterSatellitePhaseModifier::mids$ = NULL;
          bool ShapiroInterSatellitePhaseModifier::live$ = false;

          jclass ShapiroInterSatellitePhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatellitePhaseModifier::ShapiroInterSatellitePhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::java::util::List ShapiroInterSatellitePhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void ShapiroInterSatellitePhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatellitePhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatellitePhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatellitePhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatellitePhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatellitePhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatellitePhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatellitePhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatellitePhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatellitePhaseModifier, t_ShapiroInterSatellitePhaseModifier, ShapiroInterSatellitePhaseModifier);

          void t_ShapiroInterSatellitePhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatellitePhaseModifier), &PY_TYPE_DEF(ShapiroInterSatellitePhaseModifier), module, "ShapiroInterSatellitePhaseModifier", 0);
          }

          void t_ShapiroInterSatellitePhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "class_", make_descriptor(ShapiroInterSatellitePhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatellitePhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatellitePhaseModifier::wrap_Object(ShapiroInterSatellitePhaseModifier(((t_ShapiroInterSatellitePhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatellitePhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatellitePhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data)
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
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *LimitAngle::class$ = NULL;
          jmethodID *LimitAngle::mids$ = NULL;
          bool LimitAngle::live$ = false;

          jclass LimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/LimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3aa41fceed3d883d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;ZD)V");
              mids$[mid_copySelf_cf577dee4ce85ae5] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_emptyHyperplane_791f9e0d98b5141b] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_getLocation_633b3f99682591ac] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_getOffset_f0dd8cb59ea09794] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getReverse_cf577dee4ce85ae5] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_9ab94ac1dc23b105] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_2214f7ad5b6ca158] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_sameOrientationAs_806ecfbca1984226] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_791f9e0d98b5141b] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_wholeSpace_7d64add151265ba7] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LimitAngle::LimitAngle(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3aa41fceed3d883d, a0.this$, a1, a2)) {}

          LimitAngle LimitAngle::copySelf() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_copySelf_cf577dee4ce85ae5]));
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_791f9e0d98b5141b]));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point LimitAngle::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_getLocation_633b3f99682591ac]));
          }

          jdouble LimitAngle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_f0dd8cb59ea09794], a0.this$);
          }

          LimitAngle LimitAngle::getReverse() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_getReverse_cf577dee4ce85ae5]));
          }

          jdouble LimitAngle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
          }

          jboolean LimitAngle::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_9ab94ac1dc23b105]);
          }

          ::org::hipparchus::geometry::Point LimitAngle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_2214f7ad5b6ca158], a0.this$));
          }

          jboolean LimitAngle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_806ecfbca1984226], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_791f9e0d98b5141b]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet LimitAngle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_7d64add151265ba7]));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self);
          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self);
          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self);
          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self);
          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data);
          static PyGetSetDef t_LimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_LimitAngle, direct),
            DECLARE_GET_FIELD(t_LimitAngle, location),
            DECLARE_GET_FIELD(t_LimitAngle, reverse),
            DECLARE_GET_FIELD(t_LimitAngle, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LimitAngle__methods_[] = {
            DECLARE_METHOD(t_LimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getOffset, METH_O),
            DECLARE_METHOD(t_LimitAngle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, project, METH_O),
            DECLARE_METHOD(t_LimitAngle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_LimitAngle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LimitAngle)[] = {
            { Py_tp_methods, t_LimitAngle__methods_ },
            { Py_tp_init, (void *) t_LimitAngle_init_ },
            { Py_tp_getset, t_LimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LimitAngle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LimitAngle, t_LimitAngle, LimitAngle);

          void t_LimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(LimitAngle), &PY_TYPE_DEF(LimitAngle), module, "LimitAngle", 0);
          }

          void t_LimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "class_", make_descriptor(LimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "wrapfn_", make_descriptor(t_LimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LimitAngle::initializeClass, 1)))
              return NULL;
            return t_LimitAngle::wrap_Object(LimitAngle(((t_LimitAngle *) arg)->object.this$));
          }
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            LimitAngle object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LimitAngle(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data)
          {
            LimitAngle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_LimitAngle::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LocalizedStatFormats::class$ = NULL;
      jmethodID *LocalizedStatFormats::mids$ = NULL;
      bool LocalizedStatFormats::live$ = false;
      LocalizedStatFormats *LocalizedStatFormats::COVARIANCE_MATRIX = NULL;
      LocalizedStatFormats *LocalizedStatFormats::ILLEGAL_STATE_PCA = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NO_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TIES_ARE_NOT_ALLOWED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TOO_MANY_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = NULL;

      jclass LocalizedStatFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LocalizedStatFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_d041baffb5a2012d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/LocalizedStatFormats;");
          mids$[mid_values_478ea5484309000f] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/LocalizedStatFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COVARIANCE_MATRIX = new LocalizedStatFormats(env->getStaticObjectField(cls, "COVARIANCE_MATRIX", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          ILLEGAL_STATE_PCA = new LocalizedStatFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE_PCA", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INSUFFICIENT_DATA_FOR_T_STATISTIC = new LocalizedStatFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA_FOR_T_STATISTIC", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INVALID_REGRESSION_OBSERVATION = new LocalizedStatFormats(env->getStaticObjectField(cls, "INVALID_REGRESSION_OBSERVATION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_REGRESSION = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_REGRESSION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_SUPPORTED_NAN_STRATEGY = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_NAN_STRATEGY", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NO_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NO_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_CONFIDENCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_QUANTILE_VALUE = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_QUANTILE_VALUE", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUND_SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TIES_ARE_NOT_ALLOWED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TIES_ARE_NOT_ALLOWED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TOO_MANY_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "TOO_MANY_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_CATEGORIES_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_CATEGORIES_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedStatFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String LocalizedStatFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
      }

      LocalizedStatFormats LocalizedStatFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedStatFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d041baffb5a2012d], a0.this$));
      }

      JArray< LocalizedStatFormats > LocalizedStatFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedStatFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_478ea5484309000f]));
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
      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args);
      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self);
      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data);
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data);
      static PyGetSetDef t_LocalizedStatFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedStatFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedStatFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedStatFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedStatFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedStatFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedStatFormats)[] = {
        { Py_tp_methods, t_LocalizedStatFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedStatFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedStatFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedStatFormats, t_LocalizedStatFormats, LocalizedStatFormats);
      PyObject *t_LocalizedStatFormats::wrap_Object(const LocalizedStatFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedStatFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedStatFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedStatFormats), &PY_TYPE_DEF(LocalizedStatFormats), module, "LocalizedStatFormats", 0);
      }

      void t_LocalizedStatFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "class_", make_descriptor(LocalizedStatFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "wrapfn_", make_descriptor(t_LocalizedStatFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedStatFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "COVARIANCE_MATRIX", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::COVARIANCE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "ILLEGAL_STATE_PCA", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::ILLEGAL_STATE_PCA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INSUFFICIENT_DATA_FOR_T_STATISTIC", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INVALID_REGRESSION_OBSERVATION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_REGRESSION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_SUPPORTED_NAN_STRATEGY", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NO_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NO_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_QUANTILE_VALUE", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TIES_ARE_NOT_ALLOWED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TIES_ARE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TOO_MANY_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TOO_MANY_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_CATEGORIES_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED)));
      }

      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedStatFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedStatFormats::wrap_Object(LocalizedStatFormats(((t_LocalizedStatFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedStatFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedStatFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::valueOf(a0));
          return t_LocalizedStatFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedStatFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedStatFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data)
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
#include "org/orekit/propagation/events/PythonFieldEventDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEventDetector::class$ = NULL;
        jmethodID *PythonFieldEventDetector::mids$ = NULL;
        bool PythonFieldEventDetector::live$ = false;

        jclass PythonFieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_3449c57ae1fbceff] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_d0b60c59a7966d59] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_81520b552cb3fa26] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEventDetector::PythonFieldEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldEventDetector::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args);
        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self);
        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data);
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data);
        static PyGetSetDef t_PythonFieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventDetector)[] = {
          { Py_tp_methods, t_PythonFieldEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEventDetector_init_ },
          { Py_tp_getset, t_PythonFieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEventDetector, t_PythonFieldEventDetector, PythonFieldEventDetector);
        PyObject *t_PythonFieldEventDetector::wrap_Object(const PythonFieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEventDetector), &PY_TYPE_DEF(PythonFieldEventDetector), module, "PythonFieldEventDetector", 1);
        }

        void t_PythonFieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "class_", make_descriptor(PythonFieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "wrapfn_", make_descriptor(t_PythonFieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;", (void *) t_PythonFieldEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;", (void *) t_PythonFieldEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonFieldEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEventDetector::wrap_Object(PythonFieldEventDetector(((t_PythonFieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEventDetector object((jobject) NULL);

          INT_CALL(object = PythonFieldEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getThreshold", result);
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

        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data)
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
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonCovarianceMatrixProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonCovarianceMatrixProvider::mids$ = NULL;
        bool PythonCovarianceMatrixProvider::live$ = false;

        jclass PythonCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getInitialCovarianceMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_18b28191c1378912] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonCovarianceMatrixProvider::PythonCovarianceMatrixProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonCovarianceMatrixProvider::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self);
        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonCovarianceMatrixProvider, t_PythonCovarianceMatrixProvider, PythonCovarianceMatrixProvider);

        void t_PythonCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonCovarianceMatrixProvider), &PY_TYPE_DEF(PythonCovarianceMatrixProvider), module, "PythonCovarianceMatrixProvider", 1);
        }

        void t_PythonCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "class_", make_descriptor(PythonCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0 },
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1 },
            { "pythonDecRef", "()V", (void *) t_PythonCovarianceMatrixProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonCovarianceMatrixProvider::wrap_Object(PythonCovarianceMatrixProvider(((t_PythonCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonCovarianceMatrixProvider object((jobject) NULL);

          INT_CALL(object = PythonCovarianceMatrixProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInitialCovarianceMatrix", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getInitialCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data)
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
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBDGIMMessage::class$ = NULL;
          jmethodID *IonosphereBDGIMMessage::mids$ = NULL;
          bool IonosphereBDGIMMessage::live$ = false;

          jclass IonosphereBDGIMMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBDGIMMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2f7855eb8fb85f32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_25e1757a36c4dde2] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_setAlphaI_d5322b8b512aeb26] = env->getMethodID(cls, "setAlphaI", "(ID)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBDGIMMessage::IonosphereBDGIMMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_2f7855eb8fb85f32, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereBDGIMMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_25e1757a36c4dde2]));
          }

          void IonosphereBDGIMMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_d5322b8b512aeb26], a0, a1);
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
          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self);
          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args);
          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data);
          static PyGetSetDef t_IonosphereBDGIMMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereBDGIMMessage, alpha),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBDGIMMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBDGIMMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, setAlphaI, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBDGIMMessage)[] = {
            { Py_tp_methods, t_IonosphereBDGIMMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBDGIMMessage_init_ },
            { Py_tp_getset, t_IonosphereBDGIMMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBDGIMMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBDGIMMessage, t_IonosphereBDGIMMessage, IonosphereBDGIMMessage);

          void t_IonosphereBDGIMMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBDGIMMessage), &PY_TYPE_DEF(IonosphereBDGIMMessage), module, "IonosphereBDGIMMessage", 0);
          }

          void t_IonosphereBDGIMMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "class_", make_descriptor(IonosphereBDGIMMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "wrapfn_", make_descriptor(t_IonosphereBDGIMMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBDGIMMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBDGIMMessage::wrap_Object(IonosphereBDGIMMessage(((t_IonosphereBDGIMMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBDGIMMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBDGIMMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBDGIMMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args)
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

          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyRelativeAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyRelativeAttraction::class$ = NULL;
        jmethodID *SingleBodyRelativeAttraction::mids$ = NULL;
        bool SingleBodyRelativeAttraction::live$ = false;
        ::java::lang::String *SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyRelativeAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyRelativeAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5b078eb816ea0c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyRelativeAttraction::SingleBodyRelativeAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5b078eb816ea0c4, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        jboolean SingleBodyRelativeAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::List SingleBodyRelativeAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyRelativeAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyRelativeAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyRelativeAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyRelativeAttraction)[] = {
          { Py_tp_methods, t_SingleBodyRelativeAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyRelativeAttraction_init_ },
          { Py_tp_getset, t_SingleBodyRelativeAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyRelativeAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyRelativeAttraction, t_SingleBodyRelativeAttraction, SingleBodyRelativeAttraction);

        void t_SingleBodyRelativeAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyRelativeAttraction), &PY_TYPE_DEF(SingleBodyRelativeAttraction), module, "SingleBodyRelativeAttraction", 0);
        }

        void t_SingleBodyRelativeAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "class_", make_descriptor(SingleBodyRelativeAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "wrapfn_", make_descriptor(t_SingleBodyRelativeAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyRelativeAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyRelativeAttraction::wrap_Object(SingleBodyRelativeAttraction(((t_SingleBodyRelativeAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyRelativeAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyRelativeAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CasterRecord::class$ = NULL;
          jmethodID *CasterRecord::mids$ = NULL;
          bool CasterRecord::live$ = false;

          jclass CasterRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CasterRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canReceiveNMEA_9ab94ac1dc23b105] = env->getMethodID(cls, "canReceiveNMEA", "()Z");
              mids$[mid_getCountry_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFallbackHostOrIPAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFallbackHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getFallbackPort_55546ef6a647f39b] = env->getMethodID(cls, "getFallbackPort", "()I");
              mids$[mid_getHostOrIPAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getLatitude_b74f83833fdad017] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_b74f83833fdad017] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getOperator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getPort_55546ef6a647f39b] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getRecordType_3f153b7c7459a9e2] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CasterRecord::CasterRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          jboolean CasterRecord::canReceiveNMEA() const
          {
            return env->callBooleanMethod(this$, mids$[mid_canReceiveNMEA_9ab94ac1dc23b105]);
          }

          ::java::lang::String CasterRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String CasterRecord::getFallbackHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFallbackHostOrIPAddress_1c1fa1e935d6cdcf]));
          }

          jint CasterRecord::getFallbackPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getFallbackPort_55546ef6a647f39b]);
          }

          ::java::lang::String CasterRecord::getHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHostOrIPAddress_1c1fa1e935d6cdcf]));
          }

          jdouble CasterRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_b74f83833fdad017]);
          }

          jdouble CasterRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_b74f83833fdad017]);
          }

          ::java::lang::String CasterRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_1c1fa1e935d6cdcf]));
          }

          jint CasterRecord::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_55546ef6a647f39b]);
          }

          ::org::orekit::gnss::metric::ntrip::RecordType CasterRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_3f153b7c7459a9e2]));
          }

          ::java::lang::String CasterRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_1c1fa1e935d6cdcf]));
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
          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args);
          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self);
          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data);
          static PyGetSetDef t_CasterRecord__fields_[] = {
            DECLARE_GET_FIELD(t_CasterRecord, country),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackHostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackPort),
            DECLARE_GET_FIELD(t_CasterRecord, hostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, latitude),
            DECLARE_GET_FIELD(t_CasterRecord, longitude),
            DECLARE_GET_FIELD(t_CasterRecord, operator),
            DECLARE_GET_FIELD(t_CasterRecord, port),
            DECLARE_GET_FIELD(t_CasterRecord, recordType),
            DECLARE_GET_FIELD(t_CasterRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CasterRecord__methods_[] = {
            DECLARE_METHOD(t_CasterRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, canReceiveNMEA, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_CasterRecord, getSourceIdentifier, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CasterRecord)[] = {
            { Py_tp_methods, t_CasterRecord__methods_ },
            { Py_tp_init, (void *) t_CasterRecord_init_ },
            { Py_tp_getset, t_CasterRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CasterRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(CasterRecord, t_CasterRecord, CasterRecord);

          void t_CasterRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(CasterRecord), &PY_TYPE_DEF(CasterRecord), module, "CasterRecord", 0);
          }

          void t_CasterRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "class_", make_descriptor(CasterRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "wrapfn_", make_descriptor(t_CasterRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CasterRecord::initializeClass, 1)))
              return NULL;
            return t_CasterRecord::wrap_Object(CasterRecord(((t_CasterRecord *) arg)->object.this$));
          }
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CasterRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            CasterRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = CasterRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.canReceiveNMEA());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFallbackHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFallbackPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(CasterRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFallbackHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFallbackPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/orekit/attitudes/Inertia.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Inertia::class$ = NULL;
      jmethodID *Inertia::mids$ = NULL;
      bool Inertia::live$ = false;

      jclass Inertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Inertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_939384575c8392d2] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis2_939384575c8392d2] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis3_939384575c8392d2] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_momentum_f21507e4850a184e] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_swap12_5cd6be00a4c2be15] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap13_5cd6be00a4c2be15] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap23_5cd6be00a4c2be15] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/Inertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_939384575c8392d2]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_939384575c8392d2]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_939384575c8392d2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Inertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_momentum_f21507e4850a184e], a0.this$));
      }

      Inertia Inertia::swap12() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap12_5cd6be00a4c2be15]));
      }

      Inertia Inertia::swap13() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap13_5cd6be00a4c2be15]));
      }

      Inertia Inertia::swap23() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap23_5cd6be00a4c2be15]));
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
      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self);
      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg);
      static PyObject *t_Inertia_swap12(t_Inertia *self);
      static PyObject *t_Inertia_swap13(t_Inertia *self);
      static PyObject *t_Inertia_swap23(t_Inertia *self);
      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data);
      static PyGetSetDef t_Inertia__fields_[] = {
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis3),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Inertia__methods_[] = {
        DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, momentum, METH_O),
        DECLARE_METHOD(t_Inertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
        { Py_tp_methods, t_Inertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Inertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Inertia, t_Inertia, Inertia);

      void t_Inertia::install(PyObject *module)
      {
        installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
      }

      void t_Inertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
          return NULL;
        return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
      }
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Inertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_Inertia_swap12(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap13(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap23(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmData::class$ = NULL;
              jmethodID *OcmData::mids$ = NULL;
              bool OcmData::live$ = false;

              jclass OcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_212b49b143e3a5f2] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getCovarianceBlocks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getOrbitDeterminationBlock_0d61eb8b4530c63e] = env->getMethodID(cls, "getOrbitDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;");
                  mids$[mid_getPerturbationsBlock_94e33f1e620c7eca] = env->getMethodID(cls, "getPerturbationsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;");
                  mids$[mid_getPhysicBlock_78a098c62113a866] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;");
                  mids$[mid_getTrajectoryBlocks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getTrajectoryBlocks", "()Ljava/util/List;");
                  mids$[mid_getUserDefinedBlock_757fcfae3141e23d] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmData::OcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a4, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a5, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_212b49b143e3a5f2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              ::java::util::List OcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_e62d3bb06d56d7e3]));
              }

              ::java::util::List OcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination OcmData::getOrbitDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination(env->callObjectMethod(this$, mids$[mid_getOrbitDeterminationBlock_0d61eb8b4530c63e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations OcmData::getPerturbationsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations(env->callObjectMethod(this$, mids$[mid_getPerturbationsBlock_94e33f1e620c7eca]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties OcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_78a098c62113a866]));
              }

              ::java::util::List OcmData::getTrajectoryBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryBlocks_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_757fcfae3141e23d]));
              }

              void OcmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self);
              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self);
              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg);
              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data);
              static PyGetSetDef t_OcmData__fields_[] = {
                DECLARE_GET_FIELD(t_OcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_OcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_OcmData, orbitDeterminationBlock),
                DECLARE_GET_FIELD(t_OcmData, perturbationsBlock),
                DECLARE_GET_FIELD(t_OcmData, physicBlock),
                DECLARE_GET_FIELD(t_OcmData, trajectoryBlocks),
                DECLARE_GET_FIELD(t_OcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmData__methods_[] = {
                DECLARE_METHOD(t_OcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getOrbitDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPerturbationsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getTrajectoryBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmData)[] = {
                { Py_tp_methods, t_OcmData__methods_ },
                { Py_tp_init, (void *) t_OcmData_init_ },
                { Py_tp_getset, t_OcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmData, t_OcmData, OcmData);

              void t_OcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmData), &PY_TYPE_DEF(OcmData), module, "OcmData", 0);
              }

              void t_OcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "class_", make_descriptor(OcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "wrapfn_", make_descriptor(t_OcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmData::initializeClass, 1)))
                  return NULL;
                return t_OcmData::wrap_Object(OcmData(((t_OcmData *) arg)->object.this$));
              }
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a6((jobject) NULL);
                OcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = OcmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovarianceHistory));
              }

              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuverHistory));
              }

              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations result((jobject) NULL);
                OBJ_CALL(result = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations value((jobject) NULL);
                OBJ_CALL(value = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *PolynomialCurveFitter::class$ = NULL;
      jmethodID *PolynomialCurveFitter::mids$ = NULL;
      bool PolynomialCurveFitter::live$ = false;

      jclass PolynomialCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/PolynomialCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_f152e35f67d67b00] = env->getStaticMethodID(cls, "create", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withMaxIterations_f152e35f67d67b00] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withStartPoint_04894880c4c032ca] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_getProblem_067ae4e9e4e5b47a] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialCurveFitter PolynomialCurveFitter::create(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_f152e35f67d67b00], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withMaxIterations(jint a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_f152e35f67d67b00], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_04894880c4c032ca], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg);

      static PyMethodDef t_PolynomialCurveFitter__methods_[] = {
        DECLARE_METHOD(t_PolynomialCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_PolynomialCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialCurveFitter)[] = {
        { Py_tp_methods, t_PolynomialCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(PolynomialCurveFitter, t_PolynomialCurveFitter, PolynomialCurveFitter);

      void t_PolynomialCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialCurveFitter), &PY_TYPE_DEF(PolynomialCurveFitter), module, "PolynomialCurveFitter", 0);
      }

      void t_PolynomialCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "class_", make_descriptor(PolynomialCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "wrapfn_", make_descriptor(t_PolynomialCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialCurveFitter::initializeClass, 1)))
          return NULL;
        return t_PolynomialCurveFitter::wrap_Object(PolynomialCurveFitter(((t_PolynomialCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::PolynomialCurveFitter::create(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalStateException::class$ = NULL;
    jmethodID *IllegalStateException::mids$ = NULL;
    bool IllegalStateException::live$ = false;

    jclass IllegalStateException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalStateException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalStateException::IllegalStateException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalStateException__methods_[] = {
      DECLARE_METHOD(t_IllegalStateException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalStateException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalStateException)[] = {
      { Py_tp_methods, t_IllegalStateException__methods_ },
      { Py_tp_init, (void *) t_IllegalStateException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalStateException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalStateException, t_IllegalStateException, IllegalStateException);

    void t_IllegalStateException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalStateException), &PY_TYPE_DEF(IllegalStateException), module, "IllegalStateException", 0);
    }

    void t_IllegalStateException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "class_", make_descriptor(IllegalStateException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "wrapfn_", make_descriptor(t_IllegalStateException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalStateException::initializeClass, 1)))
        return NULL;
      return t_IllegalStateException::wrap_Object(IllegalStateException(((t_IllegalStateException *) arg)->object.this$));
    }
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalStateException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalStateException object((jobject) NULL);

          INT_CALL(object = IllegalStateException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalStateException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/IntegratedEphemeris.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *IntegratedEphemeris::class$ = NULL;
        jmethodID *IntegratedEphemeris::mids$ = NULL;
        bool IntegratedEphemeris::live$ = false;

        jclass IntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/IntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7645711d5bf14241] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/integration/StateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/DenseOutputModel;Lorg/orekit/utils/DoubleArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_updateAdditionalStates_c3c52b1257139045] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_basicPropagate_4f0008999861ca31] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IntegratedEphemeris::IntegratedEphemeris(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::propagation::integration::StateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::DenseOutputModel & a5, const ::org::orekit::utils::DoubleArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_7645711d5bf14241, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame IntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::propagation::SpacecraftState IntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_9d155cc8314c99cf]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates IntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
        }

        void IntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
        }

        void IntegratedEphemeris::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
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
        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args);
        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data);
        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data);
        static PyGetSetDef t_IntegratedEphemeris__fields_[] = {
          DECLARE_SET_FIELD(t_IntegratedEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, minDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_IntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, setAttitudeProvider, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntegratedEphemeris)[] = {
          { Py_tp_methods, t_IntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_IntegratedEphemeris_init_ },
          { Py_tp_getset, t_IntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(IntegratedEphemeris, t_IntegratedEphemeris, IntegratedEphemeris);

        void t_IntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(IntegratedEphemeris), &PY_TYPE_DEF(IntegratedEphemeris), module, "IntegratedEphemeris", 0);
        }

        void t_IntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "class_", make_descriptor(IntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "wrapfn_", make_descriptor(t_IntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_IntegratedEphemeris::wrap_Object(IntegratedEphemeris(((t_IntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::propagation::integration::StateMapper a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::DenseOutputModel a5((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a6((jobject) NULL);
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          IntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "kkkkKkkK[s[I", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::integration::StateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::DenseOutputModel::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &a6, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = IntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data)
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

        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_8858ebfd9ea146a6] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_d372780ad8cf1667] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator;");
            mids$[mid_decomposer_e572bf813f850f1e] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_bb3499bbd6c7287b] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_df68e9f16746f4b1] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder::SemiAnalyticalUnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_8858ebfd9ea146a6], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator SemiAnalyticalUnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_d372780ad8cf1667]));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_e572bf813f850f1e], a0.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_bb3499bbd6c7287b], a0.this$, a1.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_df68e9f16746f4b1], a0.this$));
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, SemiAnalyticalUnscentedKalmanEstimatorBuilder);

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimatorBuilder), module, "SemiAnalyticalUnscentedKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalUnscentedKalmanEstimatorBuilder(((t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalUnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalUnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldStateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldStateMapper::class$ = NULL;
        jmethodID *PythonFieldStateMapper::mids$ = NULL;
        bool PythonFieldStateMapper::live$ = false;

        jclass PythonFieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5494f95aec0e2a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_1b9bfe1085235c3b] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapStateToArray_81a15f6754980fa1] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldStateMapper::PythonFieldStateMapper(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::FieldStateMapper(env->newObject(initializeClass, &mids$, mid_init$_b5494f95aec0e2a7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonFieldStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldStateMapper::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args);
        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self);
        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data);
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data);
        static PyGetSetDef t_PythonFieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, self),
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonFieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldStateMapper)[] = {
          { Py_tp_methods, t_PythonFieldStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonFieldStateMapper_init_ },
          { Py_tp_getset, t_PythonFieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldStateMapper),
          NULL
        };

        DEFINE_TYPE(PythonFieldStateMapper, t_PythonFieldStateMapper, PythonFieldStateMapper);
        PyObject *t_PythonFieldStateMapper::wrap_Object(const PythonFieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldStateMapper), &PY_TYPE_DEF(PythonFieldStateMapper), module, "PythonFieldStateMapper", 1);
        }

        void t_PythonFieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "class_", make_descriptor(PythonFieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "wrapfn_", make_descriptor(t_PythonFieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonFieldStateMapper::wrap_Object(PythonFieldStateMapper(((t_PythonFieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonFieldStateMapper object((jobject) NULL);

          if (!parseArgs(args, "KKKKkk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonFieldStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
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

        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data)
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
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Circle::class$ = NULL;
          jmethodID *Circle::mids$ = NULL;
          bool Circle::live$ = false;

          jclass Circle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Circle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4f2529905f184526] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_9ef25d5086c2cda0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;D)V");
              mids$[mid_copySelf_394360bc4f7bf853] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_emptyHyperplane_3feccee894d91ef8] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_getArc_5777b9aa47be61c3] = env->getMethodID(cls, "getArc", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getInsideArc_adcd7363100f1777] = env->getMethodID(cls, "getInsideArc", "(Lorg/hipparchus/geometry/spherical/twod/Circle;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getOffset_f75a63670951da8a] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getOffset_f0dd8cb59ea09794] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getPhase_f75a63670951da8a] = env->getMethodID(cls, "getPhase", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getPointAt_498f52cd8e5a7072] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPole_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPole", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getReverse_394360bc4f7bf853] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_3f3505394ef39075] = env->getStaticMethodID(cls, "getTransform", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_getXAxis_8b724f8b4fdad1a2] = env->getMethodID(cls, "getXAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getYAxis_8b724f8b4fdad1a2] = env->getMethodID(cls, "getYAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_project_2214f7ad5b6ca158] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_1844f891addbac57] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_a1fa5dae97ea5ed2] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_806ecfbca1984226] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_06f482d8ceb074a1] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toSubSpace_0524974a268eeeee] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_wholeHyperplane_3feccee894d91ef8] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_wholeSpace_bf39bb9c5825f40e] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Circle::Circle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f2529905f184526, a0.this$, a1)) {}

          Circle::Circle(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ef25d5086c2cda0, a0.this$, a1.this$, a2)) {}

          Circle Circle::copySelf() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_copySelf_394360bc4f7bf853]));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_3feccee894d91ef8]));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getArc(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getArc_5777b9aa47be61c3], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getInsideArc(const Circle & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getInsideArc_adcd7363100f1777], a0.this$));
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_f75a63670951da8a], a0.this$);
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_f0dd8cb59ea09794], a0.this$);
          }

          jdouble Circle::getPhase(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_f75a63670951da8a], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_498f52cd8e5a7072], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPole() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_8b724f8b4fdad1a2]));
          }

          Circle Circle::getReverse() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_getReverse_394360bc4f7bf853]));
          }

          jdouble Circle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Circle::getTransform(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_3f3505394ef39075], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getXAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getXAxis_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getYAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getYAxis_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::Point Circle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_2214f7ad5b6ca158], a0.this$));
          }

          void Circle::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_1844f891addbac57], a0.this$);
          }

          void Circle::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_a1fa5dae97ea5ed2]);
          }

          jboolean Circle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_806ecfbca1984226], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Circle::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_toSpace_06f482d8ceb074a1], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point Circle::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_0524974a268eeeee], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_3feccee894d91ef8]));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet Circle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_bf39bb9c5825f40e]));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Circle_copySelf(t_Circle *self);
          static PyObject *t_Circle_emptyHyperplane(t_Circle *self);
          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPole(t_Circle *self);
          static PyObject *t_Circle_getReverse(t_Circle *self);
          static PyObject *t_Circle_getTolerance(t_Circle *self);
          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_getXAxis(t_Circle *self);
          static PyObject *t_Circle_getYAxis(t_Circle *self);
          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_revertSelf(t_Circle *self);
          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_wholeHyperplane(t_Circle *self);
          static PyObject *t_Circle_wholeSpace(t_Circle *self);
          static PyObject *t_Circle_get__pole(t_Circle *self, void *data);
          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data);
          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data);
          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data);
          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data);
          static PyGetSetDef t_Circle__fields_[] = {
            DECLARE_GET_FIELD(t_Circle, pole),
            DECLARE_GET_FIELD(t_Circle, reverse),
            DECLARE_GET_FIELD(t_Circle, tolerance),
            DECLARE_GET_FIELD(t_Circle, xAxis),
            DECLARE_GET_FIELD(t_Circle, yAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Circle__methods_[] = {
            DECLARE_METHOD(t_Circle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getArc, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getInsideArc, METH_O),
            DECLARE_METHOD(t_Circle, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getPhase, METH_O),
            DECLARE_METHOD(t_Circle, getPointAt, METH_O),
            DECLARE_METHOD(t_Circle, getPole, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTransform, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, getXAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getYAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, project, METH_O),
            DECLARE_METHOD(t_Circle, reset, METH_O),
            DECLARE_METHOD(t_Circle, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Circle, toSpace, METH_O),
            DECLARE_METHOD(t_Circle, toSubSpace, METH_O),
            DECLARE_METHOD(t_Circle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Circle)[] = {
            { Py_tp_methods, t_Circle__methods_ },
            { Py_tp_init, (void *) t_Circle_init_ },
            { Py_tp_getset, t_Circle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Circle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Circle, t_Circle, Circle);

          void t_Circle::install(PyObject *module)
          {
            installType(&PY_TYPE(Circle), &PY_TYPE_DEF(Circle), module, "Circle", 0);
          }

          void t_Circle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "class_", make_descriptor(Circle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "wrapfn_", make_descriptor(t_Circle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Circle::initializeClass, 1)))
              return NULL;
            return t_Circle::wrap_Object(Circle(((t_Circle *) arg)->object.this$));
          }
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Circle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Circle(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
                jdouble a2;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Circle(a0, a1, a2));
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

          static PyObject *t_Circle_copySelf(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_emptyHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getArc(a0, a1));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getArc", args);
            return NULL;
          }

          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg)
          {
            Circle a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArg(arg, "k", Circle::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInsideArc(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInsideArc", arg);
            return NULL;
          }

          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPole(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getReverse(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_getTolerance(t_Circle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Circle::getTransform(a0));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError(type, "getTransform", arg);
            return NULL;
          }

          static PyObject *t_Circle_getXAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getYAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", arg);
            return NULL;
          }

          static PyObject *t_Circle_revertSelf(t_Circle *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSpace(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSubSpace(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_wholeHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_wholeSpace(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Circle_get__pole(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data)
          {
            Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Circle::wrap_Object(value);
          }

          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationDataSet::class$ = NULL;
          jmethodID *CombinedObservationDataSet::mids$ = NULL;
          bool CombinedObservationDataSet::live$ = false;

          jclass CombinedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5245c96f5f1b38bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/time/AbsoluteDate;DLjava/util/List;)V");
              mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getObservationData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getPrnNumber_55546ef6a647f39b] = env->getMethodID(cls, "getPrnNumber", "()I");
              mids$[mid_getRcvrClkOffset_b74f83833fdad017] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationDataSet::CombinedObservationDataSet(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5245c96f5f1b38bd, a0.this$, a1, a2.this$, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate CombinedObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
          }

          ::java::util::List CombinedObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_e62d3bb06d56d7e3]));
          }

          jint CombinedObservationDataSet::getPrnNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrnNumber_55546ef6a647f39b]);
          }

          jdouble CombinedObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_b74f83833fdad017]);
          }

          ::org::orekit::gnss::SatelliteSystem CombinedObservationDataSet::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
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
          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data);
          static PyGetSetDef t_CombinedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, date),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, prnNumber),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, satelliteSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getPrnNumber, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getSatelliteSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationDataSet)[] = {
            { Py_tp_methods, t_CombinedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationDataSet_init_ },
            { Py_tp_getset, t_CombinedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationDataSet, t_CombinedObservationDataSet, CombinedObservationDataSet);

          void t_CombinedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationDataSet), &PY_TYPE_DEF(CombinedObservationDataSet), module, "CombinedObservationDataSet", 0);
          }

          void t_CombinedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "class_", make_descriptor(CombinedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "wrapfn_", make_descriptor(t_CombinedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationDataSet::wrap_Object(CombinedObservationDataSet(((t_CombinedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "KIkDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CombinedObservationData));
          }

          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrnNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrnNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/StringWriter.h"
#include "java/lang/CharSequence.h"
#include "java/lang/StringBuffer.h"
#include "java/io/IOException.h"
#include "java/io/StringWriter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringWriter::class$ = NULL;
    jmethodID *StringWriter::mids$ = NULL;
    bool StringWriter::live$ = false;

    jclass StringWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_append_2fd64e854460fa61] = env->getMethodID(cls, "append", "(C)Ljava/io/StringWriter;");
        mids$[mid_append_75e29451e1add07a] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;");
        mids$[mid_append_8b1c860531051f82] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_getBuffer_9ddc431ab9a0d12b] = env->getMethodID(cls, "getBuffer", "()Ljava/lang/StringBuffer;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_write_734b91ac30d5f9b4] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d23ba6c655e17478] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_eb74d6dc93e0751e] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringWriter::StringWriter() : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    StringWriter::StringWriter(jint a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    StringWriter StringWriter::append(jchar a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_2fd64e854460fa61], a0));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_75e29451e1add07a], a0.this$));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_8b1c860531051f82], a0.this$, a1, a2));
    }

    void StringWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void StringWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    ::java::lang::StringBuffer StringWriter::getBuffer() const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_getBuffer_9ddc431ab9a0d12b]));
    }

    ::java::lang::String StringWriter::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    void StringWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_734b91ac30d5f9b4], a0.this$);
    }

    void StringWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void StringWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d23ba6c655e17478], a0.this$, a1, a2);
    }

    void StringWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_eb74d6dc93e0751e], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self);
    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data);
    static PyGetSetDef t_StringWriter__fields_[] = {
      DECLARE_GET_FIELD(t_StringWriter, buffer),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StringWriter__methods_[] = {
      DECLARE_METHOD(t_StringWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, getBuffer, METH_NOARGS),
      DECLARE_METHOD(t_StringWriter, toString, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringWriter)[] = {
      { Py_tp_methods, t_StringWriter__methods_ },
      { Py_tp_init, (void *) t_StringWriter_init_ },
      { Py_tp_getset, t_StringWriter__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(StringWriter, t_StringWriter, StringWriter);

    void t_StringWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(StringWriter), &PY_TYPE_DEF(StringWriter), module, "StringWriter", 0);
    }

    void t_StringWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "class_", make_descriptor(StringWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "wrapfn_", make_descriptor(t_StringWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringWriter::initializeClass, 1)))
        return NULL;
      return t_StringWriter::wrap_Object(StringWriter(((t_StringWriter *) arg)->object.this$));
    }
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringWriter object((jobject) NULL);

          INT_CALL(object = StringWriter());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          StringWriter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringWriter(a0));
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

    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self)
    {
      ::java::lang::StringBuffer result((jobject) NULL);
      OBJ_CALL(result = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(result);
    }

    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data)
    {
      ::java::lang::StringBuffer value((jobject) NULL);
      OBJ_CALL(value = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Euler::class$ = NULL;
              jmethodID *Euler::mids$ = NULL;
              bool Euler::live$ = false;

              jclass Euler::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Euler");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_c60ad1d207bc8e06] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_513511eeab1350d5] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getRotationAngles_25e1757a36c4dde2] = env->getMethodID(cls, "getRotationAngles", "()[D");
                  mids$[mid_getRotationRates_25e1757a36c4dde2] = env->getMethodID(cls, "getRotationRates", "()[D");
                  mids$[mid_hasAngles_9ab94ac1dc23b105] = env->getMethodID(cls, "hasAngles", "()Z");
                  mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_isSpacecraftBodyRate_9ab94ac1dc23b105] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_9ab94ac1dc23b105] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setEulerRotSeq_062f1951e591952f] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInRotationAngles_fcb96c98de6fad04] = env->getMethodID(cls, "setInRotationAngles", "(Z)V");
                  mids$[mid_setIndexedRotationAngle_d5322b8b512aeb26] = env->getMethodID(cls, "setIndexedRotationAngle", "(ID)V");
                  mids$[mid_setIndexedRotationRate_d5322b8b512aeb26] = env->getMethodID(cls, "setIndexedRotationRate", "(ID)V");
                  mids$[mid_setLabeledRotationAngle_aff7cdf8651ba042] = env->getMethodID(cls, "setLabeledRotationAngle", "(CD)V");
                  mids$[mid_setLabeledRotationRate_aff7cdf8651ba042] = env->getMethodID(cls, "setLabeledRotationRate", "(CD)V");
                  mids$[mid_setRateFrameIsA_fcb96c98de6fad04] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Euler::Euler() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints Euler::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c60ad1d207bc8e06]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder Euler::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_513511eeab1350d5]));
              }

              JArray< jdouble > Euler::getRotationAngles() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationAngles_25e1757a36c4dde2]));
              }

              JArray< jdouble > Euler::getRotationRates() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationRates_25e1757a36c4dde2]));
              }

              jboolean Euler::hasAngles() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasAngles_9ab94ac1dc23b105]);
              }

              jboolean Euler::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
              }

              jboolean Euler::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_9ab94ac1dc23b105]);
              }

              jboolean Euler::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_9ab94ac1dc23b105]);
              }

              void Euler::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_062f1951e591952f], a0.this$);
              }

              void Euler::setInRotationAngles(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInRotationAngles_fcb96c98de6fad04], a0);
              }

              void Euler::setIndexedRotationAngle(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationAngle_d5322b8b512aeb26], a0, a1);
              }

              void Euler::setIndexedRotationRate(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationRate_d5322b8b512aeb26], a0, a1);
              }

              void Euler::setLabeledRotationAngle(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationAngle_aff7cdf8651ba042], a0, a1);
              }

              void Euler::setLabeledRotationRate(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationRate_aff7cdf8651ba042], a0, a1);
              }

              void Euler::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_fcb96c98de6fad04], a0);
              }

              void Euler::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Euler_getEndpoints(t_Euler *self);
              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self);
              static PyObject *t_Euler_getRotationAngles(t_Euler *self);
              static PyObject *t_Euler_getRotationRates(t_Euler *self);
              static PyObject *t_Euler_hasAngles(t_Euler *self);
              static PyObject *t_Euler_hasRates(t_Euler *self);
              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self);
              static PyObject *t_Euler_rateFrameIsA(t_Euler *self);
              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data);
              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data);
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data);
              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data);
              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data);
              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data);
              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data);
              static PyGetSetDef t_Euler__fields_[] = {
                DECLARE_GET_FIELD(t_Euler, endpoints),
                DECLARE_GETSET_FIELD(t_Euler, eulerRotSeq),
                DECLARE_SET_FIELD(t_Euler, inRotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationRates),
                DECLARE_GET_FIELD(t_Euler, spacecraftBodyRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Euler__methods_[] = {
                DECLARE_METHOD(t_Euler, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_Euler, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_Euler, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_Euler, setInRotationAngles, METH_O),
                DECLARE_METHOD(t_Euler, setIndexedRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setIndexedRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_Euler, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Euler)[] = {
                { Py_tp_methods, t_Euler__methods_ },
                { Py_tp_init, (void *) t_Euler_init_ },
                { Py_tp_getset, t_Euler__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Euler)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Euler, t_Euler, Euler);

              void t_Euler::install(PyObject *module)
              {
                installType(&PY_TYPE(Euler), &PY_TYPE_DEF(Euler), module, "Euler", 0);
              }

              void t_Euler::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "class_", make_descriptor(Euler::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "wrapfn_", make_descriptor(t_Euler::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Euler::initializeClass, 1)))
                  return NULL;
                return t_Euler::wrap_Object(Euler(((t_Euler *) arg)->object.this$));
              }
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Euler::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds)
              {
                Euler object((jobject) NULL);

                INT_CALL(object = Euler());
                self->object = object;

                return 0;
              }

              static PyObject *t_Euler_getEndpoints(t_Euler *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_Euler_getRotationAngles(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationAngles());
                return result.wrap();
              }

              static PyObject *t_Euler_getRotationRates(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationRates());
                return result.wrap();
              }

              static PyObject *t_Euler_hasAngles(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasAngles());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_hasRates(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_rateFrameIsA(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setInRotationAngles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInRotationAngles", arg);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Euler), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setInRotationAngles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inRotationAngles", arg);
                return -1;
              }

              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationAngles());
                return value.wrap();
              }

              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationRates());
                return value.wrap();
              }

              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
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
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CenterName::class$ = NULL;
          jmethodID *CenterName::mids$ = NULL;
          bool CenterName::live$ = false;
          CenterName *CenterName::EARTH = NULL;
          CenterName *CenterName::EARTH_MOON = NULL;
          CenterName *CenterName::JUPITER = NULL;
          CenterName *CenterName::MARS = NULL;
          CenterName *CenterName::MERCURY = NULL;
          CenterName *CenterName::MOON = NULL;
          CenterName *CenterName::NEPTUNE = NULL;
          CenterName *CenterName::PLUTO = NULL;
          CenterName *CenterName::SATURN = NULL;
          CenterName *CenterName::SOLAR_SYSTEM_BARYCENTER = NULL;
          CenterName *CenterName::SUN = NULL;
          CenterName *CenterName::URANUS = NULL;
          CenterName *CenterName::VENUS = NULL;

          jclass CenterName::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CenterName");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCelestialBody_5df52e80cbb5eb85] = env->getMethodID(cls, "getCelestialBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getCelestialBody_8b374211b44f1a4c] = env->getMethodID(cls, "getCelestialBody", "(Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_guessCenter_e2e1dd08ff42c311] = env->getStaticMethodID(cls, "guessCenter", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_f6b8ead31421e42e] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_valueOf_7060999d9a680acf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_values_01dff14c7c4ba8da] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CenterName;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EARTH = new CenterName(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              EARTH_MOON = new CenterName(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              JUPITER = new CenterName(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MARS = new CenterName(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MERCURY = new CenterName(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MOON = new CenterName(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              NEPTUNE = new CenterName(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              PLUTO = new CenterName(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SATURN = new CenterName(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SOLAR_SYSTEM_BARYCENTER = new CenterName(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SUN = new CenterName(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              URANUS = new CenterName(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              VENUS = new CenterName(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_5df52e80cbb5eb85]));
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody(const ::org::orekit::bodies::CelestialBodies & a0) const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_8b374211b44f1a4c], a0.this$));
          }

          ::java::lang::String CenterName::guessCenter(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessCenter_e2e1dd08ff42c311], a0.this$));
          }

          CenterName CenterName::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_map_f6b8ead31421e42e], a0.this$));
          }

          CenterName CenterName::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7060999d9a680acf], a0.this$));
          }

          JArray< CenterName > CenterName::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CenterName >(env->callStaticObjectMethod(cls, mids$[mid_values_01dff14c7c4ba8da]));
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
          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CenterName_values(PyTypeObject *type);
          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data);
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data);
          static PyGetSetDef t_CenterName__fields_[] = {
            DECLARE_GET_FIELD(t_CenterName, celestialBody),
            DECLARE_GET_FIELD(t_CenterName, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CenterName__methods_[] = {
            DECLARE_METHOD(t_CenterName, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, of_, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, getCelestialBody, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, guessCenter, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CenterName, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CenterName)[] = {
            { Py_tp_methods, t_CenterName__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CenterName__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CenterName)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CenterName, t_CenterName, CenterName);
          PyObject *t_CenterName::wrap_Object(const CenterName& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CenterName::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CenterName::install(PyObject *module)
          {
            installType(&PY_TYPE(CenterName), &PY_TYPE_DEF(CenterName), module, "CenterName", 0);
          }

          void t_CenterName::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "class_", make_descriptor(CenterName::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "wrapfn_", make_descriptor(t_CenterName::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "boxfn_", make_descriptor(boxObject));
            env->getClass(CenterName::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH_MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH_MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "JUPITER", make_descriptor(t_CenterName::wrap_Object(*CenterName::JUPITER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MARS", make_descriptor(t_CenterName::wrap_Object(*CenterName::MARS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MERCURY", make_descriptor(t_CenterName::wrap_Object(*CenterName::MERCURY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "NEPTUNE", make_descriptor(t_CenterName::wrap_Object(*CenterName::NEPTUNE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "PLUTO", make_descriptor(t_CenterName::wrap_Object(*CenterName::PLUTO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SATURN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SATURN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_CenterName::wrap_Object(*CenterName::SOLAR_SYSTEM_BARYCENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SUN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SUN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "URANUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::URANUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "VENUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::VENUS)));
          }

          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CenterName::initializeClass, 1)))
              return NULL;
            return t_CenterName::wrap_Object(CenterName(((t_CenterName *) arg)->object.this$));
          }
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CenterName::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialBody());
                return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getCelestialBody(a0));
                  return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getCelestialBody", args);
            return NULL;
          }

          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::guessCenter(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessCenter", arg);
            return NULL;
          }

          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::map(a0));
              return t_CenterName::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::valueOf(a0));
              return t_CenterName::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CenterName_values(PyTypeObject *type)
          {
            JArray< CenterName > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::values());
            return JArray<jobject>(result.this$).wrap(t_CenterName::wrap_jobject);
          }
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getCelestialBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *CombinedDerivatives::class$ = NULL;
        jmethodID *CombinedDerivatives::mids$ = NULL;
        bool CombinedDerivatives::live$ = false;

        jclass CombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/CombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_getAdditionalDerivatives_25e1757a36c4dde2] = env->getMethodID(cls, "getAdditionalDerivatives", "()[D");
            mids$[mid_getMainStateDerivativesIncrements_25e1757a36c4dde2] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CombinedDerivatives::CombinedDerivatives(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

        JArray< jdouble > CombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_25e1757a36c4dde2]));
        }

        JArray< jdouble > CombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_25e1757a36c4dde2]));
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
        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data);
        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data);
        static PyGetSetDef t_CombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_CombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_CombinedDerivatives, mainStateDerivativesIncrements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_CombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CombinedDerivatives)[] = {
          { Py_tp_methods, t_CombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_CombinedDerivatives_init_ },
          { Py_tp_getset, t_CombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CombinedDerivatives, t_CombinedDerivatives, CombinedDerivatives);

        void t_CombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(CombinedDerivatives), &PY_TYPE_DEF(CombinedDerivatives), module, "CombinedDerivatives", 0);
        }

        void t_CombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "class_", make_descriptor(CombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "wrapfn_", make_descriptor(t_CombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_CombinedDerivatives::wrap_Object(CombinedDerivatives(((t_CombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          CombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = CombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return value.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return value.wrap();
        }
      }
    }
  }
}
